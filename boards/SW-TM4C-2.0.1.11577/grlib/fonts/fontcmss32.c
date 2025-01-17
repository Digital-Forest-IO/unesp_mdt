//*****************************************************************************
//
// fontcmss32.c - Font definition for the 32pt Cmss font.
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
//     Style: cmss
//     Size: 32 point
//     Bold: no
//     Italic: no
//     Memory usage: 3600 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 32 point Cmss font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss32Data[3399] =
{
      5,  13,   0,  53,  80,  26,   5, 162,  50,  50,  50,  50,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,
     50, 210,  50,  50, 240, 240, 208,  20,  11, 240, 114,  66,
     50,  66,  50,  66,  65,  81,  50,  66,  49,  81,  65,  81,
      0,  33,  64,  89,  25,   0,   7,  66,  82, 240,  17,  97,
    240,  33,  97, 240,  33,  97, 240,  18,  82, 240,  17,  97,
    240,  33,  97, 240,  33,  97, 240,  18,  82, 240,  17,  97,
    240,  33,  97, 159,   7, 162,  82, 240,  17,  97, 240,  33,
     97, 240,  33,  97, 240,  18,  82, 175,   7, 145,  97, 240,
     33,  97, 240,  18,  82, 240,  17,  97, 240,  33,  97, 240,
     33,  97, 240,  18,  82, 240,  17,  97, 240,  33,  97, 240,
     33,  97, 240,  18,  82,   0,   7, 112,  50,  14,  82, 194,
    166, 120,  83,  18,  33,  82,  34, 114,  50, 114,  50, 114,
     50, 115,  34, 115,  34, 134, 150, 150, 165, 146,  19, 130,
     34, 130,  34, 130,  34, 130,  34, 130,  34,  49,  66,  19,
     51,  34,  18,  89, 103, 162, 194,   0,  11,  48,  77,  24,
    240, 180, 162, 118, 145, 130,  34, 130, 114,  51, 113, 130,
     66,  98, 130,  66,  97, 146,  66,  82, 146,  66,  81, 162,
     66,  66, 162,  66,  65, 194,  34,  65, 214,  65, 228,  65,
    240, 129,  68, 225,  70, 194,  66,  34, 193,  66,  51, 162,
     66,  66, 161,  82,  66, 146,  82,  66, 145,  98,  66, 130,
     98,  66, 129, 114,  66, 114, 130,  34, 129, 150, 114, 164,
      0,  18,  80,  59,  23,   0,   6,  83, 240,  54, 240,  34,
     35, 242,  66, 242,  66, 242,  66, 242,  66, 242,  50, 240,
     19,  18, 240,  38, 240,  52, 129, 163, 131, 132, 130, 133,
    130, 114,  35,  98, 114,  67,  82,  98,  83,  66, 114,  99,
     35, 114, 118, 131, 116, 163,  85, 185,  24, 102,  86,   0,
     23,  48,  12,   5, 162,  50,  50,  65,  50,  49,  65,   0,
     15,  64,  36,  10,  82, 114, 114, 130, 114, 130, 129, 130,
    130, 130, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 131, 130, 130, 130, 130, 146, 130, 146, 130, 146,
    146,  48,  36,  10,   2, 146, 146, 130, 146, 130, 146, 130,
    130, 130, 146, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 114, 130, 130, 130, 114, 130, 114, 130, 114,
    114, 128,  28,  13,  66, 178, 178, 178, 114,  34,  34,  51,
     18,  19,  86, 132, 148, 120,  67,  18,  19,  50,  34,  34,
    114, 178, 178,   0,  30,  16,  46,  22,   0,  17,  81, 240,
     97, 240,  97, 240,  97, 240,  97, 240,  97, 240,  97, 240,
     97, 240,  97, 240,  97, 207,   4, 193, 240,  97, 240,  97,
    240,  97, 240,  97, 240,  97, 240,  97, 240,  97, 240,  97,
    240,  97,   0,  18,  13,   5,   0,  13,  98,  50,  50,  65,
     50,  49,  65, 240, 144,   9,  11,   0,  23,  56,  56,   0,
     19,  80,  10,   5,   0,  13,  98,  50,  50, 240, 240, 208,
     36,  15, 177, 210, 209, 225, 210, 209, 225, 210, 209, 225,
    210, 209, 225, 210, 209, 225, 210, 209, 225, 210, 209, 225,
    210, 209, 225, 210, 209, 225, 210, 209, 225, 210, 209, 224,
     45,  15,   0,   8,   4, 152, 114,  66,  98,  98,  82,  98,
     66, 130,  50, 130,  50, 130,  50, 130,  50, 130,  50, 130,
     50, 130,  50, 130,  50, 130,  50, 130,  50, 130,  66,  98,
     82,  98,  98,  67, 104, 148,   0,  15, 112,  29,  13,   0,
      7,   2, 118, 115,  18, 178, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 122,  58,   0,
     13,  48,  33,  15,   0,   8,   5, 136,  99,  67,  82,  98,
     66, 130,  65, 130,  65, 130, 210, 210, 194, 210, 194, 194,
    194, 194, 194, 194, 194, 194, 219,  75,   0,  15,  48,  34,
     15,   0,   8,   5, 136,  99,  67,  82,  98,  81, 114, 210,
    210, 194, 149, 165, 227, 210, 226, 210, 210, 210,  49, 146,
     50, 114,  83,  67, 104, 148,   0,  15, 112,  38,  16,   0,
      8, 115, 211, 196, 193,  18, 178,  18, 163,  18, 162,  34,
    147,  34, 146,  50, 131,  50, 130,  66, 114,  82,  99,  82,
    109,  61, 178, 226, 226, 226, 226, 226,   0,  16,  96,  33,
     15,   0,   7,  90,  90,  82, 210, 210, 210, 210, 210,  21,
    121, 100,  51,  82,  98, 226, 210, 210, 210, 210, 210,  50,
    114,  67,  82, 105, 133,   0,  15, 112,  41,  15,   0,   8,
     22, 135, 114, 194, 194, 210, 209,  52,  98,  23,  84,  67,
     67,  98,  66, 130,  50, 130,  50, 130,  50, 130,  50, 130,
     65, 130,  66, 114,  66,  98,  98,  66, 120, 148,   0,  15,
    112,  28,  15,   0,   7,  76,  60, 194, 209, 210, 194, 210,
    194, 210, 194, 210, 210, 194, 210, 210, 210, 194, 210, 210,
    210, 210,   0,  16,  32,  43,  15,   0,   7, 118, 136,  99,
     67,  66, 130,  50, 130,  50, 130,  51, 114,  67,  67, 104,
    134, 130,  67,  82,  98,  66, 130,  50, 130,  50, 130,  50,
    130,  50, 130,  66,  98,  83,  67, 104, 148,   0,  15, 112,
     40,  15,   0,   8,   4, 152, 114,  66,  98,  98,  66, 129,
     66, 130,  50, 130,  50, 130,  50, 130,  50, 130,  66,  99,
     67,  68,  87,  18, 100,  50, 209, 210, 210, 194,  98,  66,
    119, 149,   0,  16,  15,   5,   0,   6, 114,  50,  50, 240,
    240, 210,  50,  50, 240, 240, 208,  18,   5,   0,   6, 114,
     50,  50, 240, 240, 210,  50,  50,  65,  50,  49,  65, 240,
    144,  26,   5, 240, 240, 162,  50,  50, 240,  50,  50,  50,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,
     50,  50, 208,  13,  23,   0,  37,  63,   5,   0,  14, 111,
      5,   0,  37,  96,  30,  13,   0,  13,  66, 178, 178,   0,
      6,  34, 178, 178, 178, 178, 162, 178, 162, 163, 162, 162,
    178, 178, 178, 194,  82,  73, 101, 240, 240,  16,  30,  12,
    240, 166,  88,  66,  67, 162, 162, 162, 162, 147, 146, 146,
    147, 146, 162, 146, 162, 162, 162, 162, 240, 240,  66, 162,
    162,   0,  12, 112,  60,  19, 240, 240, 245, 201, 147,  67,
    130, 115,  98,  86,  83,  57,  66,  51,  52,  66,  50,  83,
     50,  51,  83,  50,  50, 114,  50,  50, 114,  50,  50, 114,
     50,  50, 114,  50,  50, 114,  50,  51,  83,  66,  50,  82,
     82,  51,  51,  83,  55, 114,  83, 162, 240,  51,  99, 137,
    197,   0,  19, 112,  50,  21,   0,   6,  20, 240,  36, 240,
     36, 240,  22, 242,  19, 242,  34, 227,  35, 210,  51, 210,
     66, 195,  67, 178,  83, 178,  98, 163,  99, 146, 115, 156,
    142, 114, 147, 114, 162,  99, 163,  82, 179,  82, 194,  67,
    195,  50, 211,   0,  21,  48,  46,  18, 240, 240, 106, 140,
     98, 116,  82, 147,  66, 162,  66, 162,  66, 162,  66, 162,
     66, 146,  82, 115, 107, 123, 114, 116,  82, 147,  66, 163,
     50, 178,  50, 178,  50, 178,  50, 163,  50, 147,  66, 132,
     76, 106,   0,  19,  45,  18, 240, 240, 214, 170, 115,  82,
    114, 242, 243, 242, 240,  18, 242, 240,  18, 240,  18, 240,
     18, 240,  18, 240,  18, 240,  18, 240,  34, 240,  18, 240,
     19, 240,  18, 240,  34, 145, 100,  83, 138, 151,   0,  18,
     80,  49,  19, 240, 240, 138, 156, 114, 116,  98, 147,  82,
    162,  82, 163,  66, 178,  66, 178,  66, 194,  50, 194,  50,
    194,  50, 194,  50, 194,  50, 194,  50, 194,  50, 179,  50,
    178,  66, 178,  66, 162,  82, 147,  82, 116, 108, 122,   0,
     20,  16,  30,  16, 240, 240,  45,  61,  50, 226, 226, 226,
    226, 226, 226, 226, 236,  76,  66, 226, 226, 226, 226, 226,
    226, 226, 226, 237,  61,   0,  16,  48,  29,  15, 240, 252,
     60,  50, 210, 210, 210, 210, 210, 210, 210, 210, 219,  75,
     66, 210, 210, 210, 210, 210, 210, 210, 210, 210,   0,  16,
     80,  49,  19, 240, 240, 247, 171, 115,  99,  99, 145,  82,
    240,  19, 240,  18, 240,  34, 240,  18, 240,  34, 240,  34,
    240,  34, 240,  34, 240,  34, 134,  51, 118,  66, 178,  66,
    178,  82, 162,  83, 146,  99, 130, 115,  99, 139, 166,   0,
     19,  96,  51,  18, 240, 240,  98, 178,  50, 178,  50, 178,
     50, 178,  50, 178,  50, 178,  50, 178,  50, 178,  50, 178,
     50, 178,  63,  63,  50, 178,  50, 178,  50, 178,  50, 178,
     50, 178,  50, 178,  50, 178,  50, 178,  50, 178,  50, 178,
     50, 178,   0,  18,  48,  28,   5, 162,  50,  50,  50,  50,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,
     50,  50,  50,  50,  50,  50, 240, 240, 208,  31,  13, 240,
    240,  66, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178,  50,  82,  73,
    102,   0,  13,  80,  52,  19, 240, 240, 130, 163,  66, 147,
     82, 131,  98, 116,  98, 115, 114,  99, 130,  83, 146,  67,
    162,  51, 178,  36, 178,  22, 169, 165,  35, 148,  51, 147,
     83, 130, 100, 114, 115, 114, 131,  98, 131,  98, 147,  82,
    163,  66, 163,  66, 179,   0,  19,  48,  29,  15, 240, 242,
    210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210,
    210, 210, 210, 210, 210, 210, 210, 210, 220,  60,   0,  15,
     48,  86,  23,   0,   5,  99, 227,  52, 196,  52, 196,  53,
    180,  50,  18, 162,  18,  50,  18, 162,  18,  50,  19, 131,
     18,  50,  34, 130,  34,  50,  34, 130,  34,  50,  35,  99,
     34,  50,  50,  98,  50,  50,  50,  98,  50,  50,  51,  67,
     50,  50,  66,  66,  66,  50,  66,  66,  66,  50,  67,  35,
     66,  50,  82,  34,  82,  50,  82,  34,  82,  50,  86,  82,
     50, 100,  98,  50, 100,  98,  50, 100,  98,  50, 240,  18,
      0,  23,  48,  68,  18, 240, 240, 100, 146,  52, 146,  53,
    130,  53, 130,  50,  19, 114,  50,  19, 114,  50,  35,  98,
     50,  35,  98,  50,  50,  98,  50,  51,  82,  50,  66,  82,
     50,  67,  66,  50,  82,  66,  50,  83,  50,  50,  98,  50,
     50,  99,  34,  50,  99,  34,  50, 115,  18,  50, 115,  18,
     50, 133,  50, 133,  50, 148,  50, 148,   0,  18,  48,  49,
     21,   0,   6,   6, 233, 164,  68, 146, 131, 114, 162,  98,
    194,  82, 194,  82, 195,  50, 226,  50, 226,  50, 226,  50,
    226,  50, 226,  50, 226,  50, 226,  66, 194,  82, 194,  83,
    163,  98, 162, 130, 130, 148,  68, 184, 230,   0,  22,  16,
     40,  17, 240, 240,  74, 123,  98, 115,  82, 146,  66, 147,
     50, 162,  50, 162,  50, 162,  50, 162,  50, 147,  50, 146,
     66, 115,  91, 106, 114, 242, 242, 242, 242, 242, 242, 242,
    242,   0,  18, 112,  59,  21,   0,   6,   6, 233, 164,  68,
    146, 131, 114, 162,  99, 163,  82, 194,  82, 195,  50, 226,
     50, 226,  50, 226,  50, 226,  50, 226,  50, 226,  50, 226,
     66, 195,  66,  83,  66,  83,  67,  66,  98,  83,  34, 130,
     86, 132,  53, 185, 217, 240,  51, 240,  67, 240,  67, 240,
     51,   0,  11,  49,  18, 240, 240, 106, 139, 114, 116,  82,
    146,  82, 162,  66, 162,  66, 162,  66, 162,  66, 162,  66,
    146,  82, 115, 107, 121, 146,  83, 130,  98, 130,  99, 114,
    114, 114, 115,  98, 130,  98, 146,  82, 146,  82, 162,  66,
    163,   0,  18,  48,  34,  16, 240, 240, 102, 138,  83,  83,
     82, 129,  66, 226, 226, 227, 226, 228, 215, 168, 182, 211,
    227, 226, 226, 226, 226,  49, 146,  67,  99,  90, 134,   0,
     16, 112,  52,  21, 240, 240, 207,   3,  63,   3, 178, 240,
     66, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66, 240,
     66, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66, 240,
     66, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66, 240,
     66, 240,  66,   0,  22,  48,  50,  17, 240, 240,  66, 162,
     50, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50, 162,
     50, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50, 162,
     50, 162,  50, 162,  50, 162,  50, 162,  50, 162,  66, 130,
     83,  99,  99,  67, 136, 180,   0,  18,  52,  21, 240, 240,
    194, 226,  51, 210,  51, 195,  66, 194,  83, 163,  83, 163,
     99, 146, 115, 131, 115, 131, 131, 114, 147,  99, 147,  98,
    179,  82, 179,  67, 194,  66, 211,  50, 211,  35, 226,  34,
    243,  18, 246, 240,  20, 240,  36, 240,  36,   0,  22,  32,
     86,  30,   0,   7,  66, 163, 147,  51, 147, 147,  51, 132,
    146,  67, 133, 130,  82, 133, 115,  83,  99,  18, 114,  99,
     98,  34, 114,  99,  98,  35,  98, 114,  98,  35,  83, 115,
     67,  50,  82, 131,  66,  66,  82, 131,  66,  67,  66, 146,
     66,  67,  51, 147,  35,  82,  50, 163,  34,  98,  50, 163,
     34,  99,  34, 178,  34,  99,  19, 179,  18, 114,  18, 197,
    130,  18, 212, 130,  18, 212, 132, 228, 147, 227, 163,   0,
     31,  16,  52,  21, 240, 240, 195, 179,  83, 147, 115, 131,
    115, 115, 147,  83, 179,  67, 179,  51, 211,  19, 246, 245,
    240,  35, 240,  52, 240,  21, 240,  18,  19, 227,  35, 195,
     51, 194,  83, 163,  99, 131, 115, 131, 131,  99, 163,  67,
    180,  51, 195,   0,  21,  48,  53,  21, 240, 240, 195, 210,
     51, 195,  67, 163,  99, 146, 115, 131, 131, 114, 147,  99,
    163,  67, 195,  50, 211,  35, 227,  18, 240,  20, 240,  36,
    240,  50, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66,
    240,  66, 240,  66, 240,  66, 240,  66,   0,  22,  48,  30,
     18, 240, 240, 111,  63, 227, 227, 243, 227, 243, 227, 227,
    243, 227, 243, 227, 242, 243, 227, 243, 227, 243, 227, 227,
    255,  63,   0,  18,  48,  35,   8, 133,  53,  50,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98, 101,  53,  48,  20,  11, 240, 129,  81,  65,  81,  50,
     66,  49,  81,  66,  66,  50,  66,  50,  66,   0,  33,  48,
     35,   8, 133,  53,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  53,  53,  48,  15,
     13, 240, 243, 148, 131,  18, 114,  35,  82,  66,  66,  98,
      0,  41,   9,   5, 240,  82,  50,  50,   0,  16,  80,  12,
      5, 177,  65,  50,  49,  66,  50,  50,   0,  15,  48,  27,
     14,   0,  19,  85, 121,  82,  82, 210, 194, 194, 119,  89,
     67,  82,  50, 114,  50, 114,  51,  83,  74,  85,  34,   0,
     14,  48,  41,  15, 240, 242, 210, 210, 210, 210, 210, 210,
    210, 210, 210,  37, 106,  83,  83,  66, 114,  66, 130,  50,
    130,  50, 130,  50, 130,  50, 130,  50, 115,  50, 114,  67,
     68,  74,  82,  36,   0,  15, 112,  23,  14,   0,  19, 101,
    121,  67,  82,  66, 179, 178, 194, 194, 194, 195, 194, 195,
     82,  89, 117,   0,  14,  80,  43,  15, 240, 240, 162, 210,
    210, 210, 210, 210, 210, 210, 210, 101,  34,  90,  68,  67,
     66, 114,  51, 114,  50, 130,  50, 130,  50, 130,  50, 130,
     51, 114,  66, 114,  67,  68,  87,  18, 101,  34,   0,  15,
     48,  25,  14,   0,  19, 100, 135,  99,  66,  82,  98,  50,
    114,  59,  59,  50, 194, 195, 194, 195,  82,  89, 117,   0,
     14,  80,  28,  12, 240, 228, 117,  98, 146, 162, 162, 162,
    162, 162, 135,  87, 114, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162,   0,  13,  39,  16,   0,  22,  68,  35,
     91,  82,  50, 130,  82, 114,  82, 114,  82, 114,  82, 130,
     50, 151, 130,  19, 162, 226, 233, 123,  67, 115,  50, 146,
     51, 130,  67,  83,  90, 134, 240, 240, 144,  43,  14, 240,
    210, 194, 194, 194, 194, 194, 194, 194, 194, 194,  52,  82,
     23,  68,  67,  51,  98,  50, 114,  50, 114,  50, 114,  50,
    114,  50, 114,  50, 114,  50, 114,  50, 114,  50, 114,  50,
    114,   0,  14,  48,  24,   5, 240,  82,  50,  50, 240, 130,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,
     50, 240, 240, 208,  31,  10, 240, 240, 242, 130, 130,   0,
      6,   2, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 115,  54,  84, 240, 160,  41,
     14, 240, 210, 194, 194, 194, 194, 194, 194, 194, 194, 194,
     83,  66,  67,  82,  51,  98,  35, 114,  20, 114,  19, 134,
    135, 115,  35,  98,  66,  98,  67,  82,  83,  66,  98,  66,
     99,   0,  14,  48,  28,   5, 162,  50,  50,  50,  50,  50,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,
     50,  50,  50,  50,  50, 240, 240, 208,  49,  22,   0,  30,
     34,  37,  68,  82,  23,  38,  68,  68,  67,  51,  99,  82,
     50, 114,  98,  50, 114,  98,  50, 114,  98,  50, 114,  98,
     50, 114,  98,  50, 114,  98,  50, 114,  98,  50, 114,  98,
     50, 114,  98,  50, 114,  98,   0,  22,  48,  35,  14,   0,
     19,  34,  52,  82,  23,  68,  67,  51,  98,  50, 114,  50,
    114,  50, 114,  50, 114,  50, 114,  50, 114,  50, 114,  50,
    114,  50, 114,  50, 114,   0,  14,  48,  31,  16,   0,  22,
     69, 168, 114,  83,  82, 114,  66, 146,  50, 146,  50, 146,
     50, 146,  50, 146,  51, 130,  66, 114,  84,  67, 105, 149,
      0,  16, 112,  39,  15,   0,  20,  82,  52, 106,  83,  68,
     66, 114,  66, 115,  50, 130,  50, 130,  50, 130,  50, 130,
     50, 115,  50, 114,  67,  68,  74,  82,  36, 114, 210, 210,
    210, 210, 210, 240, 240, 208,  40,  15,   0,  21,  20,  34,
     90,  68,  67,  66, 114,  51, 114,  50, 130,  50, 130,  50,
    130,  50, 130,  51, 114,  66, 114,  68,  52,  87,  18, 101,
     34, 210, 210, 210, 210, 210, 210, 240, 240,  48,  22,  10,
      0,  13,  98,  50,  50,  20,  53,  83, 115, 114, 130, 130,
    130, 130, 130, 130, 130, 130,   0,  11,  23,  13,   0,  18,
     23,  88,  67,  81,  66, 178, 180, 167, 134, 179, 178, 178,
     50,  83,  57, 102,   0,  13,  80,  26,  12,   0,  10,  98,
    162, 162, 162, 136,  72,  98, 162, 162, 162, 162, 162, 162,
    162, 162, 162,  49, 103, 100,   0,  12,  80,  35,  14,   0,
     19,  34, 114,  50, 114,  50, 114,  50, 114,  50, 114,  50,
    114,  50, 114,  50, 114,  50, 114,  50, 114,  50, 114,  50,
     84,  56,  18,  69,  50,   0,  14,  48,  31,  15,   0,  20,
     82, 130,  51,  99,  51,  98,  82,  98,  83,  67,  83,  66,
    114,  66, 115,  35, 115,  34, 146,  34, 150, 164, 180, 180,
      0,  15, 112,  52,  22,   0,  30,  34,  98,  99,  50,  99,
     83,  51,  68,  82,  67,  68,  82,  82,  66,  18,  51,  83,
     49,  34,  50,  99,  34,  34,  50, 114,  34,  34,  50, 114,
     34,  50,  19, 117,  66,  18, 148,  66,  18, 148,  66,  18,
    147,  99, 163,  99,   0,  22, 112,  30,  16,   0,  22,  18,
    115,  67,  83,  99,  66, 131,  35, 150, 180, 195, 212, 181,
    178,  34, 146,  51, 115,  67,  83,  99,  51, 130,   0,  16,
     48,  37,  15,   0,  20,  82, 130,  51,  99,  51,  98,  82,
     98,  83,  67,  98,  66, 115,  50, 130,  35, 130,  34, 147,
     18, 164, 180, 195, 194, 210, 195, 194, 195, 149, 164, 240,
    240, 176,  21,  14,   0,  19,  43,  59, 163, 178, 179, 163,
    163, 178, 179, 163, 178, 178, 187,  59,   0,  14,  48,   9,
     18,   0,  33, 111,  63,   0,  36,  48,  11,  33,   0,  61,
    127,  15,  63,  15,   0,  66,  48,  18,  12, 240, 178,  50,
     66,  50,  82,  50,  82,  50,  66,  50,  82,  50,   0,  38,
     16,  14,  12,   0,   6,  19,  65,  53,  34,  50,  37,  49,
     67,   0,  38,
};

//*****************************************************************************
//
// The font definition for the 32 point Cmss font.
//
//*****************************************************************************
const tFont g_sFontCmss32 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    29,

    //
    // The height of the font.
    //
    33,

    //
    // The baseline of the font.
    //
    25,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   31,   51,  140,  190,  267,  326,
         338,  374,  410,  438,  484,  497,  506,  516,
         552,  597,  626,  659,  693,  731,  764,  805,
         833,  876,  916,  931,  949,  975,  988, 1018,
        1048, 1108, 1158, 1204, 1249, 1298, 1328, 1357,
        1406, 1457, 1485, 1516, 1568, 1597, 1683, 1751,
        1800, 1840, 1899, 1948, 1982, 2034, 2084, 2136,
        2222, 2274, 2327, 2357, 2392, 2412, 2447, 2462,
        2471, 2483, 2510, 2551, 2574, 2617, 2642, 2670,
        2709, 2752, 2776, 2807, 2848, 2876, 2925, 2960,
        2991, 3030, 3070, 3092, 3115, 3141, 3176, 3207,
        3259, 3289, 3326, 3347, 3356, 3367, 3385,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss32Data
};
