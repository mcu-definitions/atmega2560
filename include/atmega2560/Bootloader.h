/**
 * @file Bootloader.h
 * @brief Boot section sizes and Flash address ranges.
 */

#ifndef ATMEGA2560_DEFINITIONS_BOOTLOADER_H
#define ATMEGA2560_DEFINITIONS_BOOTLOADER_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Bootloader definitions. */
    namespace bootloader
    {
        /** @brief Four boot section sizes. */
        enum class SectionSizeWords : uint16_t
        {
            Words512 = 512,   ///< Boot section 512 words.
            Words1024 = 1024, ///< Boot section 1024 words.
            Words2048 = 2048, ///< Boot section 2048 words.
            Words4096 = 4096, ///< Boot section 4096 words.
        };
        /** @brief BOOTSZ1:0 fuse field encodings. */
        enum class BootSizeCode : uint8_t
        {
            Words512 = 0x03,  ///< 512-word boot section, BOOTSZ1:0 = 11.
            Words1024 = 0x02, ///< 1024-word boot section, BOOTSZ1:0 = 10.
            Words2048 = 0x01, ///< 2048-word boot section, BOOTSZ1:0 = 01.
            Words4096 = 0x00, ///< 4096-word boot section, BOOTSZ1:0 = 00.
        };
        /** @brief Boot partition boundaries. */
        enum : uint32_t
        {
            flash_size_words = 131072UL,                  ///< flash size words.
            flash_end_word_address = 0x1FFFFUL,           ///< flash end word address.
            smallest_boot_start_word_address = 0x1FE00UL, ///< start of the 512-word boot section.
            largest_boot_start_word_address = 0x1F000UL,  ///< start of the 4096-word boot section.
            minimum_boot_section_words = 512,             ///< minimum boot section size in words.
            maximum_boot_section_words = 4096,            ///< maximum boot section size in words.
            minimum_boot_page_count = 4,                  ///< minimum boot section page count.
            maximum_boot_page_count = 32,                 ///< maximum boot section page count.
            flash_page_size_words = 128,                  ///< flash page size words.
        };
    }
}

#endif
