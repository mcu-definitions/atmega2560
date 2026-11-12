/**
 * @file Timer.h
 * @brief Timer/counter architecture and modes.
 */

#ifndef ATMEGA2560_DEFINITIONS_TIMER_H
#define ATMEGA2560_DEFINITIONS_TIMER_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Timer definitions. */
    namespace timer
    {
        /** @brief Six hardware timer/counters. */
        enum class Id : uint8_t
        {
            Timer0 = 0, ///< Hardware timer 0.
            Timer1 = 1, ///< Hardware timer 1.
            Timer2 = 2, ///< Hardware timer 2.
            Timer3 = 3, ///< Hardware timer 3.
            Timer4 = 4, ///< Hardware timer 4.
            Timer5 = 5, ///< Hardware timer 5.
        };
        /** @brief Timer 0/1/3/4/5 clock selection. */
        enum class Timer01ClockSelection : uint8_t
        {
            Stopped = 0,             ///< Timer stopped.
            NoPrescaling = 1,        ///< System clock.
            Divide8 = 2,             ///< Prescaler 8.
            Divide64 = 3,            ///< Prescaler 64.
            Divide256 = 4,           ///< Prescaler 256.
            Divide1024 = 5,          ///< Prescaler 1024.
            ExternalFallingEdge = 6, ///< External falling edge.
            ExternalRisingEdge = 7,  ///< External rising edge.
        };
        /** @brief Timer 2 clock selection. */
        enum class Timer2ClockSelection : uint8_t
        {
            Stopped = 0,      ///< Timer stopped.
            NoPrescaling = 1, ///< Clock direct.
            Divide8 = 2,      ///< Divide by 8.
            Divide32 = 3,     ///< Divide by 32.
            Divide64 = 4,     ///< Divide by 64.
            Divide128 = 5,    ///< Divide by 128.
            Divide256 = 6,    ///< Divide by 256.
            Divide1024 = 7,   ///< Divide by 1024.
        };
        /** @brief Prescaler values for synchronous timers. */
        enum class Timer01Prescaler : uint16_t
        {
            Divide1 = 1,       ///< Clock division by 1.
            Divide8 = 8,       ///< Clock division by 8.
            Divide64 = 64,     ///< Clock division by 64.
            Divide256 = 256,   ///< Clock division by 256.
            Divide1024 = 1024, ///< Clock division by 1024.
        };
        /** @brief Timer2 prescaler values. */
        enum class Timer2Prescaler : uint16_t
        {
            Divide1 = 1,       ///< Clock division by 1.
            Divide8 = 8,       ///< Clock division by 8.
            Divide32 = 32,     ///< Clock division by 32.
            Divide64 = 64,     ///< Clock division by 64.
            Divide128 = 128,   ///< Clock division by 128.
            Divide256 = 256,   ///< Clock division by 256.
            Divide1024 = 1024, ///< Clock division by 1024.
        };
        /** @brief 8-bit timer waveform encodings. */
        enum class Timer8WaveformMode : uint8_t
        {
            Normal = 0,                  ///< Counter mode.
            PhaseCorrectPWM = 1,         ///< Phase-correct PWM.
            ClearOnCompare = 2,          ///< CTC.
            FastPWM = 3,                 ///< Fast PWM.
            PhaseCorrectPWMTopOCRnA = 5, ///< Phase-correct PWM with OCRnA TOP.
            FastPWMTopOCRnA = 7,         ///< Fast PWM with OCRnA TOP.
        };
        /** @brief 16-bit waveform generator encodings. */
        enum class Timer16WaveformMode : uint8_t
        {
            Normal = 0,                     ///< Normal.
            PhaseCorrectPWM8 = 1,           ///< 8-bit phase correct.
            PhaseCorrectPWM9 = 2,           ///< 9-bit phase correct.
            PhaseCorrectPWM10 = 3,          ///< 10-bit phase correct.
            CTCOCRnA = 4,                   ///< Clear on OCRnA.
            FastPWM8 = 5,                   ///< 8-bit fast PWM.
            FastPWM9 = 6,                   ///< 9-bit fast PWM.
            FastPWM10 = 7,                  ///< 10-bit fast PWM.
            PhaseFrequencyCorrectICRn = 8,  ///< Phase-frequency correct with ICR TOP.
            PhaseFrequencyCorrectOCRnA = 9, ///< Phase-frequency correct with OCRnA TOP.
            PhaseCorrectICRn = 10,          ///< Phase correct ICR TOP.
            PhaseCorrectOCRnA = 11,         ///< Phase correct OCRnA TOP.
            CTCICRn = 12,                   ///< CTC with ICR TOP.
            FastPWMICRn = 14,               ///< Fast PWM ICR TOP.
            FastPWMOCRnA = 15,              ///< Fast PWM OCRnA TOP.
        };
        /** @brief Timer0 waveform modes. */
        using Timer0WaveformMode = Timer8WaveformMode;
        /** @brief Timer2 waveform modes. */
        using Timer2WaveformMode = Timer8WaveformMode;
        /** @brief Timer1, 3, 4 and 5 waveform modes. */
        using Timer1WaveformMode = Timer16WaveformMode;
        using Timer3WaveformMode = Timer16WaveformMode;
        using Timer4WaveformMode = Timer16WaveformMode;
        using Timer5WaveformMode = Timer16WaveformMode;

        /** @brief Timer resources. */
        enum : uint8_t
        {
            timer_count = 6,
            timer0_counter_bits = 8,
            timer1_counter_bits = 16,
            timer2_counter_bits = 8,
            timer3_counter_bits = 16,
            timer4_counter_bits = 16,
            timer5_counter_bits = 16,
            timer0_compare_channel_count = 2,
            timer1_compare_channel_count = 3,
            timer2_compare_channel_count = 2,
            timer3_compare_channel_count = 3,
            timer4_compare_channel_count = 3,
            timer5_compare_channel_count = 3,        ///< timer count.
            timer8_count = 2,                        ///< timer8 count.
            timer16_count = 4,                       ///< timer16 count.
            output_compare_8bit_channel_count = 4,   ///< output compare 8bit channel count.
            output_compare_16bit_channel_count = 12, ///< output compare 16bit channel count.
        };
        /** @brief Timer0 definitions. */
        namespace timer0
        {
            /** @brief Timer0 properties. */
            enum : uint8_t
            {
                counter_bits = 8,          ///< counter bits.
                compare_channel_count = 2, ///< compare channel count.
                has_input_capture = 0,     ///< has input capture.
            };
        }
        /** @brief Timer1 definitions. */
        namespace timer1
        {
            /** @brief Timer1 properties. */
            enum : uint8_t
            {
                counter_bits = 16,         ///< counter bits.
                compare_channel_count = 3, ///< compare channel count.
                has_input_capture = 1,     ///< has input capture.
            };
        }
        /** @brief Timer2 definitions. */
        namespace timer2
        {
            /** @brief Timer2 properties. */
            enum : uint8_t
            {
                counter_bits = 8,          ///< counter bits.
                compare_channel_count = 2, ///< compare channel count.
                has_input_capture = 0,     ///< has input capture.
            };
        }
        /** @brief Timer3 definitions. */
        namespace timer3
        {
            /** @brief Timer3 properties. */
            enum : uint8_t
            {
                counter_bits = 16,         ///< counter bits.
                compare_channel_count = 3, ///< compare channel count.
                has_input_capture = 1,     ///< has input capture.
            };
        }
        /** @brief Timer4 definitions. */
        namespace timer4
        {
            /** @brief Timer4 properties. */
            enum : uint8_t
            {
                counter_bits = 16,         ///< counter bits.
                compare_channel_count = 3, ///< compare channel count.
                has_input_capture = 1,     ///< has input capture.
            };
        }
        /** @brief Timer5 definitions. */
        namespace timer5
        {
            /** @brief Timer5 properties. */
            enum : uint8_t
            {
                counter_bits = 16,         ///< counter bits.
                compare_channel_count = 3, ///< compare channel count.
                has_input_capture = 1,     ///< has input capture.
            };
        }
    }
}

#endif
