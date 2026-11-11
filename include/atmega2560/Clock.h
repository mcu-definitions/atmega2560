/**
 * @file Clock.h
 * @brief Clock sources, oscillator and CPU prescaler.
 */

#ifndef ATMEGA2560_DEFINITIONS_CLOCK_H
#define ATMEGA2560_DEFINITIONS_CLOCK_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Clock definitions. */
    namespace clock
    {
        /** @brief Main clock source types. */
        enum class Source : uint8_t
        {
            ExternalClock = 0,        ///< External clock input.
            InternalCalibratedRC = 1, ///< Calibrated internal RC oscillator.
            Internal128kHzRC = 2,     ///< Internal 128 kHz oscillator.
            LowFrequencyCrystal = 3,  ///< Low-frequency crystal oscillator.
            CrystalOscillator = 4,    ///< External crystal or ceramic resonator.
        };

        /** @brief Clock distribution domains. */
        enum class Domain : uint8_t
        {
            CPU = 0,               ///< CPU clock.
            IO = 1,                ///< Peripheral I/O clock.
            Flash = 2,             ///< Flash interface clock.
            ADC = 3,               ///< ADC clock.
            AsynchronousTimer = 4, ///< Asynchronous timer clock.
        };

        /** @brief CKSEL fuse startup time subfield. */
        enum class SUTCode : uint8_t
        {
            SUT00 = 0, ///< Startup code 00.
            SUT01 = 1, ///< Startup code 01.
            SUT10 = 2, ///< Startup code 10.
            SUT11 = 3, ///< Startup code 11.
        };

        /** @brief All CKSEL3:0 fuse encodings from datasheet Table 10-1. */
        enum class CKSELCode : uint8_t
        {
            ExternalClock = 0x0,              ///< External clock.
            Reserved = 0x1,                   ///< Reserved encoding.
            InternalCalibratedRC = 0x2,       ///< Calibrated internal RC oscillator.
            Internal128kHzRC = 0x3,           ///< Internal 128 kHz RC oscillator.
            LowFrequencyCrystalOption0 = 0x4, ///< Low-frequency crystal option.
            LowFrequencyCrystalOption1 = 0x5, ///< Low-frequency crystal option.
            FullSwingCrystalOption0 = 0x6,    ///< Full-swing crystal option.
            FullSwingCrystalOption1 = 0x7,    ///< Full-swing crystal option.
            LowPowerCrystalOption0 = 0x8,     ///< Low-power crystal option.
            LowPowerCrystalOption1 = 0x9,     ///< Low-power crystal option.
            LowPowerCrystalOption2 = 0xA,     ///< Low-power crystal option.
            LowPowerCrystalOption3 = 0xB,     ///< Low-power crystal option.
            LowPowerCrystalOption4 = 0xC,     ///< Low-power crystal option.
            LowPowerCrystalOption5 = 0xD,     ///< Low-power crystal option.
            LowPowerCrystalOption6 = 0xE,     ///< Low-power crystal option.
            LowPowerCrystalOption7 = 0xF,     ///< Low-power crystal option.
        };
        /** @brief CPU prescaler values. */
        enum class Prescaler : uint16_t
        {
            Divide1 = 1,     ///< System prescaler division 1.
            Divide2 = 2,     ///< System prescaler division 2.
            Divide4 = 4,     ///< System prescaler division 4.
            Divide8 = 8,     ///< System prescaler division 8.
            Divide16 = 16,   ///< System prescaler division 16.
            Divide32 = 32,   ///< System prescaler division 32.
            Divide64 = 64,   ///< System prescaler division 64.
            Divide128 = 128, ///< System prescaler division 128.
            Divide256 = 256, ///< System prescaler division 256.
        };
        /** @brief Clock ratings and defaults. */
        enum : uint32_t
        {
            internal_calibrated_rc_hz = 8000000UL,     ///< internal calibrated rc hz.
            internal_128khz_rc_hz = 128000UL,          ///< internal 128khz rc hz.
            timer2_async_crystal_hz = 32768UL,         ///< timer2 async crystal hz.
            factory_default_oscillator_hz = 8000000UL, ///< factory default oscillator hz.
            factory_default_cpu_hz = 1000000UL,        ///< factory default cpu hz.
            standard_max_cpu_hz_at_4v5 = 16000000UL,   ///< standard max cpu hz at 4v5.
            low_voltage_max_cpu_hz_at_2v7 = 8000000UL, ///< low voltage max cpu hz at 2v7.
            low_voltage_max_cpu_hz_at_1v8 = 2000000UL, ///< low voltage max cpu hz at 1v8.
        };
        /** @brief Prescaler facts. */
        enum : uint8_t
        {
            factory_default_divisor = 8, ///< factory default divisor.
            system_prescaler_count = 9,  ///< system prescaler count.
        };
    }
}

#endif
