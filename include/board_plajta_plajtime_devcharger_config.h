/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 Plajta corp.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef BOARD_PLAJTA_PLAJTIME_DEVCHARGER_CONFIG_H_
#define BOARD_PLAJTA_PLAJTIME_DEVCHARGER_CONFIG_H_

#define PROBE_IO_RAW
#define PROBE_CDC_UART

#define PROBE_COUNT 2

// PIO config
#define PROBE_0_SM 0
#define PROBE_1_SM 1
#define PROBE_0_PIN_OFFSET 2
#define PROBE_1_PIN_OFFSET 14

#define PROBE_0_PIN_SWCLK (PROBE_0_PIN_OFFSET + 0) // 2
#define PROBE_0_PIN_SWDIO (PROBE_0_PIN_OFFSET + 1) // 3
#define PROBE_1_PIN_SWCLK (PROBE_1_PIN_OFFSET + 0) // 14
#define PROBE_1_PIN_SWDIO (PROBE_1_PIN_OFFSET + 1) // 15
// Target reset config - set to -1 to disable
#define PROBE_0_PIN_RESET -1
#define PROBE_1_PIN_RESET -1

#define PROBE_0_PIN_LED 18
#define PROBE_1_PIN_LED 19

#define PROBE_VENDOR_STRING "Plajta"
#define PROBE_PRODUCT_STRING "PlajTime DEVCharger (CMSIS-DAP)"

#endif
