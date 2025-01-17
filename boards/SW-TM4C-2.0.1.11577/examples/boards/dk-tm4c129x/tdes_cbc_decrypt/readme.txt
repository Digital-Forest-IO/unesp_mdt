TDES CBC Decryption Demo

Simple demo showing an decryption operation using the DES module with 
triple DES in CBC mode.  A single block of data is decrypted at a time.  
The module is also capable of performing in DES mode, but this has been 
proven to be cryptographically insecure.  CBC mode is also not recommended 
because it will always produce the same ciphertext for a block of 
plaintext.  CBC and CFB modes are recommended instead.

Please note that the use of interrupts and uDMA is not required for the
operation of the module.  It is only done for demonstration purposes.

-------------------------------------------------------------------------------

Copyright (c) 2013 Texas Instruments Incorporated.  All rights reserved.
Software License Agreement

Texas Instruments (TI) is supplying this software for use solely and
exclusively on TI's microcontroller products. The software is owned by
TI and/or its suppliers, and is protected under applicable copyright
laws. You may not combine this software with "viral" open-source
software in order to form a larger program.

THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
DAMAGES, FOR ANY REASON WHATSOEVER.

This is part of revision 2.0.1.11577 of the DK-TM4C129X Firmware Package.
