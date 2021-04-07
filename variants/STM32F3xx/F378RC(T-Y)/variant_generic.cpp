/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_F378RCTX) || defined(ARDUINO_GENERIC_F378RCYX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D1/A0
  PA_1,   // D2/A1
  PA_2,   // D3/A2
  PA_3,   // D4/A3
  PA_4,   // D5/A4
  PA_5,   // D6/A5
  PA_6,   // D7/A6
  PA_7,   // D8/A7
  PA_8,   // D9
  PA_9,   // D10
  PA_10,  // D11
  PA_11,  // D12
  PA_12,  // D13
  PA_13,  // D14
  PA_14,  // D15
  PA_15,  // D16
  PB_0,   // D17/A8
  PB_1,   // D18/A9
  PB_3,   // D19
  PB_4,   // D20
  PB_5,   // D21
  PB_6,   // D22
  PB_7,   // D23
  PB_8,   // D24
  PB_9,   // D25
  PB_14,  // D26
  PB_15,  // D27
  PC_0,   // D28/A10
  PC_1,   // D29/A11
  PC_2,   // D30/A12
  PC_3,   // D31/A13
  PC_4,   // D32/A14
  PC_5,   // D33/A15
  PC_6,   // D34
  PC_7,   // D35
  PC_8,   // D36
  PC_9,   // D37
  PC_10,  // D38
  PC_11,  // D39
  PC_12,  // D40
  PC_13,  // D41
  PC_14,  // D42
  PC_15,  // D43
  PD_2,   // D44
  PD_8,   // D45
  PE_8,   // D46
  PE_9,   // D47
  PF_0,   // D48
  PF_1,   // D49
  PF_6,   // D50
  PF_7    // D51
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  16, // A8,  PB0
  17, // A9,  PB1
  27, // A10, PC0
  28, // A11, PC1
  29, // A12, PC2
  30, // A13, PC3
  31, // A14, PC4
  32  // A15, PC5
};

#endif /* ARDUINO_GENERIC_* */
