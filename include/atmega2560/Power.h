/**
 * @file Power.h
 * @brief Sleep modes and peripheral power gates.
 */

#ifndef ATMEGA2560_DEFINITIONS_POWER_H
#define ATMEGA2560_DEFINITIONS_POWER_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Power definitions. */
    namespace power
    {
        /** @brief SMCR mode encodings. */
        enum class SleepMode : uint8_t
        {
            Idle = 0,              ///< CPU halt.
            ADCNoiseReduction = 1, ///< ADC noise reduction.
            PowerDown = 2,         ///< Power down.
            PowerSave = 3,         ///< Power save.
            Standby = 6,           ///< Standby oscillator.
            ExtendedStandby = 7,   ///< Extended standby.
        };
        /** @brief Power features. */
        enum : uint8_t
        {
            has_prr0 = 1,                           ///< has prr0.
            has_prr1 = 1,                           ///< has prr1.
            has_sleep_mode_idle = 1,                ///< has sleep mode idle.
            has_sleep_mode_adc_noise_reduction = 1, ///< has sleep mode ADC noise reduction.
            has_sleep_mode_power_down = 1,          ///< has sleep mode power down.
            has_sleep_mode_power_save = 1,          ///< has sleep mode power save.
            has_sleep_mode_standby = 1,             ///< has sleep mode standby.
            has_sleep_mode_extended_standby = 1,    ///< has sleep mode extended standby.
        };
    }
}

#endif
