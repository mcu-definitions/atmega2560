/**
 * @file QTouch.h
 * @brief Capacitive touch software support metadata.
 */

#ifndef ATMEGA2560_DEFINITIONS_QTOUCH_H
#define ATMEGA2560_DEFINITIONS_QTOUCH_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Qtouch definitions. */
    namespace qtouch
    {
        /** @brief QTouch support. */
        enum : uint8_t
        {
            supported = 1,                     ///< supported.
            has_dedicated_hardware = 0,        ///< has dedicated hardware.
            uses_general_purpose_io = 1,       ///< uses general purpose io.
            requires_software_acquisition = 1, ///< requires software acquisition.
            max_sense_channel_count = 64,      ///< Maximum QTouch sense channels supported by the library.
        };
    }
}

#endif
