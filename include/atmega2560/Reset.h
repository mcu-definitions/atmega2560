/**
 * @file Reset.h
 * @brief Reset origins and status.
 */

#ifndef ATMEGA2560_DEFINITIONS_RESET_H
#define ATMEGA2560_DEFINITIONS_RESET_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Reset definitions. */
    namespace reset
    {
        /** @brief Reset sources. */
        enum class Source : uint8_t
        {
            PowerOn = 0,  ///< Power-on reset.
            External = 1, ///< External reset.
            BrownOut = 2, ///< Brown-out reset.
            Watchdog = 3, ///< Watchdog reset.
            JTAG = 4,     ///< JTAG AVR reset.
        };
        /** @brief Reset properties. */
        enum : uint8_t
        {
            has_power_on_reset = 1,          ///< has power on reset.
            has_external_reset = 1,          ///< has external reset.
            has_brown_out_reset = 1,         ///< has brown out reset.
            has_watchdog_reset = 1,          ///< has watchdog reset.
            has_jtag_reset = 1,              ///< has jtag reset.
            reset_pin_terminal_tqfp100 = 30, ///< reset pin terminal tqfp100.
        };
    }
}

#endif
