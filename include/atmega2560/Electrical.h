/**
 * @file Electrical.h
 * @brief Operating conditions and absolute maximum ratings.
 */

#ifndef ATMEGA2560_DEFINITIONS_ELECTRICAL_H
#define ATMEGA2560_DEFINITIONS_ELECTRICAL_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Electrical definitions. */
    namespace electrical
    {
        /** @brief Electrical ordering grade represented by this datasheet family. */
        enum class Grade : uint8_t
        {
            Unspecified = 0, ///< No operating grade selected.
            Standard = 1,    ///< ATmega2560 standard speed grade.
            LowVoltageV = 2, ///< ATmega2560V low-voltage ordering variant.
        };

        /** @brief Standard ATmega2560 operating conditions. */
        namespace standard
        {
            enum : int16_t
            {
                operating_temperature_min_c = -40, ///< Minimum operating temperature.
                operating_temperature_max_c = 85,  ///< Maximum operating temperature.
            };
            enum : uint32_t
            {
                available = 1,                     ///< Standard grade is available.
                recommended_vcc_min_mv = 4500,     ///< Minimum VCC for the 16 MHz ordering grade.
                recommended_vcc_max_mv = 5500,     ///< Maximum recommended VCC.
                max_cpu_frequency_hz = 16000000UL, ///< Maximum CPU frequency at the 16 MHz grade supply range.
            };
        }

        /** @brief ATmega2560V low-voltage operating conditions. */
        namespace low_voltage
        {
            enum : int16_t
            {
                operating_temperature_min_c = -40, ///< Minimum operating temperature.
                operating_temperature_max_c = 85,  ///< Maximum operating temperature.
            };
            enum : uint32_t
            {
                available = 1,                           ///< ATmega2560V variant is covered by the family datasheet.
                recommended_vcc_min_mv = 1800,           ///< Minimum VCC for the low-voltage variant.
                recommended_vcc_max_mv = 5500,           ///< Maximum recommended VCC.
                max_cpu_frequency_hz_at_1v8 = 2000000UL, ///< Maximum CPU frequency at 1.8 V.
                max_cpu_frequency_hz_at_2v7 = 8000000UL, ///< Maximum CPU frequency at 2.7 V and above.
            };
        }

        /** @brief Absolute maximum ratings; exceeding them may permanently damage the device. */
        namespace absolute_maximum
        {
            enum : int16_t
            {
                operating_temperature_min_c = -55,    ///< Absolute minimum operating temperature.
                operating_temperature_max_c = 125,    ///< Absolute maximum operating temperature.
                storage_temperature_min_c = -65,      ///< Minimum storage temperature.
                storage_temperature_max_c = 150,      ///< Maximum storage temperature.
                min_pin_voltage_mv = -500,            ///< Minimum voltage on pins other than RESET.
                max_pin_voltage_above_vcc_mv = 500,   ///< Maximum voltage above VCC on pins other than RESET.
                min_reset_voltage_mv = -500,          ///< Minimum RESET pin voltage.
                max_reset_voltage_mv = 13000,         ///< Maximum RESET pin voltage.
                max_vcc_mv = 6000,                    ///< Absolute maximum operating voltage.
                max_dc_current_per_io_pin_ma = 40,    ///< Absolute maximum DC current per I/O pin.
                max_dc_current_vcc_gnd_pins_ma = 200, ///< Absolute maximum current through VCC/GND pins.
            };
        }

        /** @brief No grade selected by the application. */
        namespace unspecified
        {
            enum : uint32_t
            {
                available = 0,              ///< No operating profile selected.
                recommended_vcc_min_mv = 0, ///< Unknown minimum operating voltage.
                recommended_vcc_max_mv = 0, ///< Unknown maximum operating voltage.
            };
        }

#if defined(MCU_GRADE_INDUSTRIAL_85C)
        namespace selected = standard;
        static const Grade selected_grade = Grade::Standard;
#elif defined(MCU_GRADE_LOW_VOLTAGE)
        namespace selected = low_voltage;
        static const Grade selected_grade = Grade::LowVoltageV;
#else
        namespace selected = unspecified;
        static const Grade selected_grade = Grade::Unspecified;
#endif
    }
}

#endif
