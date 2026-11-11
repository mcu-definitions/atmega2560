/**
 * @file Architecture.h
 * @brief AVR CPU architecture.
 */

#ifndef ATMEGA2560_DEFINITIONS_ARCHITECTURE_H
#define ATMEGA2560_DEFINITIONS_ARCHITECTURE_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Architecture definitions. */
    namespace architecture
    {
        /** @brief AVR core properties. */
        enum : uint8_t
        {
            cpu_word_bits = 8,                     ///< cpu word bits.
            data_bus_bits = 8,                     ///< data bus bits.
            general_purpose_register_count = 32,   ///< general purpose register count.
            general_purpose_register_bits = 8,     ///< general purpose register bits.
            instruction_count = 135,               ///< instruction count.
            program_counter_bits = 17,             ///< program counter bits.
            stack_pointer_register_pair_bits = 16, ///< stack pointer register pair bits.
            status_register_bits = 8,              ///< status register bits.
            pipeline_stages = 2,                   ///< pipeline stages.
            multiplier_cycles = 2,                 ///< multiplier cycles.
            harvard_architecture = 1,              ///< harvard architecture.
            maximum_throughput_mips_per_mhz = 1,   ///< maximum throughput mips per mhz.
        };
    }
}

#endif
