//*****************************************************************************
//
// interrupts.c - Interrupt preemption and tail-chaining example.
//
// Copyright (c) 2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0.1.11577 of the DK-TM4C129X Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_nvic.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/systick.h"
#include "driverlib/sysctl.h"
#include "driverlib/rom.h"
#include "grlib/grlib.h"
#include "drivers/frame.h"
#include "drivers/kentec320x240x16_ssd2119.h"
#include "drivers/pinout.h"

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Interrupts (interrupts)</h1>
//!
//! This example application demonstrates the interrupt preemption and
//! tail-chaining capabilities of Cortex-M4 microprocessor and NVIC.  Nested
//! interrupts are synthesized when the interrupts have the same priority,
//! increasing priorities, and decreasing priorities.  With increasing
//! priorities, preemption will occur; in the other two cases tail-chaining
//! will occur.  The currently pending interrupts and the currently executing
//! interrupt will be displayed on the display; GPIO pins B3, L1 and L0 (the
//! GPIO on jumper J27 on the left edge of the board) will be asserted upon
//! interrupt handler entry and de-asserted before interrupt handler exit so
//! that the off-to-on time can be observed with a scope or logic analyzer to
//! see the speed of tail-chaining (for the two cases where tail-chaining is
//! occurring).
//
//*****************************************************************************


//*****************************************************************************
//
// The count of interrupts received.  This is incremented as each interrupt
// handler runs, and its value saved into interrupt handler specific values to
// determine the order in which the interrupt handlers were executed.
//
//*****************************************************************************
volatile uint32_t g_ui32Index;

//*****************************************************************************
//
// The value of g_ui32Index when the INT_GPIOA interrupt was processed.
//
//*****************************************************************************
volatile uint32_t g_ui32GPIOa;

//*****************************************************************************
//
// The value of g_ui32Index when the INT_GPIOB interrupt was processed.
//
//*****************************************************************************
volatile uint32_t g_ui32GPIOb;

//*****************************************************************************
//
// The value of g_ui32Index when the INT_GPIOC interrupt was processed.
//
//*****************************************************************************
volatile uint32_t g_ui32GPIOc;

//*****************************************************************************
//
// Graphics context used to show text on the display.
//
//*****************************************************************************
tContext g_sContext;

//*****************************************************************************
//
// GPIOs that are used for this example.
//
//*****************************************************************************
#define GPIO_A_BASE     GPIO_PORTB_BASE
#define GPIO_A_PIN      GPIO_PIN_3
#define GPIO_B_BASE     GPIO_PORTL_BASE
#define GPIO_B_PIN      GPIO_PIN_1
#define GPIO_C_BASE     GPIO_PORTL_BASE
#define GPIO_C_PIN      GPIO_PIN_0

//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif

//*****************************************************************************
//
// Delay for the specified number of seconds.  Depending upon the current
// SysTick value, the delay will be between N-1 and N seconds (i.e. N-1 full
// seconds are guaranteed, along with the remainder of the current second).
//
//*****************************************************************************
void
Delay(uint32_t ui32Seconds)
{
    uint8_t ui8Loop;

    //
    // Loop while there are more seconds to wait.
    //
    while(ui32Seconds--)
    {
        for(ui8Loop = 0; ui8Loop < 100; ui8Loop++)
        {
            //
            // Wait until the SysTick value is less than 1000.
            //
            while(ROM_SysTickValueGet() > 1000)
            {
            }

            //
            // Wait until the SysTick value is greater than 1000.
            //
            while(ROM_SysTickValueGet() < 1000)
            {
            }
        }
    }
}

//*****************************************************************************
//
// Display the interrupt state on the display.  The currently active and pending
// interrupts are displayed.
//
//*****************************************************************************
void
DisplayIntStatus(void)
{
    uint32_t ui32Temp;
    char pcBuffer[6];

    //
    // Display the currently active interrupts.
    //
    ui32Temp = HWREG(NVIC_ACTIVE0);
    pcBuffer[0] = ' ';
    pcBuffer[1] = (ui32Temp & 1) ? '1' : ' ';
    pcBuffer[2] = (ui32Temp & 2) ? '2' : ' ';
    pcBuffer[3] = (ui32Temp & 4) ? '3' : ' ';
    pcBuffer[4] = ' ';
    pcBuffer[5] = '\0';
    GrStringDrawCentered(&g_sContext, pcBuffer, -1, 130, 150, 1);

    //
    // Display the currently pending interrupts.
    //
    ui32Temp = HWREG(NVIC_PEND0);
    pcBuffer[1] = (ui32Temp & 1) ? '1' : ' ';
    pcBuffer[2] = (ui32Temp & 2) ? '2' : ' ';
    pcBuffer[3] = (ui32Temp & 4) ? '3' : ' ';
    GrStringDrawCentered(&g_sContext, pcBuffer, -1, 270, 150, 1);

    //
    // Flush the display.
    //
    GrFlush(&g_sContext);
}

//*****************************************************************************
//
// This is the handler for INT_GPIOA.  It simply saves the interrupt sequence
// number.
//
//*****************************************************************************
void
IntGPIOa(void)
{
    //
    // Set GPIO high to indicate entry to this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_A_BASE, GPIO_A_PIN, GPIO_A_PIN);

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Save and increment the interrupt sequence number.
    //
    g_ui32GPIOa = g_ui32Index++;

    //
    // Set GPIO low to indicate exit from this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_A_BASE, GPIO_A_PIN, 0);
}

//*****************************************************************************
//
// This is the handler for INT_GPIOB.  It triggers INT_GPIOA and saves the
// interrupt sequence number.
//
//*****************************************************************************
void
IntGPIOb(void)
{
    //
    // Set GPIO high to indicate entry to this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_B_BASE, GPIO_B_PIN, GPIO_B_PIN);

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Trigger the INT_GPIOA interrupt.
    //
    HWREG(NVIC_SW_TRIG) = INT_GPIOA - 16;

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Save and increment the interrupt sequence number.
    //
    g_ui32GPIOb = g_ui32Index++;

    //
    // Set GPIO low to indicate exit from this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_B_BASE, GPIO_B_PIN, 0);
}

//*****************************************************************************
//
// This is the handler for INT_GPIOC.  It triggers INT_GPIOB and saves the
// interrupt sequence number.
//
//*****************************************************************************
void
IntGPIOc(void)
{
    //
    // Set GPIO high to indicate entry to this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_C_BASE, GPIO_C_PIN, GPIO_C_PIN);

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Trigger the INT_GPIOB interrupt.
    //
    HWREG(NVIC_SW_TRIG) = INT_GPIOB - 16;

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Save and increment the interrupt sequence number.
    //
    g_ui32GPIOc = g_ui32Index++;

    //
    // Set GPIO low to indicate exit from this interrupt handler.
    //
    ROM_GPIOPinWrite(GPIO_C_BASE, GPIO_C_PIN, 0);
}

//*****************************************************************************
//
// This is the main example program.  It checks to see that the interrupts are
// processed in the correct order when they have identical priorities,
// increasing priorities, and decreasing priorities.  This exercises interrupt
// preemption and tail chaining.
//
//*****************************************************************************
int
main(void)
{
    uint_fast8_t ui8Error;
    uint32_t ui32SysClock;

    //
    // Run from the PLL at 120 MHz.
    //
    ui32SysClock = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                       SYSCTL_OSC_MAIN |
                                       SYSCTL_USE_PLL |
                                       SYSCTL_CFG_VCO_480), 120000000);

    //
    // Configure the device pins.
    //
    PinoutSet();

    //
    // Initialize the display driver.
    //
    Kentec320x240x16_SSD2119Init(ui32SysClock);

    //
    // Initialize the graphics context.
    //
    GrContextInit(&g_sContext, &g_sKentec320x240x16_SSD2119);

    //
    // Draw the application frame.
    //
    FrameDraw(&g_sContext, "interrupts");

    //
    // Put the status header text on the display.
    //
    GrContextFontSet(&g_sContext, g_psFontCm20);
    GrStringDrawCentered(&g_sContext, "Active:      Pending:     ", -1,
                 GrContextDpyWidthGet(&g_sContext) / 2, 150, 0);

    //
    // Configure the B3, L1 and L0 to be outputs to indicate entry/exit of one
    // of the interrupt handlers.
    //
    GPIOPinTypeGPIOOutput(GPIO_A_BASE, GPIO_A_PIN);
    GPIOPinTypeGPIOOutput(GPIO_B_BASE, GPIO_B_PIN);
    GPIOPinTypeGPIOOutput(GPIO_C_BASE, GPIO_C_PIN);
    GPIOPinWrite(GPIO_A_BASE, GPIO_A_PIN, 0);
    GPIOPinWrite(GPIO_B_BASE, GPIO_B_PIN, 0);
    GPIOPinWrite(GPIO_C_BASE, GPIO_C_PIN, 0);

    //
    // Set up and enable the SysTick timer.  It will be used as a reference
    // for delay loops in the interrupt handlers.  The SysTick timer period
    // will be set up for 100 times per second.
    //
    ROM_SysTickPeriodSet(ui32SysClock / 100);
    ROM_SysTickEnable();

    //
    // Reset the error indicator.
    //
    ui8Error = 0;

    //
    // Enable interrupts to the processor.
    //
    ROM_IntMasterEnable();

    //
    // Enable the interrupts.
    //
    ROM_IntEnable(INT_GPIOA);
    ROM_IntEnable(INT_GPIOB);
    ROM_IntEnable(INT_GPIOC);

    //
    // Indicate that the equal interrupt priority test is beginning.
    //
    GrStringDrawCentered(&g_sContext, "Equal Priority", -1,
                         GrContextDpyWidthGet(&g_sContext) / 2, 60, 1);

    //
    // Set the interrupt priorities so they are all equal.
    //
    ROM_IntPrioritySet(INT_GPIOA, 0x00);
    ROM_IntPrioritySet(INT_GPIOB, 0x00);
    ROM_IntPrioritySet(INT_GPIOC, 0x00);

    //
    // Reset the interrupt flags.
    //
    g_ui32GPIOa = 0;
    g_ui32GPIOb = 0;
    g_ui32GPIOc = 0;
    g_ui32Index = 1;

    //
    // Trigger the interrupt for GPIO C.
    //
    HWREG(NVIC_SW_TRIG) = INT_GPIOC - 16;

    //
    // Put the current interrupt state on the LCD.
    //
    DisplayIntStatus();

    //
    // Verify that the interrupts were processed in the correct order.
    //
    if((g_ui32GPIOa != 3) || (g_ui32GPIOb != 2) || (g_ui32GPIOc != 1))
    {
        ui8Error |= 1;
    }

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Indicate that the decreasing interrupt priority test is beginning.
    //
    GrStringDrawCentered(&g_sContext, " Decreasing Priority ", -1,
                         GrContextDpyWidthGet(&g_sContext) / 2, 60, 1);

    //
    // Set the interrupt priorities so that they are decreasing (i.e. C > B >
    // A).
    //
    ROM_IntPrioritySet(INT_GPIOA, 0x80);
    ROM_IntPrioritySet(INT_GPIOB, 0x40);
    ROM_IntPrioritySet(INT_GPIOC, 0x00);

    //
    // Reset the interrupt flags.
    //
    g_ui32GPIOa = 0;
    g_ui32GPIOb = 0;
    g_ui32GPIOc = 0;
    g_ui32Index = 1;

    //
    // Trigger the interrupt for GPIO C.
    //
    HWREG(NVIC_SW_TRIG) = INT_GPIOC - 16;

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Verify that the interrupts were processed in the correct order.
    //
    if((g_ui32GPIOa != 3) || (g_ui32GPIOb != 2) || (g_ui32GPIOc != 1))
    {
        ui8Error |= 2;
    }

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Indicate that the increasing interrupt priority test is beginning.
    //
    GrStringDrawCentered(&g_sContext, " Increasing Priority ", -1,
                         GrContextDpyWidthGet(&g_sContext) / 2, 60, 1);

    //
    // Set the interrupt priorities so that they are increasing (i.e. C < B <
    // A).
    //
    ROM_IntPrioritySet(INT_GPIOA, 0x00);
    ROM_IntPrioritySet(INT_GPIOB, 0x40);
    ROM_IntPrioritySet(INT_GPIOC, 0x80);

    //
    // Reset the interrupt flags.
    //
    g_ui32GPIOa = 0;
    g_ui32GPIOb = 0;
    g_ui32GPIOc = 0;
    g_ui32Index = 1;

    //
    // Trigger the interrupt for GPIO C.
    //
    HWREG(NVIC_SW_TRIG) = INT_GPIOC - 16;

    //
    // Put the current interrupt state on the display.
    //
    DisplayIntStatus();

    //
    // Verify that the interrupts were processed in the correct order.
    //
    if((g_ui32GPIOa != 1) || (g_ui32GPIOb != 2) || (g_ui32GPIOc != 3))
    {
        ui8Error |= 4;
    }

    //
    // Wait two seconds.
    //
    Delay(2);

    //
    // Disable the interrupts.
    //
    ROM_IntDisable(INT_GPIOA);
    ROM_IntDisable(INT_GPIOB);
    ROM_IntDisable(INT_GPIOC);

    //
    // Disable interrupts to the processor.
    //
    ROM_IntMasterDisable();

    //
    // Print out the test results.
    //
    GrStringDrawCentered(&g_sContext, " Interrupt Priority ", -1,
                         GrContextDpyWidthGet(&g_sContext) / 2, 60, 1);
    if(ui8Error)
    {
        GrStringDrawCentered(&g_sContext, "     Equal: P  Inc: P  Dec: P     ",
                             -1, GrContextDpyWidthGet(&g_sContext) / 2, 150, 1);
        if(ui8Error & 1)
        {
            GrStringDrawCentered(&g_sContext, " F ", -1, 113, 150, 1);
        }
        if(ui8Error & 2)
        {
            GrStringDrawCentered(&g_sContext, " F ", -1, 187, 150, 1);
        }
        if(ui8Error & 4)
        {
            GrStringDrawCentered(&g_sContext, " F ", -1, 272, 150, 1);
        }
    }
    else
    {
        GrStringDrawCentered(&g_sContext, "           Success!           ", -1,
                             GrContextDpyWidthGet(&g_sContext) / 2, 150, 1);
    }

    //
    // Flush the display.
    //
    GrFlush(&g_sContext);

    //
    // Loop forever.
    //
    while(1)
    {
    }
}
