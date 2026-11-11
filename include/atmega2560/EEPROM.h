/**
 * @file EEPROM.h
 * @brief EEPROM organization and endurance.
 */

#ifndef ATMEGA2560_DEFINITIONS_EEPROM_H
#define ATMEGA2560_DEFINITIONS_EEPROM_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Eeprom definitions. */
    namespace eeprom
    {
        /** @brief EEPROM geometry. */
        enum : uint32_t
        {
            size_bytes = 4096,                   ///< size bytes.
            page_size_bytes = 8,                 ///< page size bytes.
            page_count = 512,                    ///< page count.
            address_bits = 12,                   ///< address bits.
            minimum_endurance_cycles = 100000UL, ///< minimum endurance cycles.
            erased_byte_value = 0xFF,            ///< erased byte value.
        };
    }
}

#endif
