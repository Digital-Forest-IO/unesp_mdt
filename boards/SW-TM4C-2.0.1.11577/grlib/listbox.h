//*****************************************************************************
//
// listbox.h - Prototypes for the listbox widget.
//
// Copyright (c) 2008-2013 Texas Instruments Incorporated.  All rights reserved.
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

#ifndef __LISTBOX_H__
#define __LISTBOX_H__

//*****************************************************************************
//
//! \addtogroup listbox_api
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
//! The structure that describes a listbox widget.
//
//*****************************************************************************
typedef struct
{
    //
    //! The generic widget information.
    //
    tWidget sBase;

    //
    //! The style for this widget.  This is a set of flags defined by
    //! LISTBOX_STYLE_xxx.
    //
    uint32_t ui32Style;

    //
    //! The 24-bit RGB color used as the background for the listbox.
    //
    uint32_t ui32BackgroundColor;

    //
    //! The 24-bit RGB color used as the background for the selected entry
    //! in the listbox.
    //
    uint32_t ui32SelectedBackgroundColor;

    //
    //! The 24-bit RGB color used to draw text on this listbox.
    //
    uint32_t ui32TextColor;

    //
    //! The 24-bit RGB color used to draw the selected text on this listbox.
    //
    uint32_t ui32SelectedTextColor;


    //
    //! The 24-bit RGB color used to outline this listbox, if
    //! LISTBOX_STYLE_OUTLINE is selected.
    //
    uint32_t ui32OutlineColor;

    //
    //! A pointer to the font used to render the listbox text.
    //
    const tFont *psFont;

    //
    //! A pointer to the array of string pointers representing the contents of
    //! the list box.
    //
    const char **ppcText;

    //
    //! The number of elements in the array pointed to by pci8Text.
    //
    uint16_t ui16MaxEntries;

    //
    //! The number of elements in the array pointed to by pci8Text which are
    //! currently populated with strings.
    //
    uint16_t ui16Populated;

    //
    //! The index of the string currently selected in the list box.  If no
    //! selection has been made, this will be set to 0xFFFF (-1).
    //
    int16_t i16Selected;

    //
    //! The index of the string that appears at the top of the list box.  This
    //! is used by the widget class to control scrolling of the box content.
    //! This is an internal variable and must not be modified by an application
    //! using this widget class.
    //
    uint16_t ui16StartEntry;

    //
    //! The index of the oldest entry in the ppcText array.  This is used by the
    //! widget class to determine where to add a new string if the array is
    //! full and the listbox has style LISTBOX_STYLE_WRAP.  This is an internal
    //! variable and must not be modified by an application using this widget
    //! class.
    //
    uint16_t ui16OldestEntry;

    //
    //! A flag which we use to determine whether to change the selected element
    //! when the pointer is lifted.  The listbox will change the selection if
    //! no scrolling was performed since the last WIDGET_MSG_PTR_DOWN was
    //! received.  This is an internal variable and must not be modified by
    //! an application using this widget class.
    //
    uint16_t ui16Scrolled;

    //
    //! The Y coordinate of the last pointer position we received.  This is an
    //! internal variable used to manage scrolling of the listbox contents and
    //! must not be modified by an application using this widget class.
    //
    int32_t i32PointerY;

    //
    //! A pointer to the application-supplied callback function.  This function
    //! will be called each time the selected element in the list box changes.
    //! The ui16SelIndex parameter contains the index of the selected string in
    //! ppcText array or, if no element is selected, 0xFFFF (-1).
    //
    void (*pfnOnChange)(tWidget *psWidget, int16_t ui16SelIndex);
}
tListBoxWidget;

//*****************************************************************************
//
//! This flag indicates that the listbox should be outlined.  If enabled, the
//! widget is drawn with a two pixel border, the outer, single pixel rectangle
//! of which is in the color found in the ui32OutlineColor field of the widget
//! structure and the inner rectangle in color ui32BackgroundColor.
//
//*****************************************************************************
#define LISTBOX_STYLE_OUTLINE    0x00000001

//*****************************************************************************
//
//! This flag indicates that the listbox is not interactive but merely displays
//! strings.  Scrolling of the listbox content is supported when this flag is
//! set but widgets using this style do not make callbacks to the application
//! and do not support selection and deselection of entries.  This may be used
//! if a listbox is intended, for example, as a text output or status reporting
//! control.
//
//*****************************************************************************
#define LISTBOX_STYLE_LOCKED     0x00000002

//*****************************************************************************
//
//! This flag controls the behavior of the listbox if a new string is added
//! when the string table (ppcText) is already full.  If this style is set, the
//! oldest string in the table is replaced with new one and, if the discarded
//! string was currently displayed, the display positions will be fixed up to
//! ensure that the (new) oldest string remains at the top of the listbox.  If
//! this style is not set, the attempt to set a new string will fail if the
//! table is full.
//
//*****************************************************************************
#define LISTBOX_STYLE_WRAP       0x00000004

//*****************************************************************************
//
//! Declares an initialized listbox widget data structure.
//!
//! \param psParent is a pointer to the parent widget.
//! \param psNext is a pointer to the sibling widget.
//! \param psChild is a pointer to the first child widget.
//! \param psDisplay is a pointer to the display on which to draw the listbox.
//! \param i32X is the X coordinate of the upper left corner of the listbox.
//! \param i32Y is the Y coordinate of the upper left corner of the listbox.
//! \param i32Width is the width of the listbox.
//! \param i32Height is the height of the listbox.
//! \param ui32Style is the style to be applied to the listbox.
//! \param ui32BgColor is the background color for the listbox.
//! \param ui32SelBgColor is the background color for the selected element in
//! the listbox.
//! \param ui32TextColor is the color used to draw text on the listbox.
//! \param ui32SelTextColor is the color used to draw the selected element
//! text in the listbox.
//! \param ui32OutlineColor is the color used to outline the listbox.
//! \param psFont is a pointer to the font to be used to draw text on the
//! listbox.
//! \param ppcText is a pointer to the string table for the listbox.
//! \param ui16MaxEntries provides the number of entries in the \e ppcText
//! array and represents the maximum number of strings the listbox can hold.
//! \param ui16PopulatedEntries indicates the number of entries in the
//! \e ppcText array that currently hold valid string for the listbox.
//! \param pfnOnChange is a pointer to the application callback for the
//! listbox.
//!
//! This macro provides an initialized listbox widget data structure, which can
//! be used to construct the widget tree at compile time in global variables
//! (as opposed to run-time via function calls).  This must be assigned to a
//! variable, such as:
//!
//! \verbatim
//!     tListBoxWidget g_sListBox = ListBoxStruct(...);
//! \endverbatim
//!
//! Or, in an array of variables:
//!
//! \verbatim
//!     tListBoxWidget g_psListBox[] =
//!     {
//!         ListBoxStruct(...),
//!         ListBoxStruct(...)
//!     };
//! \endverbatim
//!
//! \e ui32Style is the logical OR of the following:
//!
//! - \b #LISTBOX_STYLE_OUTLINE to indicate that the listbox should be outlined.
//! - \b #LISTBOX_STYLE_LOCKED to indicate that the listbox should ignore user
//!   input and merely display its contents.
//! - \b #LISTBOX_STYLE_WRAP to indicate that the listbox should discard the
//!   oldest string it contains if asked to add a new string while the string
//!   table is already full.
//!
//! \return Nothing; this is not a function.
//
//*****************************************************************************
#define ListBoxStruct(psParent, psNext, psChild, psDisplay, i32X, i32Y,       \
                      i32Width, i32Height, ui32Style, ui32BgColor,            \
                      ui32SelBgColor, ui32TextColor, ui32SelTextColor,        \
                      ui32OutlineColor, psFont, ppcText, ui16MaxEntries,      \
                      ui16PopulatedEntries, pfnOnChange)                      \
        {                                                                     \
            {                                                                 \
                sizeof(tListBoxWidget),                                       \
                (tWidget *)(psParent),                                        \
                (tWidget *)(psNext),                                          \
                (tWidget *)(psChild),                                         \
                psDisplay,                                                    \
                {                                                             \
                    i32X,                                                     \
                    i32Y,                                                     \
                    (i32X) + (i32Width) - 1,                                  \
                    (i32Y) + (i32Height) - 1                                  \
                },                                                            \
                ListBoxMsgProc                                                \
            },                                                                \
            ui32Style,                                                        \
            ui32BgColor,                                                      \
            ui32SelBgColor,                                                   \
            ui32TextColor,                                                    \
            ui32SelTextColor,                                                 \
            ui32OutlineColor,                                                 \
            psFont,                                                           \
            ppcText,                                                          \
            ui16MaxEntries,                                                   \
            ui16PopulatedEntries,                                             \
            (int16_t)0xFFFF,                                                  \
            0,                                                                \
            0,                                                                \
            0,                                                                \
            0,                                                                \
            pfnOnChange                                                       \
        }

//*****************************************************************************
//
//! Declares an initialized variable containing a listbox widget data structure.
//!
//! \param sName is the name of the variable to be declared.
//! \param psParent is a pointer to the parent widget.
//! \param psNext is a pointer to the sibling widget.
//! \param psChild is a pointer to the first child widget.
//! \param psDisplay is a pointer to the display on which to draw the listbox.
//! \param i32X is the X coordinate of the upper left corner of the listbox.
//! \param i32Y is the Y coordinate of the upper left corner of the listbox.
//! \param i32Width is the width of the listbox.
//! \param i32Height is the height of the listbox.
//! \param ui32Style is the style to be applied to the listbox.
//! \param ui32BgColor is the background color for the listbox.
//! \param ui32SelBgColor is the background color for the selected element in
//! the listbox.
//! \param ui32TextColor is the color used to draw text on the listbox.
//! \param ui32SelTextColor is the color used to draw the selected element
//! text in the listbox.
//! \param ui32OutlineColor is the color used to outline the listbox.
//! \param psFont is a pointer to the font to be used to draw text on the
//! listbox.
//! \param ppcText is a pointer to the string table for the listbox.
//! \param ui16MaxEntries provides the number of entries in the \e ppcText
//! array and represents the maximum number of strings the listbox can hold.
//! \param ui16PopulatedEntries indicates the number of entries in the
//! \e ppcText array that currently hold valid string for the listbox.
//! \param pfnOnChange is a pointer to the application callback for the
//! listbox.
//!
//! This macro declares a variable containing an initialized listbox widget
//! data structure, which can be used to construct the widget tree at compile
//! time in global variables (as opposed to run-time via function calls).
//!
//! \e ui32Style is the logical OR of the following:
//!
//! - \b #LISTBOX_STYLE_OUTLINE to indicate that the listbox should be outlined.
//! - \b #LISTBOX_STYLE_LOCKED to indicate that the listbox should ignore user
//!   input and merely display its contents.
//! - \b #LISTBOX_STYLE_WRAP to indicate that the listbox should discard the
//!   oldest string it contains if asked to add a new string while the string
//!   table is already full.
//!
//! \return Nothing; this is not a function.
//
//*****************************************************************************
#define ListBox(sName, psParent, psNext, psChild, psDisplay, i32X, i32Y,      \
                i32Width, i32Height, ui32Style, ui32BgColor, ui32SelBgColor,  \
                ui32TextColor, ui32SelTextColor, ui32OutlineColor, psFont,    \
                ppcText, ui16MaxEntries, ui16PopulatedEntries, pfnOnChange)   \
tListBoxWidget sName =                                                        \
    ListBoxStruct(psParent, psNext, psChild, psDisplay, i32X, i32Y, i32Width, \
                  i32Height, ui32Style, ui32BgColor, ui32SelBgColor,          \
                  ui32TextColor, ui32SelTextColor, ui32OutlineColor, psFont,  \
                  ppcText, ui16MaxEntries, ui16PopulatedEntries, pfnOnChange)

//*****************************************************************************
//
//! Sets the function to call when the listbox selection changes.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//! \param pfnCallback is a pointer to the function to call.
//!
//! This function sets the function to be called when the selected element in
//! this listbox changes.  If style \b #LISTBOX_STYLE_LOCKED is selected, or
//! the callback function pointer set is NULL, no callbacks will be made.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxCallbackSet(psWidget, pfnCallback)                             \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->pfnOnChange = pfnCallback;                                   \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the background color of a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param ui32Color is the 24-bit RGB color to use for the listbox background.
//!
//! This function changes the color used for the listbox background on the
//! display.  The display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxBackgroundColorSet(psWidget, ui32Color)                        \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32BackgroundColor = ui32Color;                             \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the background color of the selected element in a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param ui32Color is the 24-bit RGB color to use for the background of the
//! selected element.
//!
//! This function changes the color used for the background of the selected
//! line of text on the display.  The display is not updated until the next
//! paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxSelectedBackgroundColorSet(psWidget, ui32Color)                \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32SelectedBackgroundColor = ui32Color;                     \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the font for a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//! \param pFnt is a pointer to the font to use to draw text on the listbox.
//!
//! This function changes the font used to draw text on the listbox.  The
//! display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxFontSet(psWidget, pFnt)                                        \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            const tFont *pF = pFnt;                                           \
            psW->psFont = pF;                                                 \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the outline color of a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param ui32Color is the 24-bit RGB color to use to outline the listbox.
//!
//! This function changes the color used to outline the listbox on the display.
//! The display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxOutlineColorSet(psWidget, ui32Color)                           \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32OutlineColor = ui32Color;                                \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Disables outlining of a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function disables the outlining of a listbox widget.  The display is
//! not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxOutlineOff(psWidget)                                           \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style &= ~(LISTBOX_STYLE_OUTLINE);                       \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Enables outlining of a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function enables the outlining of a listbox widget.  The display is
//! not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxOutlineOn(psWidget)                                            \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style |= LISTBOX_STYLE_OUTLINE;                          \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the text color of a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param ui32Color is the 24-bit RGB color to use to draw text on the
//! listbox.
//!
//! This function changes the color used to draw text on the listbox on the
//! display.  The display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxTextColorSet(psWidget, ui32Color)                              \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32TextColor = ui32Color;                                   \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the text color of the selected element in a listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param ui32Color is the 24-bit RGB color to use to draw the selected text
//! on the listbox.
//!
//! This function changes the color used to draw the selected element text
//! on the display.  The display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxSelectedTextColorSet(psWidget, ui32Color)                      \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32SelectedTextColor = ui32Color;                           \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Changes the text associated with an element in the listbox widget.
//!
//! \param psWidget is a pointer to the listbox widget to be modified.
//! \param pcTxt is a pointer to the new text string.
//! \param ui32Index is the index of the element whose string is to be
//! replaced.
//!
//! This function replaces the string associated with one of the listbox
//! elements.  This call should only be used to replace a string for an
//! already-populated element.  To add a new string, use ListBoxTextAdd().
//! The display is not updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxTextSet(psWidget, pcTxt, ui32Index)                            \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            const char *pcT = pcTxt;                                          \
            if(ui32Index < psW->ui16MaxEntries)                               \
            {                                                                 \
                psW->ppcText[ui32Index] = pcT;                                \
            }                                                                 \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Locks a listbox making it ignore attempts to select elements.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function locks a listbox widget and makes it ignore attempts to
//! select or deselect an element.  When locked, a listbox acts as a passive
//! indicator.  Strings may be added and the selected element changed via
//! calls to ListBoxSelectioSet() but pointer activity will not change the
//! selection and no callbacks will be made.  In this mode, the user may still
//! use the pointer to scroll the content of the listbox assuming it contains
//! more strings that can be displayed in the widget area.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxLock(psWidget)                                                 \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style |= LISTBOX_STYLE_LOCKED;                           \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Unlocks a listbox making it respond to pointer input.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function unlocks a listbox widget.  When unlocked, a listbox will
//! respond to pointer input by setting its selected element appropriately and
//! informing the application of changes via callbacks.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxUnlock(psWidget)                                               \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style &= ~(LISTBOX_STYLE_LOCKED);                        \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Enables wrapping in a listbox.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function enables text wrapping in a listbox widget.  With wrapping
//! enabled, calls to ListBoxTextAdd() made when the widget string table is
//! full will discard the oldest string in favor of the new one.  If wrapping
//! is disabled, these calls will fail.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxWrapEnable(psWidget)                                           \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style &= ~(LISTBOX_STYLE_WRAP);                          \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Disables text wrapping in a listbox.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function disables text wrapping in a listbox widget.  With wrapping
//! enabled, calls to ListBoxTextAdd() made when the widget string table is
//! full will discard the oldest string in favor of the new one.  If wrapping
//! is disabled, these calls will fail.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxWrapDisable(psWidget)                                          \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui32Style |= LISTBOX_STYLE_WRAP;                             \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Empties the listbox.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//!
//! This function removes all text from a listbox widget.  The display is not
//! updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxClear(psWidget)                                                \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            psW->ui16Populated = 0;                                           \
            psW->i16Selected = (int16_t)0xFFFF;                               \
            psW->ui16StartEntry = 0;                                          \
            psW->ui16OldestEntry = 0;                                         \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Sets the current selection within the listbox.
//!
//! \param psWidget is a pointer to the listbox widget to modify.
//! \param i16Sel is the index of the item to select.
//!
//! This function selects an item within the list box.  The display is not
//! updated until the next paint request.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxSelectionSet(psWidget, i16Sel)                                 \
        do                                                                    \
        {                                                                     \
            tListBoxWidget *psW = psWidget;                                   \
            if((i16Sel) < psW->ui16Populated)                                 \
            {                                                                 \
                psW->i16Selected = (i16Sel);                                  \
            }                                                                 \
        }                                                                     \
        while(0)

//*****************************************************************************
//
//! Gets the index of the current selection within the listbox.
//!
//! \param psWidget is a pointer to the listbox widget to be queried.
//!
//! This function returns the index of the item currently selected in a
//! listbox.  If no selection has been made, 0xFFFF (-1) is returned.
//!
//! \return None.
//
//*****************************************************************************
#define ListBoxSelectionGet(psWidget)                                         \
                                (((tListBoxWidget *)(psWidget))->i16Selected)

//*****************************************************************************
//
// Prototypes for the listbox widget APIs.
//
//*****************************************************************************
extern int32_t ListBoxMsgProc(tWidget *psWidget, uint32_t ui32Msg,
                          uint32_t ui32Param1, uint32_t ui32Param2);
extern void ListBoxInit(tListBoxWidget *psWidget, const tDisplay *psDisplay,
                        const char **ppcText, uint16_t ui16MaxEntries,
                        uint16_t ui16PopulatedEntries,
                        int32_t i32X, int32_t i32Y,
                        int32_t i32Width, int32_t i32Height);
extern int32_t ListBoxTextAdd(tListBoxWidget *psWidget, const char *pcTxt);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************

#endif // __LISTBOX_H__
