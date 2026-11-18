#include "probe_config.h"
#include "pico/binary_info.h"
#include "probe/version.h"

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)


void bi_decl_config()
{
    bi_decl(bi_program_version_string(PROBE_VERSION));
#ifdef PROBE_PIN_RESET
    bi_decl(bi_1pin_with_name(PROBE_PIN_RESET, "PROBE RESET"));
#endif

#ifdef PROBE_0_PIN_SWCLK
    bi_decl(bi_1pin_with_name(PROBE_0_PIN_SWCLK, "PROBE 0 SWCLK"));
    bi_decl(bi_1pin_with_name(PROBE_0_PIN_SWDIO, "PROBE 0 SWDIO"));
#if defined(PROBE_0_PIN_SWDI) && (PROBE_0_PIN_SWDI >= 0)
    bi_decl(bi_1pin_with_name(PROBE_0_PIN_SWDI, "PROBE 0 SWDI"));
#endif
#if defined(PROBE_0_PIN_RESET) && (PROBE_0_PIN_RESET >= 0)
    bi_decl(bi_1pin_with_name(PROBE_0_PIN_RESET, "PROBE 0 RESET"));
#endif
#if defined(PROBE_0_PIN_LED) && (PROBE_0_PIN_LED >= 0)
    bi_decl(bi_1pin_with_name(PROBE_0_PIN_LED, "PROBE 0 LED"));
#endif
#endif

#ifdef PROBE_1_PIN_SWCLK
    bi_decl(bi_1pin_with_name(PROBE_1_PIN_SWCLK, "PROBE 1 SWCLK"));
    bi_decl(bi_1pin_with_name(PROBE_1_PIN_SWDIO, "PROBE 1 SWDIO"));
#if defined(PROBE_1_PIN_SWDI) && (PROBE_1_PIN_SWDI >= 0)
    bi_decl(bi_1pin_with_name(PROBE_1_PIN_SWDI, "PROBE 1 SWDI"));
#endif
#if defined(PROBE_1_PIN_RESET) && (PROBE_1_PIN_RESET >= 0)
    bi_decl(bi_1pin_with_name(PROBE_1_PIN_RESET, "PROBE 1 RESET"));
#endif
#if defined(PROBE_1_PIN_LED) && (PROBE_1_PIN_LED >= 0)
    bi_decl(bi_1pin_with_name(PROBE_1_PIN_LED, "PROBE 1 LED"));
#endif
#endif

#ifdef PROBE_PIN_SWCLK
    bi_decl(bi_1pin_with_name(PROBE_PIN_SWCLK, "PROBE SWCLK"));
#endif

#ifdef PROBE_PIN_SWDIO
    bi_decl(bi_1pin_with_name(PROBE_PIN_SWDIO, "PROBE SWDIO"));
#endif

#ifdef PROBE_PIN_SWDI
    bi_decl(bi_1pin_with_name(PROBE_PIN_SWDI, "PROBE SWDI"));
#endif

#ifdef PROBE_PIN_SWDIOEN
    bi_decl(bi_1pin_with_name(PROBE_PIN_SWDIOEN, "PROBE SWDIOEN"));
#endif

#ifdef PROBE_CDC_UART
    bi_decl(bi_program_feature("PROBE UART INTERFACE " STR(PROBE_UART_INTERFACE)));
    bi_decl(bi_program_feature("PROBE UART BAUDRATE " STR(PROBE_UART_BAUDRATE)));
    bi_decl(bi_1pin_with_name(PROBE_UART_TX, "PROBE UART TX"));
    bi_decl(bi_1pin_with_name(PROBE_UART_RX, "PROBE UART RX"));
#endif

#ifdef PROBE_UART_CTS
    bi_decl(bi_1pin_with_name(PROBE_UART_CTS, "PROBE UART CTS"));
#endif
#ifdef PROBE_UART_RTS
    bi_decl(bi_1pin_with_name(PROBE_UART_RTS, "PROBE UART RTS"));
#endif
#ifdef PROBE_UART_DTR
    bi_decl(bi_1pin_with_name(PROBE_UART_DTR, "PROBE UART DTR"));
#endif

}
