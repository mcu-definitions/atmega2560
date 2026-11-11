/**
 * @file Package.h
 * @brief Supported package types and selected package.
 */

#ifndef ATMEGA2560_DEFINITIONS_PACKAGE_H
#define ATMEGA2560_DEFINITIONS_PACKAGE_H

#include <stdint.h>
#include "Config.h"
#include "PackagePins.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Package definitions. */
    namespace package
    {
        /** @brief Supported physical packages. */
        enum class Type : uint8_t
        {
            Unspecified = 0, ///< Package not selected.
            TQFP100 = 1,     ///< 100-lead TQFP.
            CBGA100 = 2,     ///< 100-ball CBGA.
        };
        /** @brief Tqfp100 definitions. */
        namespace tqfp100
        {
            /** @brief TQFP-100 properties. */
            enum : uint8_t
            {
                type_id = 1,            ///< type id.
                pin_count = 100,        ///< pin count.
                adc_channel_count = 16, ///< adc channel count.
                has_exposed_pad = 0,    ///< has exposed pad.
            };
        }
        /** @brief Cbga100 definitions. */
        namespace cbga100
        {
            /** @brief CBGA-100 properties. */
            enum : uint8_t
            {
                type_id = 2,            ///< type id.
                pin_count = 100,        ///< pin count.
                adc_channel_count = 16, ///< adc channel count.
                has_exposed_pad = 0,    ///< has exposed pad.
            };
        }
        /** @brief Unspecified definitions. */
        namespace unspecified
        {
            /** @brief No package selected. */
            enum : uint8_t
            {
                type_id = 0,           ///< type id.
                pin_count = 0,         ///< pin count.
                adc_channel_count = 0, ///< adc channel count.
                has_exposed_pad = 0,   ///< has exposed pad.
            };
        }
#if defined(MCU_PACKAGE_TQFP100)
        namespace selected = tqfp100;
        static const Type selected_type = Type::TQFP100;
#elif defined(MCU_PACKAGE_CBGA100)
        namespace selected = cbga100;
        static const Type selected_type = Type::CBGA100;
#else
        namespace selected = unspecified;
        static const Type selected_type = Type::Unspecified;
#endif
        /** @brief Package count. */
        enum : uint8_t
        {
            supported_package_count = 2, ///< supported package count.
        };
    }
}

#endif
