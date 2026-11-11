/**
 * @file ExternalInterrupts.h
 * @brief External interrupt and pin-change mappings.
 */

#ifndef ATMEGA2560_DEFINITIONS_EXTERNALINTERRUPTS_H
#define ATMEGA2560_DEFINITIONS_EXTERNALINTERRUPTS_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief External interrupts definitions. */
    namespace external_interrupts
    {
        /** @brief External interrupt lines. */
        enum class Line : uint8_t
        {
            INT0 = 0, ///< External interrupt 0.
            INT1 = 1, ///< External interrupt 1.
            INT2 = 2, ///< External interrupt 2.
            INT3 = 3, ///< External interrupt 3.
            INT4 = 4, ///< External interrupt 4.
            INT5 = 5, ///< External interrupt 5.
            INT6 = 6, ///< External interrupt 6.
            INT7 = 7, ///< External interrupt 7.
        };
        /** @brief External interrupt pin assignments. */
        enum class LinePin : uint8_t
        {
            INT0 = 0x30, ///< External INT0 input pin.
            INT1 = 0x31, ///< External INT1 input pin.
            INT2 = 0x32, ///< External INT2 input pin.
            INT3 = 0x33, ///< External INT3 input pin.
            INT4 = 0x44, ///< External INT4 input pin.
            INT5 = 0x45, ///< External INT5 input pin.
            INT6 = 0x46, ///< External INT6 input pin.
            INT7 = 0x47, ///< External INT7 input pin.
        };
        /** @brief Pin-change interrupt sources. */
        enum class PinChangeSource : uint8_t
        {
            PCINT0 = 0,   ///< Pin-change source 0.
            PCINT1 = 1,   ///< Pin-change source 1.
            PCINT2 = 2,   ///< Pin-change source 2.
            PCINT3 = 3,   ///< Pin-change source 3.
            PCINT4 = 4,   ///< Pin-change source 4.
            PCINT5 = 5,   ///< Pin-change source 5.
            PCINT6 = 6,   ///< Pin-change source 6.
            PCINT7 = 7,   ///< Pin-change source 7.
            PCINT8 = 8,   ///< Pin-change source 8.
            PCINT9 = 9,   ///< Pin-change source 9.
            PCINT10 = 10, ///< Pin-change source 10.
            PCINT11 = 11, ///< Pin-change source 11.
            PCINT12 = 12, ///< Pin-change source 12.
            PCINT13 = 13, ///< Pin-change source 13.
            PCINT14 = 14, ///< Pin-change source 14.
            PCINT15 = 15, ///< Pin-change source 15.
            PCINT16 = 16, ///< Pin-change source 16.
            PCINT17 = 17, ///< Pin-change source 17.
            PCINT18 = 18, ///< Pin-change source 18.
            PCINT19 = 19, ///< Pin-change source 19.
            PCINT20 = 20, ///< Pin-change source 20.
            PCINT21 = 21, ///< Pin-change source 21.
            PCINT22 = 22, ///< Pin-change source 22.
            PCINT23 = 23, ///< Pin-change source 23.
        };
        /** @brief Logical GPIO pin for each pin-change source. */
        enum class PinChangePin : uint8_t
        {
            PCINT0 = 0x10,  ///< PB0.
            PCINT1 = 0x11,  ///< PB1.
            PCINT2 = 0x12,  ///< PB2.
            PCINT3 = 0x13,  ///< PB3.
            PCINT4 = 0x14,  ///< PB4.
            PCINT5 = 0x15,  ///< PB5.
            PCINT6 = 0x16,  ///< PB6.
            PCINT7 = 0x17,  ///< PB7.
            PCINT8 = 0x40,  ///< PE0.
            PCINT9 = 0x80,  ///< PJ0.
            PCINT10 = 0x81, ///< PJ1.
            PCINT11 = 0x82, ///< PJ2.
            PCINT12 = 0x83, ///< PJ3.
            PCINT13 = 0x84, ///< PJ4.
            PCINT14 = 0x85, ///< PJ5.
            PCINT15 = 0x86, ///< PJ6.
            PCINT16 = 0x90, ///< PK0.
            PCINT17 = 0x91, ///< PK1.
            PCINT18 = 0x92, ///< PK2.
            PCINT19 = 0x93, ///< PK3.
            PCINT20 = 0x94, ///< PK4.
            PCINT21 = 0x95, ///< PK5.
            PCINT22 = 0x96, ///< PK6.
            PCINT23 = 0x97, ///< PK7.
        };
        /** @brief Counts. */
        enum : uint8_t
        {
            external_line_count = 8,      ///< external line count.
            pin_change_group_count = 3,   ///< pin change group count.
            pin_change_source_count = 24, ///< pin change source count.
        };
    }
}

#endif
