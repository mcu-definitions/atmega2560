/**
 * @file TWI.h
 * @brief Two-wire serial interface characteristics.
 */

#ifndef ATMEGA2560_DEFINITIONS_TWI_H
#define ATMEGA2560_DEFINITIONS_TWI_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Twi definitions. */
    namespace twi
    {
        /** @brief TWI prescalers. */
        enum class Prescaler : uint8_t
        {
            Prescale1 = 1,   ///< TWI prescale one.
            Prescale4 = 4,   ///< TWI prescale four.
            Prescale16 = 16, ///< TWI prescale sixteen.
            Prescale64 = 64, ///< TWI prescale sixty-four.
        };
        /** @brief Hardware properties. */
        enum : uint8_t
        {
            module_count = 1,           ///< module count.
            scl_pin_value = 0x30,       ///< scl pin value.
            sda_pin_value = 0x31,       ///< sda pin value.
            address_bits = 7,           ///< address bits.
            has_general_call = 1,       ///< has general call.
            has_slave_address_mask = 1, ///< has slave address mask.
        };
    }
}

#endif
