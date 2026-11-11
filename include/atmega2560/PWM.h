/**
 * @file PWM.h
 * @brief PWM output channels and associated logical pins.
 */

#ifndef ATMEGA2560_DEFINITIONS_PWM_H
#define ATMEGA2560_DEFINITIONS_PWM_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Pwm definitions. */
    namespace pwm
    {
        /** @brief 16 hardware compare outputs. */
        enum class Channel : uint8_t
        {
            OC0A = 0,  ///< Timer0 compare A.
            OC0B = 1,  ///< Timer0 compare B.
            OC1A = 2,  ///< Timer1 compare A.
            OC1B = 3,  ///< Timer1 compare B.
            OC1C = 4,  ///< Timer1 compare C.
            OC2A = 5,  ///< Timer2 compare A.
            OC2B = 6,  ///< Timer2 compare B.
            OC3A = 7,  ///< Timer3 compare A.
            OC3B = 8,  ///< Timer3 compare B.
            OC3C = 9,  ///< Timer3 compare C.
            OC4A = 10, ///< Timer4 compare A.
            OC4B = 11, ///< Timer4 compare B.
            OC4C = 12, ///< Timer4 compare C.
            OC5A = 13, ///< Timer5 compare A.
            OC5B = 14, ///< Timer5 compare B.
            OC5C = 15, ///< Timer5 compare C.
        };
        /** @brief Physical GPIO mapping for compare outputs. */
        enum class OutputPin : uint8_t
        {
            OC0A = 0x17, ///< OC0A on PB7.
            OC0B = 0x65, ///< OC0B on PG5.
            OC1A = 0x15, ///< OC1A on PB5.
            OC1B = 0x16, ///< OC1B on PB6.
            OC1C = 0x17, ///< OC1C on PB7.
            OC2A = 0x14, ///< OC2A on PB4.
            OC2B = 0x76, ///< OC2B on PH6.
            OC3A = 0x43, ///< OC3A on PE3.
            OC3B = 0x44, ///< OC3B on PE4.
            OC3C = 0x45, ///< OC3C on PE5.
            OC4A = 0x73, ///< OC4A on PH3.
            OC4B = 0x74, ///< OC4B on PH4.
            OC4C = 0x75, ///< OC4C on PH5.
            OC5A = 0xA3, ///< OC5A on PL3.
            OC5B = 0xA4, ///< OC5B on PL4.
            OC5C = 0xA5, ///< OC5C on PL5.
        };
        /** @brief Output counts. */
        enum : uint8_t
        {
            channel_count = 16,       ///< channel count.
            distinct_pin_count = 15,  ///< distinct pin count.
            timer0_channel_count = 2, ///< timer0 channel count.
            timer1_channel_count = 3, ///< timer1 channel count.
            timer2_channel_count = 2, ///< timer2 channel count.
            timer3_channel_count = 3, ///< timer3 channel count.
            timer4_channel_count = 3, ///< timer4 channel count.
            timer5_channel_count = 3, ///< timer5 channel count.
        };
    }
}

#endif
