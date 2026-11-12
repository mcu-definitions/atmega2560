/**
 * @file AnalogComparator.h
 * @brief Analog comparator input and interrupt definitions.
 */

#ifndef ATMEGA2560_DEFINITIONS_ANALOG_COMPARATOR_H
#define ATMEGA2560_DEFINITIONS_ANALOG_COMPARATOR_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Analog comparator definitions. */
    namespace analog_comparator
    {
        /** @brief Interrupt modes. */
        enum class InterruptMode : uint8_t
        {
            Toggle = 0,      ///< Interrupt on any output change.
            FallingEdge = 2, ///< Falling edge interrupt.
            RisingEdge = 3,  ///< Rising edge interrupt.
        };
        /** @brief Comparator properties. */
        enum : uint8_t
        {
            count = 1,                         ///< count.
            positive_input_pin_value = 0x42,   ///< positive input pin value.
            negative_input_pin_value = 0x43,   ///< negative input pin value.
            adc_mux_input_count = 16,          ///< adc mux input count.
            has_internal_bandgap_input = 1,    ///< has internal bandgap input.
            has_adc_mux_negative_input = 1,    ///< has adc mux negative input.
            adc_mux_requires_adc_disabled = 1, ///< adc mux requires adc disabled.
            can_trigger_timer1_capture = 1,    ///< can trigger timer1 capture.
        };
    }
}

#endif
