//*****************************************************************************
//
// fontcmsc30.c - Font definition for the 30pt Cmsc font.
//
// Copyright (c) 2011-2013 Texas Instruments Incorporated.  All rights reserved.
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

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmsc
//     Size: 30 point
//     Bold: no
//     Italic: no
//     Memory usage: 3712 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 30 point Cmsc font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmsc30Data[3512] =
{
      5,  13,   0,  47,  16,  25,   6,  99,  51,  51,  51,  51,
     51,  51,  51,  65,  81,  81,  81,  81,  81,  81,  81, 240,
     19,  51,  51, 240, 240, 240,  24,  13, 240, 179,  66,  68,
     36,  52,  51,  97,  81,  97,  81,  97,  81,  81,  81,  81,
     97,  81,  81,   0,  29, 112,  80,  25,   0,   7,  66,  82,
    240,  17,  97, 240,  33,  97, 240,  33,  97, 240,  17,  97,
    240,  33,  97, 240,  33,  97, 240,  18,  82, 240,  17,  97,
    159,   7, 162,  82, 240,  17,  97, 240,  33,  97, 240,  33,
     97, 240,  18,  82, 175,   7, 145,  97, 240,  33,  97, 240,
     17,  97, 240,  33,  97, 240,  33,  97, 240,  18,  82, 240,
     17,  97, 240,  33,  97, 240,  33,  97, 240,  18,  82, 240,
    240, 128,  54,  16, 240, 113, 199, 130,  33,  50,  82,  49,
     66,  50,  65,  51,  50,  65,  51,  50,  65,  51,  51,  49,
    164,  17, 183, 168, 182, 161,  35, 161,  51,  51,  49,  66,
     51,  49,  66,  51,  49,  66,  49,  81,  65,  81,  65,  50,
     97,  49,  34, 134, 209,   0,  13,  16,  77,  26,  51, 209,
    129,  50, 162, 114,  67,  99, 129,  97,  22,  17, 130,  97,
    114, 130,  97,  98, 146,  97,  97, 162,  97,  82, 162,  97,
     66, 193,  81,  66, 210,  65,  65, 242,  33,  66, 240,  34,
     66,  97, 240,  33,  82,  18, 226,  66,  65, 194,  81,  97,
    162,  82,  97, 161,  98,  97, 146,  98,  97, 130, 114,  97,
    114, 130,  97, 113, 162,  65, 114, 177,  50, 113, 211,   0,
     17,  65,  24, 240, 243, 240,  82,  18, 240,  50,  49, 240,
     50,  49, 240,  50,  49, 240,  50,  49, 240,  50,  33, 240,
     66,  17, 240,  99, 103, 130, 147, 162, 145, 177,  18, 129,
    161,  34, 113, 161,  66,  81, 161,  83,  65, 146,  98,  49,
    162, 114,  17, 178, 115, 129,  66, 115, 113,  67,  66,  35,
     50, 117, 101,   0,  21,  80,  14,   7, 227,  68,  52,  97,
     97,  97,  81,  81,  97,   0,  16,  48,  32,  10,  97, 129,
    130, 114, 129, 130, 129, 130, 130, 130, 114, 130, 130, 130,
    130, 130, 130, 130, 130, 146, 130, 130, 145, 146, 145, 146,
    146, 145, 161,  48,  32,  10,   1, 161, 161, 146, 145, 146,
    145, 146, 130, 145, 146, 130, 130, 130, 130, 130, 130, 130,
    130, 129, 145, 130, 129, 145, 129, 130, 129, 129, 129, 144,
     27,  15,  82, 210, 210, 130,  50,  50,  67,  18,  34, 115,
     18, 178, 179,  18, 115,  18,  34,  66,  50,  50, 130, 210,
    210,   0,  31,  47,  24,   0,  13,  33, 240, 129, 240, 129,
    240, 129, 240, 129, 240, 129, 240, 129, 240, 129, 240, 129,
    240, 129, 223,   6, 209, 240, 129, 240, 129, 240, 129, 240,
    129, 240, 129, 240, 129, 240, 129, 240, 129, 240, 129,   0,
     13,  80,  14,   7,   0,  16,  98,  68,  67,  97,  97,  97,
     81,  81,  97, 192,   9,  11,   0,  20,  88,  56,   0,  16,
    112,  10,   6,   0,  14,  35,  51,  51, 240, 240, 240,  32,
     15, 177, 210, 209, 225, 210, 209, 210, 209, 225, 210, 209,
    225, 209, 225, 210, 209, 225, 209, 225, 210, 209, 225, 210,
    209, 210, 209, 225, 210, 209, 224,  42,  15,   0,   6,  20,
    146,  66,  98,  98,  82,  98,  81, 129,  66, 130,  50, 130,
     50, 130,  50, 130,  50, 130,  50, 130,  50, 130,  50, 130,
     50, 130,  50, 130,  66,  98,  82,  98,  98,  66, 133,   0,
     14,  26,  13, 240, 240, 210, 118, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 122,
      0,  11,  96,  34,  15,   0,   6,   6, 129,  83,  81, 114,
     67, 114,  51, 114,  51, 114, 210, 194, 210, 194, 194, 209,
    209, 209, 209,  97,  97, 113,  81, 129,  75,  59,   0,  13,
     80,  34,  16,   0,   6,  54, 145,  83,  99,  83,  83,  83,
     83,  83, 211, 210, 210, 165, 243, 227, 226, 227, 211,  66,
    115,  51, 115,  51, 114,  82,  83, 134,   0,  14, 112,  36,
     16,   0,   7,  17, 226, 211, 193,  18, 193,  18, 177,  34,
    161,  50, 161,  50, 145,  66, 129,  82, 113,  98, 113,  98,
     97, 114, 109, 178, 226, 226, 226, 184,   0,  14,  48,  34,
     15,   0,   5, 114,  82, 104, 118, 145, 225, 225, 225, 225,
     36, 131,  50, 113,  98, 225, 226, 210,  66, 114,  51, 114,
     66, 114,  65, 114,  97,  82, 133,   0,  14,  41,  15,   0,
      6,  37, 146,  50,  98,  82,  97,  98,  82, 209, 210,  37,
     98,  17,  66,  83,  98,  67, 113,  66, 130,  50, 130,  50,
    130,  50, 130,  65, 130,  65, 129,  97,  98,  98,  66, 148,
      0,  14,  29,  16,   0,   6,  28,  75,  65, 145,  81, 129,
     97, 129, 225, 225, 241, 225, 241, 226, 225, 241, 226, 226,
    226, 226, 226, 226,   0,  15,  32,  40,  15,   0,   6,  20,
    145,  82,  97, 114,  81, 129,  81, 129,  82, 113,  83,  81,
    116,  33, 149, 166, 129,  53,  81,  99,  65, 131,  49, 146,
     49, 161,  49, 146,  65, 129,  98,  66, 133,   0,  14,  42,
     15,   0,   6,  20, 146,  66,  98,  98,  81, 129,  66, 129,
     66, 130,  50, 130,  50, 130,  50, 130,  65, 130,  66,  99,
     82,  65,  18, 101,  34, 209, 210,  82,  97,  98,  82,  98,
     66, 133,   0,  14,  16,  15,   6,   0,   7,  67,  51,  51,
    240, 240, 147,  51,  51, 240, 240, 240,  19,   7,   0,   8,
    115,  52,  66,   0,   5, 114,  68,  67,  97,  97,  97,  81,
     97,  81, 192,  40,  22,   0,  18,  82, 240,  51, 240,  35,
    240,  19, 240,  35, 240,  35, 240,  35, 240,  19, 240,  50,
    240,  99, 240, 115, 240,  99, 240,  99, 240,  99, 240, 115,
    240,  99, 240,  98,   0,  16, 112,  13,  24,   0,  33,  15,
      6,   0,  15,  63,   6,   0,  33,  48,  39,  22,   0,  16,
     66, 240,  99, 240, 114, 240, 115, 240,  99, 240,  99, 240,
    115, 240,  99, 240,  98, 240,  50, 240,  35, 240,  35, 240,
     35, 240,  19, 240,  35, 240,  35, 240,  50,   0,  19,  30,
     14, 240, 247,  97,  98,  66, 114,  50, 114,  50, 114, 193,
    194, 177, 194, 193, 194, 193, 209, 209, 209, 240, 240, 163,
    164, 179,   0,  13,  16,  70,  24,   0,   6, 119, 242, 114,
    178, 178, 130,  69,  66, 113,  51,  65,  66,  81,  50, 113,
     65,  81,  50, 130,  33,  65,  50, 146,  49,  49,  50, 146,
     49,  49,  50, 146,  49,  49,  50, 146,  49,  49,  50, 146,
     49,  50,  50, 130,  49,  65,  50, 115,  49,  65,  67,  65,
     18,  33,  97,  85,  51, 129, 240, 145, 226, 131, 116, 200,
      0,  22,  16,  53,  24, 240, 240,  65, 240, 115, 240,  99,
    240,  99, 240,  81,  19, 240,  65,  19, 240,  65,  34, 240,
     49,  51, 240,  33,  51, 240,  17,  83, 241,  83, 241,  98,
    225, 115, 219, 209, 130, 193, 147, 177, 147, 161, 179, 145,
    179, 131, 163, 102, 120,   0,  21,  48,  44,  22, 240, 240,
    238, 178, 131, 146, 147, 130, 163, 114, 163, 114, 163, 114,
    163, 114, 147, 130, 130, 170, 194, 131, 146, 163, 114, 163,
    114, 179,  98, 179,  98, 179,  98, 179,  98, 163, 114, 132,
     95,   0,  20,  16,  47,  22,   0,   6,  70,  65, 131,  97,
     34, 114, 148,  98, 179,  82, 210,  67, 210,  67, 225,  51,
    241,  51, 240,  67, 240,  67, 240,  67, 240,  67, 240,  83,
    225,  67, 225,  82, 209, 114, 193, 130, 161, 163,  98, 215,
      0,  20,  32,  45,  23,   0,   5, 110, 194, 116, 162, 147,
    146, 163, 130, 178, 130, 179, 114, 194, 114, 195,  98, 195,
     98, 195,  98, 195,  98, 195,  98, 195,  98, 194, 114, 179,
    114, 179, 114, 163, 130, 147, 146, 116, 126,   0,  21,  32,
     46,  21, 240, 240, 207,   2, 114, 147, 114, 162, 114, 177,
    114, 177, 114, 177, 114,  97, 194,  97, 194,  82, 201, 194,
     82, 194,  97, 194,  97, 194, 193,  98, 193,  98, 193,  98,
    193,  98, 177, 114, 147,  79,   2,   0,  18, 112,  45,  20,
    240, 240, 175,   1, 114, 147,  98, 162,  98, 177,  98, 177,
     98, 177,  98,  97,  65,  98,  97, 178,  97, 178,  82, 185,
    178,  82, 178,  97, 178,  97, 178, 240,  50, 240,  50, 240,
     50, 240,  50, 249,   0,  18, 112,  49,  23,   0,   6,  86,
     65, 163,  82,  33, 146, 147, 130, 178, 114, 194,  99, 209,
     99, 209,  83, 225,  83, 240,  83, 240,  83, 240,  83, 240,
     83, 152,  67, 194,  99, 194, 114, 194, 115, 178, 146, 147,
    163,  98,  17, 199,  49,   0,  20,  96,  46,  23,   0,   5,
    104,  72,  98, 162, 146, 162, 146, 162, 146, 162, 146, 162,
    146, 162, 146, 162, 146, 162, 158, 146, 162, 146, 162, 146,
    162, 146, 162, 146, 162, 146, 162, 146, 162, 146, 162, 146,
    162, 104,  72,   0,  20,  64,  25,  11, 240, 120,  98, 146,
    146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146,
    146, 146, 146, 146, 104,   0,  10,  31,  15, 240, 240,  72,
    178, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210,
    210, 210,  83,  82,  83,  82,  83,  67,  97,  67, 133,   0,
     14,  16,  50,  24,   0,   6,   8, 102, 114, 163, 146, 161,
    178, 145, 194, 129, 210, 113, 226,  97, 242,  81, 240,  18,
     66, 240,  18,  37, 242,  17,  51, 227,  67, 226,  99, 210,
    115, 194, 115, 194, 131, 178, 147, 162, 163, 146, 164,  88,
     88,   0,  21,  48,  45,  19, 240, 240, 137, 210, 240,  34,
    240,  34, 240,  34, 240,  34, 240,  34, 240,  34, 240,  34,
    240,  34, 240,  34, 240,  34, 240,  34, 161,  98, 161,  98,
    161,  98, 161,  98, 146,  98, 146,  98, 115,  79,   0,  17,
     16,  79,  28,   0,   7,   6, 214,  99, 211, 145,  18, 177,
     18, 145,  18, 177,  18, 145,  19, 161,  18, 145,  34, 145,
     34, 145,  35, 129,  34, 145,  50, 113,  50, 145,  50, 113,
     50, 145,  51,  97,  50, 145,  66,  81,  66, 145,  67,  65,
     66, 145,  82,  49,  82, 145,  82,  49,  82, 145,  83,  33,
     82, 145,  98,  17,  98, 145, 100,  98, 145, 114, 114, 131,
     98, 114, 103,  65,  88,   0,  24, 112,  60,  23,   0,   5,
    102, 119, 100, 131, 129,  18, 145, 145,  19, 129, 145,  35,
    113, 145,  50, 113, 145,  51,  97, 145,  67,  81, 145,  82,
     81, 145,  83,  65, 145,  99,  49, 145, 114,  49, 145, 115,
     33, 145, 131,  17, 145, 146,  17, 145, 148, 145, 163, 145,
    178, 131, 162, 103, 145,   0,  20, 112,  45,  24,   0,   6,
    119, 243,  83, 194, 146, 162, 179, 114, 210,  99, 211,  82,
    242,  67, 243,  51, 243,  51, 243,  51, 243,  51, 243,  51,
    243,  67, 226,  83, 211,  98, 210, 115, 179, 146, 146, 195,
     83, 247,   0,  22,  32,  43,  21, 240, 240, 206, 162, 131,
    130, 147, 114, 163,  98, 163,  98, 163,  98, 163,  98, 162,
    114, 147, 114, 131, 139, 162, 240,  66, 240,  66, 240,  66,
    240,  66, 240,  66, 240,  66, 240,  66, 240,  24,   0,  20,
     64,  24,   0,   7,   6, 243,  83, 194, 146, 162, 178, 131,
    179,  99, 211,  83, 211,  82, 243,  51, 243,  51, 243,  51,
    243,  51, 243,  51, 243,  66, 242,  83, 211,  98, 210, 115,
     67,  66, 147,  33,  49,  34, 196,  66, 240,  23,  97, 240,
     18,  81, 240,  33,  81, 240,  34,  50, 240,  38, 240,  69,
    240,  68, 240, 224,  47,  24,   0,   6,  12, 242, 115, 194,
    131, 178, 146, 178, 147, 162, 147, 162, 147, 162, 146, 178,
    131, 178, 114, 217, 242,  99, 210, 115, 194, 130, 194, 131,
    178, 131, 178, 131, 178, 131,  65,  98, 147,  34,  70, 133,
      0,  21,  64,  43,  17, 240, 240, 133,  49,  98,  82,  17,
     82, 115,  66, 146,  66, 146,  66, 161,  67, 145,  68, 231,
    185, 183, 228, 243,  49, 178,  49, 178,  49, 178,  50, 162,
     51, 130,  66,  18,  82,  81,  69,   0,  15,  96,  52,  23,
      0,   5, 127,   3,  82,  98,  98,  81, 114, 113,  81, 114,
    113,  65, 130, 129,  49, 130, 129,  49, 130, 129, 194, 240,
     98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,
     98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  42,   0,
     21,  16,  47,  23,   0,   5, 104,  87,  98, 163, 130, 177,
    146, 177, 146, 177, 146, 177, 146, 177, 146, 177, 146, 177,
    146, 177, 146, 177, 146, 177, 146, 177, 146, 177, 146, 177,
    146, 162, 162, 145, 194, 113, 226,  81, 240,  22,   0,  21,
     48,  52,  25,   0,   6,  40, 134,  99, 179, 131, 193, 147,
    177, 179, 161, 179, 161, 195, 129, 211, 129, 226, 113, 243,
     97, 243,  81, 240,  35,  65, 240,  35,  65, 240,  50,  49,
    240,  67,  33, 240,  82,  17, 240, 100, 240,  99, 240, 130,
    240, 130,   0,  23,  64,  79,  34,   0,   8,  72,  71,  87,
     83, 147, 147, 131, 131, 161, 147, 146, 145, 178, 147, 129,
    179, 116, 129, 179, 113,  19,  97, 210,  97,  35,  97, 211,
     81,  35,  97, 211,  81,  51,  65, 242,  65,  67,  65, 243,
     49,  82,  49, 240,  19,  49,  83,  33, 240,  34,  33,  99,
     33, 240,  35,  17, 114,  17, 240,  52, 132, 240,  67, 132,
    240,  67, 146, 240,  97, 162, 240,  97, 162,   0,  31,  32,
     54,  25,   0,   6,  56,  71, 132, 131, 179, 129, 227, 113,
    243,  81, 240,  19,  65, 240,  51,  33, 240,  83,  17, 240,
     99, 240, 115, 240, 116, 240,  97,  19, 240,  65,  35, 240,
     49,  67, 240,  18,  83, 241, 115, 209, 131, 193, 163, 163,
    148, 103, 120,   0,  22,  32,  50,  25,   0,   6,  40, 134,
     99, 179, 147, 161, 179, 161, 195, 129, 227,  97, 243,  97,
    240,  19,  65, 240,  50,  49, 240,  67,  33, 240,  84, 240,
    114, 240, 130, 240, 130, 240, 130, 240, 130, 240, 130, 240,
    130, 240, 130, 240,  88,   0,  23,  16,  43,  19, 240, 240,
    143,   1,  52, 131,  66, 163,  66, 147,  81, 147,  97, 147,
     97, 131, 243, 243, 240,  19, 243, 243, 240,  18, 129, 115,
    129,  99, 145,  98, 161,  83, 161,  67, 162,  66, 148,  63,
      1,   0,  17,  32,   7,   4,  49,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97,  97, 100,  48,  22,
     13, 240, 209,  81,  81,  81,  97,  81,  81,  81,  97,  81,
     99,  52,  52,  36,  66,  67,   0,  31,  32,  32,   7,   4,
     97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  52,  48,  11,  11, 240, 177, 132,  98,  34,
     65,  97,   0,  32,   9,   6, 240,  51,  51,  51,   0,  17,
     80,  13,   7, 240,  17,  81,  97,  81,  97, 100,  52,  67,
      0,  17,  37,  19,   0,  15,  18, 240,  34, 240,  34, 240,
     17,  18, 241,  18, 225,  35, 209,  50, 209,  50, 193,  67,
    177,  82, 184, 161, 114, 145, 114, 129, 131, 114, 130,  85,
     86,   0,  17,  34,  16,   0,  14,  10, 130,  83,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  82, 120, 130,  98,  98,
    114,  82, 114,  82, 114,  82, 114,  82,  98,  74,   0,  14,
     96,  33,  17,   0,  15,  69,  49,  98,  84,  82, 130,  66,
    146,  66, 161,  50, 177,  50, 242, 242, 242, 177,  66, 161,
     66, 161,  82, 129, 115,  66, 165,   0,  15,  96,  35,  18,
      0,  15, 107, 146,  98, 130, 114, 114, 130,  98, 145,  98,
    146,  82, 146,  82, 146,  82, 146,  82, 146,  82, 145,  98,
    130,  98, 129, 114,  98, 106,   0,  16,  96,  35,  18,   0,
     15, 110,  98, 130,  98, 145,  98, 145,  98,  81,  49,  98,
     81, 162,  66, 168, 162,  81, 162,  81, 162, 161,  82, 145,
     98, 145,  98, 130,  78,   0,  16,  32,  30,  17,   0,  14,
    125,  98, 115,  82, 145,  82, 145,  82, 145,  82,  81, 146,
     81, 152, 146,  66, 146,  81, 146, 242, 242, 242, 215,   0,
     16,  16,  39,  19,   0,  17,  37,  49, 131,  66,  17, 114,
    130,  98, 146,  98, 161,  82, 177,  82, 240,  34, 240,  34,
    240,  34, 119,  66, 146,  98, 146, 114, 130, 131,  81,  17,
    166,  33,   0,  17,  32,  35,  19,   0,  16,  86,  70,  82,
    130, 114, 130, 114, 130, 114, 130, 114, 130, 114, 130, 124,
    114, 130, 114, 130, 114, 130, 114, 130, 114, 130, 114, 130,
     86,  70,   0,  17,  22,   9,   0,   7, 118,  82, 114, 114,
    114, 114, 114, 114, 114, 114, 114, 114, 114, 114,  86,   0,
      8,  32,  24,  13,   0,  11, 103, 146, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178,  82,  66,  82,  50, 117,   0,
     12,  32,  37,  19,   0,  16,  86,  85,  82, 130, 114, 113,
    146,  97, 162,  81, 178,  65, 194,  35, 194,  17,  19, 179,
     50, 178,  82, 162,  83, 146,  99, 130, 114, 130, 115,  86,
     70,   0,  17,  26,  15,   0,  13,  23, 162, 210, 210, 210,
    210, 210, 210, 210, 210, 210, 113,  82, 113,  82, 113,  82,
     98,  60,   0,  13,  64,  59,  23,   0,  20,  21, 165,  83,
    163, 113,  18, 129,  18, 113,  18, 129,  18, 113,  34,  97,
     34, 113,  34,  97,  34, 113,  34,  97,  34, 113,  50,  65,
     50, 113,  50,  65,  50, 113,  66,  33,  66, 113,  66,  33,
     66, 113,  83,  82, 113,  83,  82, 114,  66,  98,  85,  65,
     70,   0,  20,  64,  46,  19,   0,  16,  85, 101,  83, 115,
     97,  18, 113, 113,  19,  97, 113,  35,  81, 113,  50,  81,
    113,  66,  65, 113,  67,  49, 113,  83,  33, 113,  99,  17,
    113, 114,  17, 113, 116, 113, 131, 114, 130,  85, 129,   0,
     17,  32,  35,  18,   0,  16,  53, 178,  82, 130, 114,  98,
    146,  81, 177,  66, 178,  50, 178,  50, 178,  50, 178,  50,
    178,  66, 146,  82, 146,  98, 114, 130,  82, 181,   0,  16,
     96,  28,  16,   0,  14,  10, 130,  98,  98, 114,  82, 114,
     82, 114,  82, 114,  82,  98, 104, 130, 226, 226, 226, 226,
    226, 198,   0,  15,  32,  44,  18,   0,  16,  53, 178,  67,
    130, 114,  98, 146,  81, 162,  66, 178,  50, 178,  50, 178,
     50, 178,  50, 178,  66, 146,  82,  51,  50,  98,  17,  33,
     34, 131,  50, 197,  65, 209,  49, 213, 212, 243,   0,   7,
     32,  36,  20,   0,  17,  74, 194,  98, 162, 114, 146, 114,
    146, 114, 146, 114, 146,  98, 168, 194,  82, 178,  98, 162,
     98, 162,  98, 162,  99,  49,  82,  99,  49,  54,  85,   0,
     18,  32,  14,   0,  12,  84,  33,  82,  65,  17,  66,  98,
     66, 113,  66, 113,  67, 198, 151, 180, 195,  49, 130,  49,
    130,  50, 114,  51,  82,  65,  37,   0,  13,  38,  19,   0,
     16, 110,  81,  82,  81,  81,  82,  81,  65,  98,  81,  65,
     98,  97, 162, 240,  34, 240,  34, 240,  34, 240,  34, 240,
     34, 240,  34, 240,  34, 240,  34, 232,   0,  17,  64,  36,
     19,   0,  16,  86,  85,  82, 130, 114, 145, 114, 145, 114,
    145, 114, 145, 114, 145, 114, 145, 114, 145, 114, 145, 114,
    145, 114, 145, 130, 113, 162,  66, 213,   0,  17,  80,  36,
     19,   0,  16,  86, 100,  82, 146,  98, 145, 115, 113, 146,
    113, 147,  97, 162,  81, 179,  65, 194,  49, 210,  49, 226,
     17, 242,  17, 243, 240,  34, 240,  34,   0,  17, 112,  54,
     26,   0,  22, 101,  54,  69,  67,  99, 113, 114, 114, 113,
    114, 114,  97, 146,  84,  81, 146,  81,  18,  81, 147,  49,
     34,  65, 178,  49,  50,  49, 178,  49,  50,  33, 195,  17,
     66,  33, 210,  17,  82,  17, 210,  17,  83, 242,  99, 242,
    114, 241, 129,   0,  24,  36,  19,   0,  16,  86,  69,  99,
     98, 147,  81, 178,  65, 210,  33, 227,  17, 243, 240,  34,
    240,  17,  18, 225,  35, 209,  51, 177,  83, 145, 114, 130,
    115,  85,  86,   0,  17,  36,  19,   0,  16,  86, 100,  82,
    146,  99, 129, 131,  97, 162,  81, 194,  49, 211,  33, 226,
     17, 240,  18, 240,  34, 240,  34, 240,  34, 240,  34, 240,
     34, 246,   0,  17,  80,  30,  15,   0,  13,  28,  51,  98,
     66,  99,  65, 114,  81,  98, 195, 179, 194, 194, 195, 194,
     97,  82, 113,  66, 129,  66,  99,  60,   0,  13,  64,   8,
     18,   0,  31,  79,   0,  31, 112,  10,  34,   0,  59,  79,
     15,   1,   0,  59, 112,  16,  13, 240, 210,  66,  82,  66,
     66,  66,  81,  81,  81,  81,   0,  36,  64,  11,  13, 240,
    240, 179,  65,  50,  52,   0,  39,  64,
};

//*****************************************************************************
//
// The font definition for the 30 point Cmsc font.
//
//*****************************************************************************
const tFont g_sFontCmsc30 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    30,

    //
    // The height of the font.
    //
    29,

    //
    // The baseline of the font.
    //
    22,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   30,   54,  134,  188,  265,  330,
         344,  376,  408,  435,  482,  496,  505,  515,
         547,  589,  615,  649,  683,  719,  753,  794,
         823,  863,  905,  920,  939,  979,  992, 1031,
        1061, 1131, 1184, 1228, 1275, 1320, 1366, 1411,
        1460, 1506, 1531, 1562, 1612, 1657, 1736, 1796,
        1841, 1884, 1948, 1995, 2038, 2090, 2137, 2189,
        2268, 2322, 2372, 2415, 2447, 2469, 2501, 2512,
        2521, 2534, 2571, 2605, 2638, 2673, 2708, 2738,
        2777, 2812, 2834, 2858, 2895, 2921, 2980, 3026,
        3061, 3089, 3133, 3169, 3201, 3239, 3275, 3311,
        3365, 3401, 3437, 3467, 3475, 3485, 3501,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmsc30Data
};
