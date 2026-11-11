/**
 * @file Watchdog.h
 * @brief Watchdog oscillator and timeout selections.
 */

#ifndef ATMEGA2560_DEFINITIONS_WATCHDOG_H
#define ATMEGA2560_DEFINITIONS_WATCHDOG_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Watchdog definitions. */
    namespace watchdog
    {
        /** @brief Nominal watchdog timeouts. */
        enum class Timeout : uint16_t
        {
            Ms16 = 16,     ///< Nominal 16 ms timeout.
            Ms32 = 32,     ///< Nominal 32 ms timeout.
            Ms64 = 64,     ///< Nominal 64 ms timeout.
            Ms125 = 125,   ///< Nominal 125 ms timeout.
            Ms250 = 250,   ///< Nominal 250 ms timeout.
            Ms500 = 500,   ///< Nominal 500 ms timeout.
            Ms1000 = 1000, ///< Nominal 1000 ms timeout.
            Ms2000 = 2000, ///< Nominal 2000 ms timeout.
            Ms4000 = 4000, ///< Nominal 4000 ms timeout.
            Ms8000 = 8000, ///< Nominal 8000 ms timeout.
        };
        /** @brief Watchdog properties. */
        enum : uint32_t
        {
            oscillator_nominal_hz = 128000UL,      ///< oscillator nominal hz.
            timeout_values_are_approximate = 1,    ///< timeout values are approximate.
            supports_interrupt_mode = 1,           ///< supports interrupt mode.
            supports_reset_mode = 1,               ///< supports reset mode.
            supports_interrupt_and_reset_mode = 1, ///< supports interrupt and reset mode.
        };
    }
}

#endif
