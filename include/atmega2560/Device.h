/**
 * @file Device.h
 * @brief Device identity and peripheral counts.
 */

#ifndef ATMEGA2560_DEFINITIONS_DEVICE_H
#define ATMEGA2560_DEFINITIONS_DEVICE_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Device definitions. */
    namespace device
    {
        /** @brief Hardware resources. */
        enum : uint8_t
        {
            programmable_io_line_count = 86,     ///< programmable io line count.
            gpio_line_count = 86,                ///< gpio line count.
            timer_count = 6,                     ///< timer count.
            pwm_channel_count = 16,              ///< pwm channel count.
            pwm_distinct_pin_count = 15,         ///< pwm distinct pin count.
            adc_max_external_channel_count = 16, ///< adc max external channel count.
            adc_resolution_bits = 10,            ///< adc resolution bits.
            usart_count = 4,                     ///< usart count.
            spi_count = 1,                       ///< spi count.
            twi_count = 1,                       ///< twi count.
            external_interrupt_count = 8,        ///< external interrupt count.
            interrupt_vector_count = 57,         ///< interrupt vector count.
            pin_change_source_count = 24,        ///< pin change source count.
        };
        /** @brief Device signatures. */
        enum : uint16_t
        {
            signature_byte_0 = 0x1E,   ///< signature byte 0.
            signature_byte_1 = 0x98,   ///< signature byte 1.
            signature_byte_2 = 0x01,   ///< signature byte 2.
            jtag_part_number = 0x9801, ///< jtag part number.
        };
    }
}

#endif
