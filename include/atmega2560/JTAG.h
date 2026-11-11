/**
 * @file JTAG.h
 * @brief JTAG debug and boundary-scan interface.
 */

#ifndef ATMEGA2560_DEFINITIONS_JTAG_H
#define ATMEGA2560_DEFINITIONS_JTAG_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Jtag definitions. */
    namespace jtag
    {
        /** @brief JTAG identity and pins. */
        enum : uint16_t
        {
            supported = 1,                   ///< supported.
            tck_pin_value = 0x54,            ///< tck pin value.
            tms_pin_value = 0x55,            ///< tms pin value.
            tdo_pin_value = 0x56,            ///< tdo pin value.
            tdi_pin_value = 0x57,            ///< tdi pin value.
            part_number = 0x9801,            ///< part number.
            manufacturer_id = 0x1F,          ///< manufacturer id.
            jtag_enabled_by_jtagen_fuse = 1, ///< jtag enabled by jtagen fuse.
        };
    }
}

#endif
