/**
 * @file GPIO.h
 * @brief GPIO port characteristics and register addresses.
 */

#ifndef ATMEGA2560_DEFINITIONS_GPIO_H
#define ATMEGA2560_DEFINITIONS_GPIO_H

#include <stdint.h>
#include "Pin.h"
#include "RegisterMap.h"

namespace atmega2560
{
    /** @brief GPIO characteristics. */
    namespace gpio
    {
        enum : uint8_t
        {
            port_count = 11,
            has_internal_pullups = 1,
            pullups_selectable_per_pin = 1,
            has_global_pullup_disable = 1,
            ports_tristated_during_reset = 1,
            has_adc_digital_input_disable = 1,
            has_digital_input_disable_adc0_to_adc15 = 1
        };

        typedef pin::Port Port;

        /** @brief Port widths, valid masks and data-space addresses. */
        namespace port
        {
            enum : uint8_t
            {
                a_width = 8,
                b_width = 8,
                c_width = 8,
                d_width = 8,
                e_width = 8,
                f_width = 8,
                g_width = 6,
                h_width = 8,
                j_width = 8,
                k_width = 8,
                l_width = 8,
                a_mask = 0xFF,
                b_mask = 0xFF,
                c_mask = 0xFF,
                d_mask = 0xFF,
                e_mask = 0xFF,
                f_mask = 0xFF,
                g_mask = 0x3F,
                h_mask = 0xFF,
                j_mask = 0xFF,
                k_mask = 0xFF,
                l_mask = 0xFF
            };

            enum : uint16_t
            {
                a_input_register = register_map::PINA,
                a_direction_register = register_map::DDRA,
                a_output_register = register_map::PORTA,
                b_input_register = register_map::PINB,
                b_direction_register = register_map::DDRB,
                b_output_register = register_map::PORTB,
                c_input_register = register_map::PINC,
                c_direction_register = register_map::DDRC,
                c_output_register = register_map::PORTC,
                d_input_register = register_map::PIND,
                d_direction_register = register_map::DDRD,
                d_output_register = register_map::PORTD,
                e_input_register = register_map::PINE,
                e_direction_register = register_map::DDRE,
                e_output_register = register_map::PORTE,
                f_input_register = register_map::PINF,
                f_direction_register = register_map::DDRF,
                f_output_register = register_map::PORTF,
                g_input_register = register_map::PING,
                g_direction_register = register_map::DDRG,
                g_output_register = register_map::PORTG,
                h_input_register = register_map::PINH,
                h_direction_register = register_map::DDRH,
                h_output_register = register_map::PORTH,
                j_input_register = register_map::PINJ,
                j_direction_register = register_map::DDRJ,
                j_output_register = register_map::PORTJ,
                k_input_register = register_map::PINK,
                k_direction_register = register_map::DDRK,
                k_output_register = register_map::PORTK,
                l_input_register = register_map::PINL,
                l_direction_register = register_map::DDRL,
                l_output_register = register_map::PORTL
            };
        }
    }
}

#endif
