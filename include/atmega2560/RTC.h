/**
 * @file RTC.h
 * @brief Asynchronous Timer2 real-time counter support.
 */

#ifndef ATMEGA2560_DEFINITIONS_RTC_H
#define ATMEGA2560_DEFINITIONS_RTC_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Rtc definitions. */
    namespace rtc
    {
        /** @brief Asynchronous timer oscillator. */
        enum : uint32_t
        {
            has_asynchronous_timer2 = 1,         ///< has asynchronous timer2.
            timer_index = 2,                     ///< timer index.
            external_crystal_nominal_hz = 32768, ///< external crystal nominal hz.
            tosc1_pin_value = 0x64,              ///< tosc1 pin value.
            tosc2_pin_value = 0x63,              ///< tosc2 pin value.
            has_external_timer_clock = 1,        ///< has external timer clock.
        };
    }
}

#endif
