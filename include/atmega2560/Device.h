/**
 * @file Device.h
 * @brief Hardware resources, capabilities and device signature.
 */

#ifndef ATMEGA2560_DEFINITIONS_DEVICE_H
#define ATMEGA2560_DEFINITIONS_DEVICE_H

#include <stdint.h>
#include "Config.h"

namespace atmega2560
{
    /** @brief Device information. */
    namespace device
    {
        /** @brief Hardware resource counts. */
        enum : uint8_t
        {
            programmable_io_line_count = 86,
            gpio_line_count = 86,
            gpio_line_count_default = 86,
            timer_count = 6,
            pwm_channel_count = 16,
            pwm_distinct_pin_count = 15,
            adc_max_external_channel_count = 16,
            adc_resolution_bits = 10,
            usart_count = 4,
            spi_count = 1,
            spi_capable_peripheral_count = 5,
            twi_count = 1,
            external_interrupt_count = 8,
            interrupt_vector_count = 57,
            pin_change_source_count = 24
        };

        /** @brief Peripheral availability flags. */
        enum : uint8_t
        {
            has_gpio = 1,
            has_adc = 1,
            has_pwm = 1,
            has_timer0 = 1,
            has_timer1 = 1,
            has_timer2 = 1,
            has_timer3 = 1,
            has_timer4 = 1,
            has_timer5 = 1,
            has_usart = 1,
            has_spi = 1,
            has_twi = 1,
            has_analog_comparator = 1,
            has_watchdog = 1,
            has_external_interrupts = 1,
            has_pin_change_interrupts = 1,
            has_debugwire = 0,
            has_jtag = 1,
            has_external_memory_interface = 1,
            has_self_programmable_flash = 1
        };

        /** @brief Device signature and identification. */
        enum : uint16_t
        {
            signature_byte_0 = 0x1E,
            signature_byte_1 = 0x98,
            signature_byte_2 = 0x01,
            jtag_part_number = 0x9801
        };
    }
}

#endif
