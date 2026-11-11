/**
 * @file GPIO.h
 * @brief GPIO port widths, masks and pull-ups.
 */

#ifndef ATMEGA2560_DEFINITIONS_GPIO_H
#define ATMEGA2560_DEFINITIONS_GPIO_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Gpio definitions. */
    namespace gpio
    {
        /** @brief GPIO capabilities. */
        enum : uint8_t
        {
            port_count = 11,                             ///< port count.
            has_internal_pullups = 1,                    ///< has internal pullups.
            pullups_selectable_per_pin = 1,              ///< pullups selectable per pin.
            has_global_pullup_disable = 1,               ///< has global pullup disable.
            ports_tristated_during_reset = 1,            ///< ports tristated during reset.
            has_digital_input_disable_adc0_to_adc15 = 1, ///< has digital input disable adc0 to adc15.
        };
        /** @brief Port definitions. */
        namespace port
        {
            /** @brief Widths and valid bit masks. */
            enum : uint8_t
            {
                a_width = 8,   ///< Port A width.
                b_width = 8,   ///< Port B width.
                c_width = 8,   ///< Port C width.
                d_width = 8,   ///< Port D width.
                e_width = 8,   ///< Port E width.
                f_width = 8,   ///< Port F width.
                g_width = 6,   ///< Port G width.
                h_width = 8,   ///< Port H width.
                j_width = 8,   ///< Port J width.
                k_width = 8,   ///< Port K width.
                l_width = 8,   ///< Port L width.
                a_mask = 0xFF, ///< Port A bonded GPIO mask.
                b_mask = 0xFF, ///< Port B bonded GPIO mask.
                c_mask = 0xFF, ///< Port C bonded GPIO mask.
                d_mask = 0xFF, ///< Port D bonded GPIO mask.
                e_mask = 0xFF, ///< Port E bonded GPIO mask.
                f_mask = 0xFF, ///< Port F bonded GPIO mask.
                g_mask = 0x3F, ///< Port G bonded GPIO mask.
                h_mask = 0xFF, ///< Port H bonded GPIO mask.
                j_mask = 0xFF, ///< Port J bonded GPIO mask.
                k_mask = 0xFF, ///< Port K bonded GPIO mask.
                l_mask = 0xFF, ///< Port L bonded GPIO mask.
            };
        }
    }
}

#endif
