//*****************************************************************************
//
// fontcm46i.c - Font definition for the 46pt Cm italic font.
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
//     Style: cm
//     Size: 46 point
//     Bold: no
//     Italic: yes
//     Memory usage: 6772 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 46 point Cm italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm46iData[6570] =
{
      5,  18,   0, 105,  96,  39,  16, 240, 240, 179, 196, 181,
    181, 180, 196, 196, 195, 196, 196, 195, 211, 211, 210, 211,
    211, 211, 210, 226, 211, 210, 226, 226, 225, 241,   0,   7,
     67, 197, 181, 181, 195,   0,  25,  64,  35,  19, 240, 240,
    179,  83, 117,  53, 101,  53, 101,  53, 116,  68, 161, 113,
    145, 113, 161, 113, 145, 113, 161, 113, 145, 113, 145, 113,
    145, 113, 145, 113,   0,  74, 112, 127,  36,   0,  16,   2,
    129, 240, 162, 114, 240, 146, 130, 240, 146, 114, 240, 146,
    130, 240, 146, 114, 240, 146, 130, 240, 146, 114, 240, 146,
    130, 240, 146, 114, 240, 146, 130, 240, 146, 114, 240, 161,
    130, 240, 146, 129, 240, 161, 130, 240, 146, 129, 239,  15,
    240,  18, 114, 240, 146, 130, 240, 146, 114, 240, 161, 130,
    240, 146, 129, 240, 162, 114, 240, 146, 130, 240, 146, 114,
    240,  31,  15, 225, 130, 240, 146, 129, 240, 161, 130, 240,
    146, 129, 240, 161, 130, 240, 146, 129, 240, 161, 130, 240,
    146, 129, 240, 161, 130, 240, 146, 129, 240, 161, 130, 240,
    146, 129, 240, 161, 130, 240, 146, 129, 240, 161, 130,   0,
     16,  64,  88,  31,   0,  10,  36, 240, 162,  65, 240, 130,
     97, 240,  98, 114, 240,  67, 129, 240,  66, 145, 240,  51,
    145, 240,  50, 161, 240,  35, 131, 240,  35, 131, 240,  35,
    130, 240,  50, 240, 211, 240, 211, 240, 211, 240, 210, 240,
    171, 240, 131, 240, 211, 240, 210, 240, 211, 240, 211, 240,
    211, 240, 210, 240, 226, 240, 211, 240, 211, 240, 135, 193,
    146,  52, 193, 130,  85, 145, 130,  82,  20, 113, 146,  66,
     67,  66, 181, 133,   0,  48, 136,  36, 163, 240,  34, 194,
     49, 243, 178,  66, 211, 178,  98, 179, 194,  97,  18, 101,
    194, 113,  54,  34, 210, 113, 162, 210, 129, 147, 210, 129,
    146, 226, 129, 130, 227, 113, 130, 242, 129, 114, 240,  18,
    129,  98, 240,  34, 113,  99, 240,  34, 113,  98, 240,  50,
     97,  98, 240,  66,  97,  82, 240,  97,  81,  82, 240, 129,
     34,  83, 240, 146,  99, 129, 240, 146, 114,  18, 240,  98,
     98,  65, 240,  82,  98,  97, 240,  50, 114,  97, 240,  35,
     98, 113, 240,  19, 114, 113, 240,  18, 114, 129, 242, 130,
    129, 226, 131, 129, 210, 147, 113, 211, 146, 129, 195, 162,
    114, 194, 178, 113, 194, 194,  98, 178, 210,  97, 178, 241,
     81, 179, 242,  49, 194, 240,  36,   0,  42,  16, 112,  34,
      0,   9, 116, 240, 210,  66, 178, 194,  98, 147, 178, 129,
    147, 162, 146, 131, 162, 146, 145, 163, 116, 145, 162, 116,
    145, 163, 115, 146, 163, 240,  50, 178, 240,  50, 194, 240,
     34, 210,  36, 148, 213,  49, 115,  18, 195,  81,  98,  65,
    195,  81,  82,  82, 164,  81,  66, 113, 165,  49,  81, 129,
    147,  36,  82, 129, 146, 194,  18,  81, 131, 212,  81, 131,
    212,  81, 116, 240, 113, 115, 240, 113, 131, 240, 113, 131,
    240,  97, 147, 240,  97, 147, 240,  81, 178, 240,  66, 179,
    240,  34, 211, 242, 243, 194, 240,  67, 130, 240, 136,   0,
     49,  16,  20,  11, 240, 163, 117, 101, 101, 116, 161, 145,
    161, 145, 161, 145, 145, 145, 145,   0,  43, 112,  96,  20,
    241, 240,  49, 240,  49, 240,  49, 240,  50, 240,  34, 240,
     34, 240,  49, 240,  50, 240,  34, 240,  50, 240,  34, 240,
     34, 240,  50, 240,  35, 240,  34, 240,  50, 240,  34, 240,
     50, 240,  35, 240,  34, 240,  50, 240,  50, 240,  35, 240,
     34, 240,  50, 240,  50, 240,  50, 240,  35, 240,  34, 240,
     50, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 240,  50, 240,  50, 240,  65, 240,  66, 240,  50, 240,
     65, 240,  66, 240,  65, 240,  66, 240,  65, 240,  97,  20,
    177, 240,  81, 240,  66, 240,  65, 240,  66, 240,  50, 240,
     65, 240,  65, 240,  66, 240,  50, 240,  50, 240,  50, 240,
     50, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     35, 240,  35, 240,  34, 240,  50, 240,  50, 240,  35, 240,
     35, 240,  34, 240,  50, 240,  35, 240,  34, 240,  50, 240,
     35, 240,  34, 240,  50, 240,  34, 240,  50, 240,  34, 240,
     50, 240,  34, 240,  49, 240,  50, 240,  34, 240,  34, 240,
     49, 240,  49, 240,  49, 240,  49, 240,  49, 240,  64,  51,
     22, 177, 240,  82, 240,  82, 240,  82, 240,  81, 211,  66,
     67, 115,  50,  51, 147,  33,  35, 210,  17,  18, 240,  20,
    240,  52, 240,  18,  17,  18, 211,  33,  35, 147,  50,  51,
    115,  66,  67, 209, 240,  82, 240,  82, 240,  82, 240,  82,
      0,  76,  63,  32,   0,  38,  17, 240, 242, 240, 242, 240,
    242, 240, 241, 240, 242, 240, 242, 240, 242, 240, 241, 240,
    242, 240, 242, 240, 242, 240, 241, 240, 242, 240,  47,  13,
    240,  34, 240, 226, 240, 242, 240, 242, 240, 242, 240, 226,
    240, 242, 240, 242, 240, 242, 240, 226, 240, 242, 240, 242,
    240, 241,   0,  42,  80,  21,  11,   0,  41,  83, 117, 101,
    101, 116, 161, 145, 161, 145, 161, 145, 145, 145, 145, 240,
    240, 208,   9,  15,   0,  45,  11,  75,   0,  39, 112,  12,
      9,   0,  34,   2, 100,  69,  69,  83,   0,  14,  16,  98,
     31, 240, 162, 240, 226, 240, 210, 240, 226, 240, 210, 240,
    226, 240, 210, 240, 210, 240, 226, 240, 210, 240, 226, 240,
    210, 240, 226, 240, 210, 240, 226, 240, 210, 240, 210, 240,
    226, 240, 210, 240, 226, 240, 210, 240, 226, 240, 210, 240,
    225, 240, 226, 240, 210, 240, 226, 240, 210, 240, 226, 240,
    210, 240, 226, 240, 210, 240, 210, 240, 226, 240, 210, 240,
    226, 240, 210, 240, 226, 240, 210, 240, 226, 240, 210, 240,
    210, 240, 226, 240, 210, 240, 226, 240, 210, 240, 226, 240,
    224,  71,  24,   0,  13,  54, 240,  19,  51, 226,  99, 194,
    130, 179, 131, 162, 147, 147, 147, 131, 163, 131, 163, 116,
    163, 115, 164, 115, 164, 100, 164,  99, 179, 115, 179, 100,
    164, 100, 164, 100, 163, 115, 179, 115, 164, 100, 163, 116,
    163, 115, 164, 115, 163, 131, 163, 131, 147, 147, 147, 147,
    131, 178, 130, 195,  98, 227,  51, 240,  37,   0,  34, 112,
     67,  20,   0,  11, 113, 240,  50, 240,  34, 240,  35, 240,
     20, 226,  19, 179,  35, 240,  35, 240,  35, 240,  35, 240,
     19, 240,  35, 240,  35, 240,  35, 240,  19, 240,  35, 240,
     35, 240,  35, 240,  34, 240,  35, 240,  35, 240,  35, 240,
     35, 240,  19, 240,  35, 240,  35, 240,  35, 240,  19, 240,
     35, 240,  20, 190,   0,  30,  96,  81,  25,   0,  13, 118,
    240,  50,  66, 240,  17, 114, 225, 146, 193, 162, 177, 179,
    161,  49, 115, 145,  65, 115, 145,  65, 115, 145,  65, 115,
    129,  65, 116, 129,  65, 115, 145,  49, 131, 145,  34, 115,
    179, 116, 240,  99, 240,  99, 240,  98, 240,  99, 240,  99,
    240,  83, 240,  98, 240, 114, 240, 114, 177, 162, 193, 146,
    194, 130, 194, 146, 194, 135,  99, 146,  58, 161, 103, 162,
    132,   0,  35,  96,  76,  26,   0,  14,  70, 240,  50,  83,
    241, 131, 209, 162, 193, 179, 161, 195, 161,  49, 131, 145,
     65, 131, 145,  65, 131, 145,  65, 115, 161,  49, 131, 179,
    131, 240, 130, 240, 130, 240, 115, 240,  39, 240, 147, 240,
    147, 240, 146, 240, 147, 240, 131, 240, 131, 240, 131, 147,
    164, 132, 164, 131, 179, 145, 196, 145, 195, 162, 163, 193,
    147, 226,  83, 240,  38,   0,  37, 112,  86,  23,   0,  13,
     82, 240,  98, 240,  83, 240,  83, 240,  83, 240,  67, 240,
     83, 240,  83, 240,  82, 240,  83, 240,  82, 240,  98, 240,
     82, 240,  98, 240,  82, 240,  98, 240,  82, 240,  98, 240,
     82, 240,  98, 240,  82,  51, 226,  67, 225,  82, 226,  67,
    210,  83, 194,  99, 193, 114, 193, 115, 167,  51, 145, 103,
    129, 164,  34, 247, 240,  19, 240,  83, 240,  82, 240,  83,
    240,  83, 240,  83, 240,  82, 240,  98,   0,  10,  70,  24,
      0,  13,   1, 161, 195,  99, 187, 218, 225,  22, 240,  17,
    240, 114, 240, 113, 240, 129, 240, 129, 240, 129, 240, 114,
    240, 113,  53, 241,  18,  66, 226, 114, 194, 131, 240,  99,
    240,  99, 240,  99, 240,  99, 240,  99, 131, 148, 116, 147,
    132, 147, 131, 163, 129, 179, 145, 178, 162, 147, 177, 131,
    194,  99, 226,  66, 240,  37,   0,  35,  74,  25,   0,  14,
     37, 240,  35,  66, 242, 114, 210, 130, 194, 131, 178, 132,
    163, 131, 163, 240,  99, 240, 115, 240, 100, 240,  99,  53,
    212,  33,  67, 180,  17,  98, 179,  17, 115, 149, 146, 148,
    163, 132, 163, 132, 148, 131, 164, 116, 164, 116, 164, 115,
    179, 131, 164, 131, 163, 147, 163, 147, 147, 163, 146, 194,
    131, 195,  98, 243,  51, 240,  53,   0,  36,  48,  77,  26,
      0,  13,  81,  52, 129, 130,  22, 113, 145,  23,  98, 133,
     66,  81, 148,  82,  66, 146, 129,  35, 146, 164, 162, 194,
    146, 209, 161, 210, 146, 209, 161, 210, 240, 130, 240, 146,
    240, 131, 240, 130, 240, 131, 240, 130, 240, 131, 240, 131,
    240, 115, 240, 131, 240, 115, 240, 131, 240, 131, 240, 116,
    240, 115, 240, 116, 240, 116, 240, 115, 240, 131, 240, 131,
      0,  37, 112,  73,  25,   0,  14,  21, 240,  50,  66, 242,
    114, 210, 146, 194, 146, 178, 162, 178, 162, 163, 162, 163,
    146, 180, 130, 180, 114, 197,  82, 229,  50, 240,  21,  18,
    240,  53, 240, 102, 240,  19,  22, 226,  70, 178, 117, 162,
    149, 130, 180, 115, 195, 114, 211,  98, 227,  98, 226, 114,
    226, 114, 210, 130, 210, 146, 178, 163, 146, 211,  82, 240,
     38,   0,  36,  16,  74,  25,   0,  14,   6, 240,  35,  66,
    242,  99, 210, 130, 194, 147, 163, 147, 147, 163, 147, 163,
    132, 163, 131, 179, 116, 164, 116, 164, 116, 164, 115, 164,
    131, 164, 131, 149, 146, 149, 146, 129,  19, 163,  98,  19,
    179,  65,  36, 213,  51, 240, 115, 240,  99, 240, 115, 240,
     99, 240, 114, 179, 131, 164, 115, 179, 115, 194, 114, 242,
     67, 240,  38,   0,  36,  64,  19,  12,   0,  23,  18, 148,
    132, 132, 131,   0,  15,  99, 132, 132, 132, 146,   0,  19,
     16,  28,  15,   0,  29,  18, 196, 165, 165, 179,   0,  19,
    114, 196, 165, 165, 179, 225, 225, 209, 225, 209, 225, 209,
    209, 209,   0,   7,  48,  39,  16,   0,  23,   3, 197, 181,
    181, 195,   0,   9,  65, 241, 226, 226, 226, 211, 210, 226,
    211, 211, 211, 210, 211, 211, 211, 196, 196, 195, 196, 196,
    196, 181, 181, 180, 195, 240, 240, 240,  13,  34,   0,  81,
     15,  13,   0,  34,  79,  13,   0,  77,  32,  59,  19,   0,
     27,  67, 240,  19, 244, 244, 240,  18,   0,  11,  51, 241,
     49, 209,  65, 194,  65, 193,  81, 240,  34, 240,  18, 243,
    243, 243, 243, 243, 243, 114,  98, 131,  82, 147,  81, 178,
     66, 177,  81, 178,  81, 177,  97, 162,  97, 161, 113, 145,
    145, 114, 161,  66, 213,   0,   6,  16,  64,  20,   0,   6,
      5, 211,  66, 162, 113, 146, 145, 114, 161,  98, 177,  97,
    193,  82, 193,  81, 194,  66, 178,  83, 162,  83, 131,  98,
    131, 240,  19, 244, 243, 240,  19, 240,  19, 240,  19, 240,
     33, 240,  50,  81, 193,  82, 193,  81, 209,  50, 243,   0,
      9,  67, 240,  20, 240,  20, 240,  20, 240,  19,   0,  32,
    123,  32,   0,   9, 118, 240, 131,  98, 240,  81, 177, 240,
     34, 209, 241, 240,  17, 209, 240,  34, 177, 240,  65, 161,
    133, 113, 146,  99,  65, 113, 129,  99,  97,  97, 113,  99,
    114,  81, 113,  83, 147,  49,  97,  83, 163,  49,  97,  83,
    162,  65,  81,  83, 178,  65,  81,  83, 163,  65,  81,  83,
    163,  65,  65,  83, 178,  65,  81,  83, 178,  65,  81,  83,
    163,  65,  81,  83, 163,  65,  81,  83, 163,  49,  97,  83,
    147,  65,  97,  99, 116,  50,  97,  99,  97,  19,  49, 114,
     99,  50,  35,  33, 145, 132,  84, 161, 240, 240,  33, 240,
    240,  17, 240, 240,  33, 240,  35, 194, 211, 243, 132, 240,
     73,   0,  46,  89,  32,   0,  10,  82, 240, 227, 240, 227,
    240, 212, 240, 212, 240, 197, 240, 193,  19, 240, 177,  35,
    240, 162,  35, 240, 161,  51, 240, 146,  51, 240, 145,  67,
    240, 130,  67, 240, 129,  83, 240, 113, 100, 240,  97, 100,
    240,  81, 116, 240,  66, 116, 240,  65, 132, 240,  50, 132,
    240,  49, 148, 240,  47, 240,  33, 179, 240,  17, 195, 242,
    195, 241, 211, 226, 211, 225, 227, 210, 228, 193, 244, 178,
    244, 148, 244, 120, 155,   0,  48,  64,  79,  34,   0,  13,
     95,   3, 240,  68, 163, 240,  51, 179, 240,  19, 196, 243,
    211, 243, 212, 227, 212, 212, 212, 211, 212, 227, 212, 227,
    211, 228, 195, 243, 195, 240,  19, 179, 240,  35, 147, 240,
     62, 240,  83, 179, 240,  35, 195, 240,  19, 196, 228, 212,
    211, 228, 211, 228, 211, 228, 211, 228, 195, 244, 195, 228,
    211, 228, 211, 212, 212, 196, 227, 196, 243, 164, 223,   4,
      0,  52, 112,  93,  34,   0,  14, 102, 113, 240,  36,  82,
     66, 243, 161,  35, 227, 196, 212, 212, 195, 240,  19, 180,
    240,  19, 164, 240,  34, 179, 240,  50, 164, 240,  50, 148,
    240,  66, 148, 240,  65, 148, 240,  81, 148, 240, 228, 240,
    244, 240, 244, 240, 229, 240, 228, 240, 244, 240, 244, 240,
    244, 240,  81, 148, 240,  66, 148, 240,  65, 164, 240,  50,
    179, 240,  49, 196, 240,  18, 211, 242, 228, 225, 240,  19,
    194, 240,  51, 162, 240,  84,  98, 240, 167,   0,  49,  16,
     92,  35,   0,  14,  15,   3, 240,  99, 148, 240,  67, 179,
    240,  36, 195, 240,  20, 210, 240,  19, 227, 243, 242, 228,
    243, 212, 243, 211, 240,  19, 211, 240,  19, 211, 240,  19,
    196, 240,  19, 195, 240,  35, 195, 240,  20, 195, 240,  20,
    180, 240,  19, 195, 240,  35, 195, 240,  20, 195, 240,  19,
    196, 240,  19, 195, 240,  19, 211, 240,  19, 211, 243, 212,
    243, 211, 243, 227, 227, 243, 226, 244, 195, 240,  20, 178,
    240,  51, 163, 255,   2,   0,  54,  96,  90,  35,   0,  14,
     31,   8, 244, 180, 240,  20, 210, 240,  19, 226, 240,  19,
    226, 244, 226, 244, 226, 243, 242, 243, 242, 228, 129,  97,
    244, 129,  97, 243, 145, 240, 115, 130, 240, 100, 129, 240,
    116,  99, 240, 125, 240, 115, 115, 240, 115, 129, 240, 116,
    129, 240, 115, 145, 240, 115, 130, 113, 227, 240,  18, 212,
    240,  17, 227, 240,  18, 227, 240,  17, 243, 240,  17, 228,
    242, 228, 226, 243, 242, 243, 211, 244, 181, 191,   9,   0,
     53, 112,  84,  34,   0,  13, 111,   7, 244, 165, 244, 195,
    243, 226, 243, 225, 244, 225, 244, 225, 243, 241, 243, 241,
    228, 241, 228, 129,  97, 227, 130, 240,  99, 129, 240, 100,
    129, 240, 100, 114, 240, 100,  99, 240, 108, 240, 115, 114,
    240, 100, 114, 240, 100, 114, 240,  99, 130, 240,  99, 129,
    240, 100, 129, 240, 100, 240, 243, 240, 240,  19, 240, 244,
    240, 244, 240, 243, 240, 240,  19, 240, 244, 240, 189,   0,
     53,  80,  92,  34,   0,  14, 102, 113, 240,  36,  82,  66,
    243, 161,  35, 227, 196, 211, 228, 195, 240,  19, 179, 240,
     35, 164, 240,  34, 164, 240,  50, 163, 240,  66, 148, 240,
     66, 148, 240,  65, 148, 240,  81, 148, 240, 228, 240, 244,
    240, 244, 240, 229, 240, 228, 240, 244, 240, 244, 219, 100,
    240,  36, 148, 240,  36, 148, 240,  35, 164, 240,  35, 179,
    240,  35, 180, 244, 195, 243, 212, 212, 227, 212, 243, 162,
     34, 240,  20,  98,  65, 240,  87,   0,  49,  16,  99,  39,
      0,  15,  76,  91, 244, 196, 240,  67, 211, 240,  83, 211,
    240,  83, 211, 240,  68, 196, 240,  67, 211, 240,  83, 211,
    240,  83, 211, 240,  68, 196, 240,  68, 195, 240,  83, 211,
    240,  83, 211, 240,  68, 196, 240,  68, 196, 240,  79,   4,
    240,  83, 211, 240,  68, 196, 240,  68, 196, 240,  67, 211,
    240,  83, 211, 240,  68, 211, 240,  68, 196, 240,  67, 211,
    240,  83, 211, 240,  83, 211, 240,  68, 196, 240,  67, 211,
    240,  83, 211, 240,  83, 211, 240,  68, 196, 251,  91,   0,
     60,  68,  23,   0,   9,  76, 244, 240,  67, 240,  83, 240,
     83, 240,  68, 240,  67, 240,  83, 240,  83, 240,  68, 240,
     67, 240,  83, 240,  83, 240,  68, 240,  67, 240,  83, 240,
     83, 240,  68, 240,  68, 240,  67, 240,  83, 240,  83, 240,
     68, 240,  67, 240,  83, 240,  83, 240,  68, 240,  67, 240,
     83, 240,  83, 240,  68, 252,   0,  35, 112,  73,  27,   0,
     11,  76, 240,  84, 240, 131, 240, 147, 240, 147, 240, 132,
    240, 131, 240, 147, 240, 147, 240, 132, 240, 132, 240, 131,
    240, 147, 240, 132, 240, 132, 240, 131, 240, 147, 240, 147,
    240, 132, 240, 131, 240, 147, 240, 147, 240, 132, 240, 131,
    240, 147, 227, 115, 212, 100, 212,  99, 227, 100, 225, 131,
    242,  99, 240,  34,  51, 240, 100,   0,  39,  80, 103,  40,
      0,  16,  11, 137, 244, 228, 240,  52, 226, 240,  83, 226,
    240,  99, 210, 240, 100, 194, 240, 116, 162, 240, 147, 162,
    240, 163, 146, 240, 164, 130, 240, 180, 114, 240, 195, 114,
    240, 211,  98, 240, 212,  68, 240, 212,  53, 240, 211,  50,
     20, 240, 195,  34,  36, 240, 195,  18,  67, 240, 182,  84,
    240, 164, 116, 240, 163, 147, 240, 163, 148, 240, 132, 148,
    240, 132, 163, 240, 131, 180, 240, 115, 195, 240, 100, 196,
    240,  84, 196, 240,  83, 227, 240,  83, 228, 240,  52, 213,
    236, 122,   0,  61,  48,  71,  29,   0,  11, 124, 240,  84,
    240, 164, 240, 163, 240, 179, 240, 164, 240, 164, 240, 163,
    240, 179, 240, 164, 240, 164, 240, 163, 240, 179, 240, 164,
    240, 164, 240, 163, 240, 179, 240, 179, 240, 164, 240, 163,
    240, 179, 225, 179, 210, 164, 209, 179, 225, 179, 210, 179,
    209, 180, 194, 180, 194, 179, 194, 195, 179, 180, 149, 127,
      6,   0,  44,  64, 158,  46,   0,  18,  40, 240,  56, 245,
    240,  37, 240,  69, 240,  36, 240,  81,  19, 240,  17,  19,
    240,  81,  19, 240,  17,  19, 240,  81,  19, 241,  35, 240,
     66,  19, 241,  19, 240,  81,  35, 225,  35, 240,  81,  35,
    209,  51, 240,  81,  51, 193,  51, 240,  66,  51, 177,  51,
    240,  82,  51, 177,  51, 240,  81,  67, 161,  67, 240,  81,
     67, 145,  83, 240,  66,  67, 145,  67, 240,  82,  67, 129,
     83, 240,  81,  83, 129,  83, 240,  81,  83, 113,  99, 240,
     66,  83, 113,  83, 240,  82,  83,  97,  99, 240,  81, 115,
     65, 115, 240,  81, 115,  65, 115, 240,  81, 115,  49, 116,
    240,  66, 115,  49, 115, 240,  81, 131,  33, 131, 240,  81,
    131,  33, 131, 240,  81, 131,  17, 132, 240,  66, 132, 147,
    240,  82, 132, 147, 240,  82, 131, 163, 240,  67, 131, 148,
    250,  97, 107,   0,  70,  64, 122,  39,   0,  15,  87, 185,
    245, 196, 240,  53, 210, 240,  65,  19, 209, 240,  81,  20,
    193, 240,  66,  20, 178, 240,  66,  35, 178, 240,  65,  52,
    161, 240,  81,  52, 161, 240,  66,  67, 161, 240,  66,  68,
    130, 240,  65,  84, 129, 240,  81,  99, 129, 240,  66, 100,
    113, 240,  66, 100,  98, 240,  65, 131,  97, 240,  81, 132,
     81, 240,  81, 132,  81, 240,  66, 147,  66, 240,  65, 164,
     49, 240,  81, 164,  49, 240,  81, 179,  49, 240,  66, 180,
     18, 240,  65, 196,  18, 240,  65, 211,  17, 240,  81, 213,
    240,  66, 213, 240,  66, 228, 240,  65, 243, 240,  66, 243,
    240,  52, 242, 250, 194,   0,  60,  48, 100,  33,   0,  10,
     23, 240, 147,  83, 240,  83, 131, 240,  35, 179, 243, 211,
    211, 228, 179, 240,  19, 164, 240,  19, 163, 240,  36, 131,
    240,  52, 116, 240,  52, 116, 240,  52, 100, 240,  68, 100,
    240,  68,  85, 240,  68,  84, 240,  69,  84, 240,  69,  84,
    240,  68,  85, 240,  68,  84, 240,  69,  84, 240,  68, 100,
    240,  68, 100, 240,  52, 116, 240,  52, 116, 240,  36, 132,
    240,  35, 163, 240,  20, 164, 228, 180, 227, 211, 211, 243,
    179, 240,  35, 131, 240,  83,  83, 240, 151,   0,  47,  96,
     79,  34,   0,  13,  95,   3, 240,  84, 132, 240,  51, 179,
    240,  35, 195, 244, 196, 228, 196, 227, 212, 227, 212, 212,
    212, 212, 196, 227, 212, 227, 211, 243, 196, 228, 180, 243,
    179, 240,  35, 148, 240,  61, 240,  84, 240, 243, 240, 240,
     19, 240, 240,  19, 240, 244, 240, 244, 240, 243, 240, 240,
     19, 240, 244, 240, 244, 240, 243, 240, 240,  19, 240, 244,
    240, 244, 240, 187,   0,  53, 112, 130,  33,   0,  10,  23,
    240, 147,  83, 240,  83, 131, 240,  50, 179, 243, 211, 211,
    228, 180, 243, 164, 240,  19, 163, 240,  36, 132, 240,  36,
    116, 240,  52, 116, 240,  52, 100, 240,  68, 100, 240,  68,
     85, 240,  68,  84, 240,  84,  84, 240,  69,  84, 240,  68,
     85, 240,  68,  84, 240,  84,  84, 240,  68, 100, 240,  68,
    100, 240,  67, 116, 240,  52, 116, 240,  51, 132, 240,  36,
    147, 100, 115, 163,  81,  65,  83, 180,  49,  97,  51, 211,
     33, 113,  35, 242,  33, 113,  19, 240,  34,  17, 116, 240,
     68,  68, 240, 135,  17, 113, 240, 130, 113, 240, 130, 113,
    240, 130,  97, 240, 147,  51, 240, 152, 240, 168, 240, 167,
    240, 196,   0,  14,  16,  93,  34,   0,  13,  95,   2, 240,
     99, 133, 240,  51, 179, 240,  20, 180, 243, 212, 227, 212,
    227, 212, 212, 212, 212, 212, 211, 212, 227, 212, 212, 211,
    228, 195, 243, 195, 240,  19, 179, 240,  35, 147, 240,  61,
    240,  99, 131, 240,  83, 147, 240,  67, 163, 240,  36, 163,
    240,  35, 179, 240,  35, 179, 240,  35, 179, 240,  20, 164,
    240,  19, 180, 240,  19, 180, 240,  19, 180, 244, 180,  82,
    131, 196,  81, 147, 196,  66,  91, 147,  50, 240, 197,   0,
     47,  96,  76,  29,   0,  12,  70,  81, 243,  82,  49, 226,
    130,  18, 210, 164, 194, 179, 210, 194, 194, 210, 194, 210,
    179, 209, 195, 209, 195, 209, 196, 240, 164, 240, 166, 240,
    153, 240, 106, 240,  90, 240, 120, 240, 150, 240, 164, 240,
    164, 240, 179, 177, 227, 177, 227, 162, 227, 162, 226, 178,
    211, 178, 210, 179, 195, 180, 163, 194,  18, 146, 194,  51,
     82, 225, 102,   0,  41, 112,  79,  32,   0,  12,  63,  10,
    127,  10, 101, 115, 116,  99, 132, 146,  98, 148, 146,  97,
    163, 162,  82, 163, 162,  81, 179, 161,  97, 164, 161,  82,
    163, 177,  81, 179, 177, 240,  35, 240, 212, 240, 211, 240,
    227, 240, 227, 240, 212, 240, 211, 240, 227, 240, 227, 240,
    212, 240, 211, 240, 227, 240, 227, 240, 212, 240, 211, 240,
    227, 240, 227, 240, 212, 240, 212, 240, 197, 240, 127,   0,
     50,  77,  33,   0,  12,  76, 121, 148, 212, 195, 242, 211,
    241, 212, 241, 211, 242, 211, 241, 227, 241, 212, 241, 212,
    226, 211, 241, 227, 241, 212, 241, 212, 226, 211, 241, 227,
    241, 212, 241, 212, 226, 211, 241, 227, 241, 227, 241, 212,
    226, 211, 241, 227, 241, 227, 226, 227, 225, 243, 210, 243,
    209, 240,  34, 193, 240,  51, 161, 240,  82, 145, 240, 115,
     82, 240, 165,   0,  48,  32,  95,  33,   0,  12,  58, 184,
    116, 240,  20, 147, 240,  34, 179, 240,  33, 196, 242, 196,
    241, 212, 226, 212, 225, 228, 209, 240,  19, 194, 240,  19,
    193, 240,  35, 178, 240,  35, 177, 240,  51, 162, 240,  52,
    130, 240,  68, 129, 240,  84, 114, 240,  84, 113, 240, 100,
     98, 240, 100,  97, 240, 131,  81, 240, 147,  66, 240, 147,
     65, 240, 163,  50, 240, 164,  33, 240, 180,  17, 240, 196,
     17, 240, 197, 240, 213, 240, 212, 240, 243, 240, 242, 240,
    240,  17,   0,  48,  80, 137,  45,   0,  16, 122,  90, 121,
    101, 180, 197, 147, 196, 210, 179, 196, 209, 195, 196, 194,
    195, 196, 193, 211, 196, 178, 211, 181, 177, 227, 181, 162,
    227, 161,  20, 161, 243, 161,  20, 146, 243, 145,  36, 145,
    240,  19, 130,  51, 129, 240,  35, 129,  67, 114, 240,  35,
    114,  67, 113, 240,  52,  97,  83,  98, 240,  52,  82,  83,
     97, 240,  68,  81,  99,  82, 240,  68,  66,  99,  81, 240,
     84,  65, 115,  66, 240,  84,  50, 115,  65, 240, 100,  49,
    131,  50, 240, 100,  34, 131,  49, 240, 116,  33, 147,  34,
    240, 116,  18, 147,  33, 240, 132,  17, 163,  18, 240, 133,
    181, 240, 164, 181, 240, 163, 196, 240, 179, 196, 240, 178,
    211, 240, 194, 210, 240, 209, 226,   0,  64, 112, 105,  39,
      0,  15,  91, 121, 240,  21, 180, 240,  68, 194, 240, 115,
    178, 240, 132, 161, 240, 148, 145, 240, 179, 129, 240, 196,
     97, 240, 212,  82, 240, 228,  50, 240, 244,  49, 240, 240,
     20,  33, 240, 240,  53, 240, 240,  69, 240, 240,  68, 240,
    240, 100, 240, 240,  84, 240, 240,  65,  19, 240, 240,  49,
     36, 240, 240,  18,  36, 240, 242,  67, 240, 226,  84, 240,
    209, 100, 240, 193, 132, 240, 161, 148, 240, 146, 148, 240,
    130, 180, 240, 113, 196, 240,  97, 212, 240,  82, 228, 240,
     36, 213, 218, 154,   0,  59,  96,  97,  35,   0,  13,  27,
    185, 117, 240,  20, 180, 240,  18, 212, 242, 243, 241, 240,
     20, 209, 240,  36, 194, 240,  51, 178, 240,  68, 146, 240,
     84, 145, 240, 100, 130, 240, 116,  98, 240, 132,  82, 240,
    148,  81, 240, 180,  49, 240, 196,  34, 240, 196,  18, 240,
    229, 240, 244, 240, 240,  19, 240, 240,  35, 240, 240,  35,
    240, 240,  20, 240, 240,  19, 240, 240,  35, 240, 240,  35,
    240, 240,  35, 240, 240,  20, 240, 240,  19, 240, 240,  35,
    240, 240,  20, 240, 204,   0,  55,  16,  76,  32,   0,  13,
     15,   5, 197, 164, 211, 195, 211, 196, 210, 196, 225, 196,
    226, 180, 242, 179, 240,  17, 180, 240,  17, 164, 240, 196,
    240, 196, 240, 211, 240, 212, 240, 196, 240, 196, 240, 196,
    240, 211, 240, 212, 240, 196, 240, 196, 161, 240,  20, 177,
    240,  19, 178, 244, 177, 244, 193, 228, 194, 212, 209, 227,
    210, 212, 195, 196, 195, 196, 181, 207,   5,   0,  49,  64,
     95,  21, 240, 240,  53, 242, 240,  66, 240,  65, 240,  81,
    240,  66, 240,  66, 240,  65, 240,  81, 240,  66, 240,  66,
    240,  65, 240,  81, 240,  66, 240,  66, 240,  65, 240,  81,
    240,  66, 240,  66, 240,  65, 240,  81, 240,  66, 240,  66,
    240,  65, 240,  81, 240,  66, 240,  66, 240,  66, 240,  65,
    240,  66, 240,  66, 240,  66, 240,  65, 240,  66, 240,  66,
    240,  66, 240,  65, 240,  66, 240,  66, 240,  66, 240,  65,
    240,  66, 240,  66, 240,  66, 240,  65, 240,  70, 240,  33,
     19,   0,   7, 113, 113, 130, 113, 130, 113, 145, 113, 145,
    113, 145, 113, 161, 113, 145, 113, 164,  68, 117,  53, 101,
     53, 101,  53, 115,  83,   0,  74,  64,  95,  21, 240, 240,
     38, 240,  66, 240,  66, 240,  65, 240,  66, 240,  66, 240,
     66, 240,  65, 240,  66, 240,  66, 240,  66, 240,  65, 240,
     66, 240,  66, 240,  66, 240,  65, 240,  66, 240,  66, 240,
     66, 240,  65, 240,  81, 240,  66, 240,  66, 240,  65, 240,
     81, 240,  66, 240,  66, 240,  65, 240,  81, 240,  66, 240,
     66, 240,  65, 240,  81, 240,  66, 240,  66, 240,  65, 240,
     81, 240,  66, 240,  66, 240,  65, 240,  81, 240,  66, 240,
     66, 240,  65, 240,  81, 246, 240,  19,  15,   0,   6,  50,
    195, 178,  18, 146,  49, 130,  66,  97, 114,  65, 145,   0,
     69, 112,  12,   9, 240, 240, 115,  85,  69,  69,  83,   0,
     43,  48,  20,  11, 240, 240, 145, 145, 145, 145, 145, 145,
    161, 145, 164, 117, 101, 101, 115,   0,  43,  64,  59,  23,
      0,  44,  20, 240,  35,  49,  34, 179,  84, 163, 100, 147,
    116, 147, 115, 147, 131, 132, 131, 131, 147, 131, 131, 132,
    131, 132, 131, 131, 147, 131, 131,  65,  67, 131,  65,  67,
    131,  50,  67, 116,  50,  82, 115,  65,  99,  81,  18,  50,
    114,  50,  50,  33, 148,  99,   0,  32,  64,  72,  20,   0,
      7, 103, 240,  35, 240,  35, 240,  19, 240,  35, 240,  35,
    240,  35, 240,  19, 240,  35, 240,  35, 240,  35, 240,  19,
    240,  35,  52, 163,  18,  50, 148,  98, 117,  98, 116, 115,
     99, 131,  99, 131,  84, 131,  83, 147,  83, 132,  68, 132,
     68, 131,  83, 147,  83, 132,  83, 131,  99, 130, 115, 115,
    130,  99, 147,  82, 178,  51, 213,   0,  29,  47,  21,   0,
     40,  70, 211,  66, 163, 114, 131, 115, 115, 116, 115, 115,
    115, 240,  36, 240,  35, 240,  51, 240,  36, 240,  36, 240,
     35, 240,  51, 240,  51, 240,  51, 194,  82, 178,  98, 162,
    130, 130, 147,  82, 214,   0,  30,  32,  81,  24,   0,  10,
    102, 240,  99, 240,  99, 240,  99, 240,  83, 240,  99, 240,
     99, 240,  99, 240,  98, 240,  99, 240,  99, 240,  99, 228,
     50, 211,  49,  19, 195,  84, 179, 100, 163, 115, 179, 115,
    163, 131, 148, 131, 147, 146, 163, 131, 148, 131, 148, 131,
    147, 146, 163, 146,  65,  83, 131,  65,  83, 131,  50,  83,
    116,  50,  98, 115,  65, 115,  81,  18,  50, 130,  50,  50,
     33, 164,  99,   0,  34,  46,  20,   0,  38,  70, 195,  66,
    162, 114, 130, 130, 115, 130,  99, 131,  84, 115,  99,  99,
    137, 164, 240,  19, 240,  35, 240,  35, 240,  35, 240,  35,
    240,  35, 193,  82, 177,  99, 145, 130, 114, 147,  67, 197,
      0,  28, 112,  99,  26,   0,   8,  68, 240,  98,  50, 240,
     50,  51, 240,  50,  36, 240,  35,  35, 240,  50, 240, 146,
    240, 131, 240, 131, 240, 131, 240, 130, 240, 146, 240, 131,
    240,  75, 240,  67, 240, 130, 240, 146, 240, 131, 240, 131,
    240, 131, 240, 131, 240, 130, 240, 146, 240, 131, 240, 131,
    240, 131, 240, 131, 240, 130, 240, 146, 240, 131, 240, 131,
    240, 131, 240, 130, 240, 146, 240, 131, 240, 131, 240, 130,
    240, 146, 240,  51,  35, 240,  36,  34, 240,  51,  50, 240,
     50,  50, 240, 100,   0,   9,  68,  24,   0,  46,  52, 240,
     51,  49,  34, 194, 100, 179, 100, 163, 115, 163, 131, 163,
    131, 148, 131, 147, 146, 163, 131, 148, 131, 148, 131, 147,
    146, 163, 131, 163, 131, 163, 116, 178, 115, 194, 100, 210,
     50,  19, 228,  51, 240,  98, 240,  99, 240,  99, 240,  99,
    240,  98, 179, 115, 164,  99, 180,  98, 210,  83, 247,   0,
      7, 112,  82,  25,   0,   9, 119, 240,  99, 240, 115, 240,
    115, 240, 115, 240, 115, 240,  99, 240, 115, 240, 115, 240,
    115, 240,  99, 240, 115, 240, 115,  53, 227,  18,  51, 210,
     18,  83, 181,  99, 180, 115, 179, 131, 179, 131, 163, 147,
    163, 132, 163, 131, 179, 131, 163, 147, 163, 132, 163, 131,
     65,  99, 131,  65,  83, 132,  50,  83, 131,  65,  99, 131,
     50,  99, 131,  49,  99, 162,  33, 130, 164,   0,  35,  48,
     46,  15,   0,  10,  51, 180, 179,   0,  14,  35, 177,  34,
    145,  51, 114,  51, 113,  67,  98,  52,  97,  67, 113,  67,
    180, 179, 195, 180, 180, 179, 195,  65, 100,  50,  99,  65,
    115,  50, 115,  49, 146,  33, 179,   0,  21,  80,  74,  23,
      0,  16,  50, 240,  84, 240,  67,   0,  22,  20, 240,  34,
     50, 242,  67, 225,  83, 209,  99, 209,  99, 194,  84, 240,
     68, 240,  67, 240,  83, 240,  68, 240,  67, 240,  83, 240,
     83, 240,  68, 240,  67, 240,  83, 240,  83, 240,  68, 240,
     67, 240,  83, 240,  83, 240,  68, 240,  67, 240,  83, 195,
     67, 196,  67, 196,  51, 210,  67, 240,  21,   0,   7,  96,
     87,  24,   0,   9,  71, 240,  83, 240,  99, 240,  99, 240,
     99, 240,  98, 240,  99, 240,  99, 240,  99, 240,  98, 240,
     99, 240,  99, 240,  99, 116, 162,  98,  50, 146,  81,  52,
    131,  65,  67, 147,  49, 240,  35,  33, 240,  50,  33, 240,
     53, 240,  69, 240,  66,  21, 240,  18,  52, 227,  68, 211,
     83, 211,  83,  81, 114,  99,  66,  99,  99,  65, 115,  98,
     81, 115,  98,  66, 114, 114,  65, 115, 130,  34, 130, 147,
      0,  34,  16,  47,  14, 240, 240, 247, 179, 178, 179, 179,
    179, 178, 179, 179, 179, 178, 179, 179, 179, 164, 163, 179,
    179, 164, 163, 179, 179, 164, 163, 179, 179,  65,  84,  50,
     83,  65,  99,  65,  99,  50,  99,  49, 130,  34, 148,   0,
     20,  32,  88,  38,   0,  71,  84,  85, 117, 178,  34,  50,
     51,  50,  51, 146,  50,  33,  98,  34,  83, 129,  66,  17,
    117,  99, 129,  67, 132, 115, 114,  52, 131, 131, 113,  67,
    147, 131, 195, 131, 147, 194, 147, 132, 179, 147, 131, 195,
    147, 131, 195, 131, 147, 195, 131, 132, 179, 147, 131,  65,
    115, 147, 131,  65, 115, 131, 132,  50, 115, 131, 131,  65,
    115, 147, 131,  50, 115, 147, 131,  49, 131, 131, 162,  33,
    146, 162, 164,   0,  53,  32,  64,  27,   0,  51,   3, 102,
    177,  34,  50,  67, 145,  51,  18,  99, 129,  53, 115, 114,
     52, 131, 113,  67, 147, 113,  67, 147, 179, 148, 179, 147,
    195, 147, 195, 132, 179, 147, 195, 147, 195, 132,  65, 115,
    131,  81,  99, 132,  66,  99, 131,  81, 115, 131,  66, 115,
    131,  65, 115, 162,  49, 146, 180,   0,  38,  16,  47,  22,
      0,  42,  53, 242,  67, 179,  99, 147, 130, 131, 147, 115,
    147,  99, 163,  84, 163,  83, 179,  83, 179,  68, 164,  68,
    163,  83, 179,  83, 164,  83, 163,  99, 147, 115, 147, 130,
    131, 147,  99, 179,  66, 245,   0,  31, 112,  75,  26,   0,
     49,  67, 100, 193,  34,  50,  50, 162,  50,  17,  98, 145,
     67, 114, 130,  52, 115, 114,  51, 131, 113,  67, 131, 113,
     66, 147, 179, 147, 179, 132, 179, 132, 178, 147, 179, 147,
    179, 132, 179, 131, 194, 146, 196, 115, 196,  99, 212,  98,
    227,  17,  51, 227,  52, 240,  19, 240, 131, 240, 131, 240,
    115, 240, 131, 240, 131, 240, 131, 240,  89,   0,  11, 112,
     67,  21,   0,  40,  52,  65, 163,  49,  34, 147,  81,  18,
    131, 100, 115, 115, 131, 115, 115, 131, 100, 131,  99, 146,
    115, 131, 100, 131, 100, 131,  99, 147,  99, 146, 115, 131,
    115, 131, 115, 116, 130, 115, 147,  84, 162,  50,  19, 180,
     51, 240,  50, 240,  51, 240,  51, 240,  51, 240,  50, 240,
     51, 240,  51, 234,   0,   8,  96,  51,  22,   0,  41,  84,
     85, 114,  34,  34,  66,  82,  53,  67,  81,  68,  82,  97,
     67, 210,  52, 240,  51, 240,  67, 240,  67, 240,  51, 240,
     67, 240,  67, 240,  67, 240,  51, 240,  67, 240,  67, 240,
     66, 240,  67, 240,  67, 240,  66,   0,  35,  32,  42,  19,
      0,  36,  85, 194,  81, 162, 113, 146,  98, 130,  99, 130,
     99, 131, 240,  20, 247, 215, 215, 245, 240,  19, 240,  34,
     99, 130,  84, 130,  83, 145,  98, 146, 113, 130, 131,  82,
    182,   0,  27,  48,  44,  17,   0,  13,  98, 227, 227, 227,
    211, 227, 227, 227, 211, 157, 147, 226, 227, 227, 227, 227,
    211, 227, 227, 212, 211, 227, 227,  97, 100,  82,  99,  97,
    115,  82, 115,  81, 131,  66, 146,  50, 180,   0,  24,  80,
     64,  25,   0,  47,  52, 146, 145,  35, 115, 129,  51, 115,
    114,  51, 115, 113,  67, 115,  98,  52, 114, 113,  67, 115,
    113,  67, 115, 180, 115, 179, 130, 195, 115, 195, 115, 180,
    115, 179, 130,  65, 115, 115,  65, 115, 115,  65, 115, 115,
     50, 115, 100,  49, 146, 100,  49, 147,  50,  34,  33, 196,
     83,   0,  35,  32,  56,  22,   0,  41, 100, 114, 129,  35,
     84,  97,  51,  84,  82,  51,  99,  81,  67,  99,  66,  52,
    114,  65,  67, 130,  65,  67, 129, 148, 129, 147, 130, 147,
    130, 147, 129, 148, 129, 147, 130, 147, 129, 163, 129, 163,
    113, 179,  98, 195,  81, 211,  50, 240,  21,   0,  31,  80,
     79,  32,   0,  60,  68, 146,  98, 129,  35, 115,  84,  97,
     51, 115,  84,  81,  67, 115,  99,  81,  67, 100,  99,  66,
     52,  99, 130,  65,  67, 115, 130,  65,  67, 115, 129, 148,
    100, 129, 147, 115, 130, 147, 115, 130, 147, 115, 129, 148,
    100, 129, 147, 115, 130, 147, 115, 129, 163, 115, 129, 163,
    115, 114, 163, 100, 113, 195,  81,  19,  81, 226,  65,  35,
     65, 240,  21,  85,   0,  45,  48,  60,  25,   0,  47, 100,
     69, 162,  51,  18,  50, 129, 100,  51, 114,  99,  66, 114,
    115, 209, 131, 209, 115, 240, 115, 240, 115, 240, 115, 240,
     99, 240, 115, 240, 115, 240, 115, 113, 226, 114, 211, 113,
    115,  67,  98, 100,  67,  97, 115,  65,  18,  81, 130,  65,
     50,  50, 164,  84,   0,  35,  80,  74,  23,   0,  43,  84,
    146, 113,  35, 115,  97,  51, 115,  82,  51, 115,  81,  67,
    115,  66,  52,  99,  81,  67, 115,  81,  67, 115, 148, 115,
    147, 115, 163, 115, 163, 115, 148, 115, 147, 115, 163, 115,
    163, 115, 163, 115, 163,  99, 194,  84, 195,  53, 228,  35,
    240,  82, 240,  83, 163, 115, 163,  99, 179,  98, 193, 115,
    193,  99, 225,  66, 240,  36,   0,   7,  96,  54,  22,   0,
     39,  51, 113, 165,  81, 167,  65, 147,  51,  33, 162,  99,
    177, 145, 240,  81, 240,  81, 240,  81, 240,  81, 240,  81,
    240,  81, 240,  81, 240,  81, 240,  81, 145, 161, 161, 145,
    162, 133,  98, 145,  51,  51, 129,  87, 130,  86, 145, 116,
      0,  31,  64,   9,  25,   0,  68, 111,   6,   0,  75,  64,
     12,  45,   0, 123, 111,  15,  11,   0, 127,   0,   8,  64,
     23,  18,   0,   7,  50,  82, 131,  67, 115,  67, 130,  82,
    130,  82, 130,  82, 145,  97, 145,  97,   0,  82,  32,  19,
     19,   0,  10,   3, 113, 117,  81, 114,  34,  65, 113,  82,
     33, 113, 115,   0,  91,  32,
};

//*****************************************************************************
//
// The font definition for the 46 point Cm italic font.
//
//*****************************************************************************
const tFont g_sFontCm46i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    41,

    //
    // The height of the font.
    //
    47,

    //
    // The baseline of the font.
    //
    35,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   44,   79,  206,  294,  430,  542,
         562,  658,  755,  806,  869,  890,  899,  911,
        1009, 1080, 1147, 1228, 1304, 1390, 1460, 1534,
        1611, 1684, 1758, 1777, 1805, 1844, 1857, 1916,
        1980, 2103, 2192, 2271, 2364, 2456, 2546, 2630,
        2722, 2821, 2889, 2962, 3065, 3136, 3294, 3416,
        3516, 3595, 3725, 3818, 3894, 3973, 4050, 4145,
        4282, 4387, 4484, 4560, 4655, 4688, 4783, 4802,
        4814, 4834, 4893, 4965, 5012, 5093, 5139, 5238,
        5306, 5388, 5434, 5508, 5595, 5642, 5730, 5794,
        5841, 5916, 5983, 6034, 6076, 6120, 6184, 6240,
        6319, 6379, 6453, 6507, 6516, 6528, 6551,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm46iData
};
