//*****************************************************************************
//
// context.c - Routines for handling drawing contexts.
//
// Copyright (c) 2007-2013 Texas Instruments Incorporated.  All rights reserved.
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
// This is part of revision 2.0.1.11577 of the Tiva Graphics Library.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "driverlib/debug.h"
#include "grlib/grlib.h"

//*****************************************************************************
//
//! \addtogroup primitives_api
//! @{
//
//*****************************************************************************

#ifndef GRLIB_REMOVE_WIDE_FONT_SUPPORT
//*****************************************************************************
//
// A pointer to the application-passed structure containing default values for
// various text rendering properties.
//
//*****************************************************************************
static tGrLibDefaults const *g_psGrLibDefaults;

//
// Default text mapping functions.  This table allows the use of 8 bit encoded
// source text with either Unicode encoded wide fonts or legacy fonts
// which are assumed to contain ISO8859-1 text (ASCII + western European).
//
const tCodePointMap g_psDefaultCodePointMapTable[] =
{
    {CODEPAGE_ISO8859_1, CODEPAGE_UNICODE, GrMapISO8859_1_Unicode},
    {CODEPAGE_ISO8859_1, CODEPAGE_ISO8859_1, GrMapISO8859_1_Unicode}
};

#define NUM_DEFAULT_CODEPOINT_MAPS (sizeof(g_psDefaultCodePointMapTable) /  \
                                    sizeof(tCodePointMap))

//*****************************************************************************
//
//! Initializes graphics library default text rendering values.
//!
//! \param pDefaults points to a structure containing default values to use.
//!
//! This function allows an application to set global default values that the
//! graphics library will use when initializing any graphics context.  These
//! values set the source text codepage, the rendering function to use for
//! strings and mapping functions used to allow extraction of the correct
//! glyphs from fonts.
//!
//! If this function is not called by an application, the graphics library
//! assumes that text strings are ISO8859-1 encoded and that the default string
//! renderer is used.
//!
//! \return None.
//
//*****************************************************************************
void
GrLibInit(const tGrLibDefaults *pDefaults)
{
    ASSERT(pDefaults);

    //
    // Remember the pointer to the defaults structure.
    //
    g_psGrLibDefaults = pDefaults;
}

#endif

//*****************************************************************************
//
//! Initializes a drawing context.
//!
//! \param psContext is a pointer to the drawing context to initialize.
//! \param psDisplay is a pointer to the tDisplayInfo structure that describes
//! the display driver to use.
//!
//! This function initializes a drawing context, preparing it for use.  The
//! provided display driver will be used for all subsequent graphics
//! operations, and the default clipping region will be set to the extent of
//! the screen.
//!
//! \return None.
//
//*****************************************************************************
void
GrContextInit(tContext *psContext, const tDisplay *psDisplay)
{
    //
    // Check the arguments.
    //
    ASSERT(psContext);
    ASSERT(psDisplay);

    //
    // Set the size of the context.
    //
    psContext->i32Size = sizeof(tContext);

    //
    // Save the pointer to the display.
    //
    psContext->psDisplay = psDisplay;

    //
    // Initialize the extent of the clipping region to the extents of the
    // screen.
    //
    psContext->sClipRegion.i16XMin = 0;
    psContext->sClipRegion.i16YMin = 0;
    psContext->sClipRegion.i16XMax = psDisplay->ui16Width - 1;
    psContext->sClipRegion.i16YMax = psDisplay->ui16Height - 1;

    //
    // Provide a default color and font.
    //
    psContext->ui32Foreground = 0;
    psContext->ui32Background = 0;
    psContext->psFont = 0;

#ifndef GRLIB_REMOVE_WIDE_FONT_SUPPORT
    //
    // Set defaults for all text rendering options.
    //
    if(g_psGrLibDefaults)
    {
        psContext->pfnStringRenderer = g_psGrLibDefaults->pfnStringRenderer;
        psContext->pCodePointMapTable = g_psGrLibDefaults->pCodePointMapTable;
        psContext->ui16Codepage = g_psGrLibDefaults->ui16Codepage;
        psContext->ui8NumCodePointMaps = g_psGrLibDefaults->ui8NumCodePointMaps;
        psContext->ui8Reserved = g_psGrLibDefaults->ui8Reserved;
    }
    else
    {
        psContext->pfnStringRenderer = GrDefaultStringRenderer;
        psContext->pCodePointMapTable = g_psDefaultCodePointMapTable;
        psContext->ui16Codepage = CODEPAGE_ISO8859_1;
        psContext->ui8NumCodePointMaps = NUM_DEFAULT_CODEPOINT_MAPS;
        psContext->ui8Reserved = 0;
    }
    psContext->ui8CodePointMap = 0;
#endif
}

//*****************************************************************************
//
//! Sets the extents of the clipping region.
//!
//! \param psContext is a pointer to the drawing context to use.
//! \param pRect is a pointer to the structure containing the extents of the
//! clipping region.
//!
//! This function sets the extents of the clipping region.  The clipping region
//! is not allowed to exceed the extents of the screen, but may be a portion of
//! the screen.
//!
//! The supplied coordinate are inclusive; \e i16XMin of 1 and \e i16XMax of 1
//! will define a clipping region that will display only the pixels in the
//! X = 1 column.  A consequence of this is that the clipping region must
//! contain at least one row and one column.
//!
//! \return None.
//
//*****************************************************************************
void
GrContextClipRegionSet(tContext *psContext, tRectangle *pRect)
{
    uint32_t ui32W, ui32H;

    //
    // Check the arguments.
    //
    ASSERT(psContext);
    ASSERT(pRect);

    //
    // Get the width and height of the display.
    //
    ui32W = DpyWidthGet(psContext->psDisplay);
    ui32H = DpyHeightGet(psContext->psDisplay);

    //
    // Set the extents of the clipping region, forcing them to reside within
    // the extents of the screen.
    //
    psContext->sClipRegion.i16XMin = ((pRect->i16XMin < 0) ? 0 :
                                   ((pRect->i16XMin >= ui32W) ? (ui32W - 1) :
                                    pRect->i16XMin));
    psContext->sClipRegion.i16YMin = ((pRect->i16YMin < 0) ? 0 :
                                   ((pRect->i16YMin >= ui32H) ? (ui32H - 1) :
                                    pRect->i16YMin));
    psContext->sClipRegion.i16XMax = ((pRect->i16XMax < 0) ? 0 :
                                   ((pRect->i16XMax >= ui32W) ? (ui32W - 1) :
                                    pRect->i16XMax));
    psContext->sClipRegion.i16YMax = ((pRect->i16YMax < 0) ? 0 :
                                   ((pRect->i16YMax >= ui32H) ? (ui32H - 1) :
                                    pRect->i16YMax));
}

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************
