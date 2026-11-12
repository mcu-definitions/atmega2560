/**
 * @file LockBits.h
 * @brief Memory protection and bootloader lock bit positions.
 */

#ifndef ATMEGA2560_DEFINITIONS_LOCK_BITS_H
#define ATMEGA2560_DEFINITIONS_LOCK_BITS_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Lock bits definitions. */
    namespace lock_bits
    {
        /** @brief Lock bit locations. */
        enum class Bit : uint8_t
        {
            LB1 = 0,   ///< Memory lock 1.
            LB2 = 1,   ///< Memory lock 2.
            BLB01 = 2, ///< Boot lock 01.
            BLB02 = 3, ///< Boot lock 02.
            BLB11 = 4, ///< Boot lock 11.
            BLB12 = 5, ///< Boot lock 12.
        };
        /** @brief Lock-bit semantics. */
        enum : uint8_t
        {
            programmed_bit_value = 0,   ///< programmed bit value.
            unprogrammed_bit_value = 1, ///< unprogrammed bit value.
            lock_bit_count = 6,         ///< lock bit count.
        };
    }
}

#endif
