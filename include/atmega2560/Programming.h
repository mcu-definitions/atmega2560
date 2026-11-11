/**
 * @file Programming.h
 * @brief In-system programming interface, signatures and page geometry.
 */

#ifndef ATMEGA2560_DEFINITIONS_PROGRAMMING_H
#define ATMEGA2560_DEFINITIONS_PROGRAMMING_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Programming definitions. */
    namespace programming
    {
        /** @brief Programming interfaces. */
        enum class Interface : uint8_t
        {
            ISP = 0,             ///< SPI in-system programming.
            Parallel = 1,        ///< High-voltage parallel programming.
            JTAG = 2,            ///< JTAG programming.
            SelfProgramming = 3, ///< Bootloader self-programming.
        };
        /** @brief Programming geometry. */
        enum : uint16_t
        {
            signature_byte_0 = 0x1E,           ///< signature byte 0.
            signature_byte_1 = 0x98,           ///< signature byte 1.
            signature_byte_2 = 0x01,           ///< signature byte 2.
            flash_page_size_bytes = 256,       ///< flash page size bytes.
            flash_page_count = 1024,           ///< flash page count.
            eeprom_page_size_bytes = 8,        ///< eeprom page size bytes.
            eeprom_page_count = 512,           ///< eeprom page count.
            has_extended_flash_addressing = 1, ///< has extended flash addressing.
        };
    }
}

#endif
