/**
 * @file XMEM.h
 * @brief External memory interface buses and control registers.
 */

#ifndef ATMEGA2560_DEFINITIONS_XMEM_H
#define ATMEGA2560_DEFINITIONS_XMEM_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Xmem definitions. */
    namespace xmem
    {
        /** @brief External memory window and port mappings. */
        enum : uint32_t
        {
            supported = 1,                                ///< supported.
            external_memory_start = 0x2200,               ///< external memory start.
            external_memory_address_end = 0xFFFF,         ///< external memory address end.
            data_address_low_port_value = 0,              ///< data address low port value.
            upper_address_port_value = 2,                 ///< upper address port value.
            control_signals_port_value = 6,               ///< control signals port value.
            ale_pin_value = 0x62,                         ///< ale pin value.
            read_pin_value = 0x61,                        ///< read pin value.
            write_pin_value = 0x60,                       ///< write pin value.
            external_memory_mapped_size_bytes = 0xDE00UL, ///< external memory mapped size bytes.
        };
    }
}

#endif
