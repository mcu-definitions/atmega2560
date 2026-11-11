/**
 * @file Memory.h
 * @brief Flash, EEPROM, SRAM, and external-memory geometry.
 */

#ifndef ATMEGA2560_DEFINITIONS_MEMORY_H
#define ATMEGA2560_DEFINITIONS_MEMORY_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Memory definitions. */
    namespace memory
    {
        /** @brief Memory organization. */
        enum : uint32_t
        {
            flash_size_bytes = 262144UL,                  ///< flash size bytes.
            flash_size_words = 131072UL,                  ///< flash size words.
            flash_page_size_words = 128,                  ///< flash page size words.
            flash_page_size_bytes = 256,                  ///< flash page size bytes.
            flash_page_count = 1024,                      ///< flash page count.
            flash_min_erase_write_cycles = 10000UL,       ///< flash min erase write cycles.
            sram_size_bytes = 8192,                       ///< sram size bytes.
            sram_start_address = 0x0200,                  ///< sram start address.
            sram_end_address = 0x21FF,                    ///< sram end address.
            ramend = 0x21FF,                              ///< ramend.
            eeprom_size_bytes = 4096,                     ///< eeprom size bytes.
            eeprom_start_address = 0x0000,                ///< eeprom start address.
            eeprom_end_address = 0x0FFF,                  ///< eeprom end address.
            eeprom_page_size_bytes = 8,                   ///< eeprom page size bytes.
            eeprom_page_count = 512,                      ///< eeprom page count.
            eeprom_min_erase_write_cycles = 100000UL,     ///< eeprom min erase write cycles.
            io_space_start_address = 0x0020,              ///< io space start address.
            extended_io_end_address = 0x01FF,             ///< extended io end address.
            external_memory_window_start = 0x2200,        ///< external memory window start.
            external_memory_window_end = 0xFFFF,          ///< external memory window end.
            external_memory_mapped_size_bytes = 0xDE00UL, ///< external memory mapped size bytes.
        };
    }
}

#endif
