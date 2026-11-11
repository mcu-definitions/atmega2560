/**
 * @file Fuse.h
 * @brief Low, high, and extended fuse bit locations.
 */

#ifndef ATMEGA2560_DEFINITIONS_FUSE_H
#define ATMEGA2560_DEFINITIONS_FUSE_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Fuse definitions. */
    namespace fuse
    {
        /** @brief Low definitions. */
        namespace low
        {
            /** @brief Low fuse bits. */
            enum : uint8_t
            {
                CKDIV8 = 7, ///< Divide clock by 8.
                CKOUT = 6,  ///< Output system clock.
                SUT1 = 5,   ///< Startup time bit 1.
                SUT0 = 4,   ///< Startup time bit 0.
                CKSEL0 = 0, ///< Clock select 0.
                CKSEL1 = 1, ///< Clock select 1.
                CKSEL2 = 2, ///< Clock select 2.
                CKSEL3 = 3, ///< Clock select 3.
            };
        }
        /** @brief High definitions. */
        namespace high
        {
            /** @brief High fuse bits. */
            enum : uint8_t
            {
                OCDEN = 7,   ///< On-chip debug enable.
                JTAGEN = 6,  ///< JTAG enable.
                SPIEN = 5,   ///< Serial programming enable.
                WDTON = 4,   ///< Watchdog always-on.
                EESAVE = 3,  ///< EEPROM preserve through erase.
                BOOTSZ1 = 2, ///< Boot section size 1.
                BOOTSZ0 = 1, ///< Boot section size 0.
                BOOTRST = 0, ///< Reset to bootloader.
            };
        }
        /** @brief Extended definitions. */
        namespace extended
        {
            /** @brief Extended fuse bits. */
            enum : uint8_t
            {
                BODLEVEL2 = 2, ///< Brown-out select 2.
                BODLEVEL1 = 1, ///< Brown-out select 1.
                BODLEVEL0 = 0, ///< Brown-out select 0.
            };
        }
    }
}

#endif
