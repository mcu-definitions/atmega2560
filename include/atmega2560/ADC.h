/**
 * @file ADC.h
 * @brief ADC channels, multiplexer selections, references and modes.
 */

#ifndef ATMEGA2560_DEFINITIONS_ADC_H
#define ATMEGA2560_DEFINITIONS_ADC_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief ADC definitions. */
    namespace adc
    {
        /** @brief 16 external ADC channels. */
        enum class Channel : uint8_t
        {
            ADC0 = 0,   ///< ADC channel 0 on PF0.
            ADC1 = 1,   ///< ADC channel 1 on PF1.
            ADC2 = 2,   ///< ADC channel 2 on PF2.
            ADC3 = 3,   ///< ADC channel 3 on PF3.
            ADC4 = 4,   ///< ADC channel 4 on PF4.
            ADC5 = 5,   ///< ADC channel 5 on PF5.
            ADC6 = 6,   ///< ADC channel 6 on PF6.
            ADC7 = 7,   ///< ADC channel 7 on PF7.
            ADC8 = 8,   ///< ADC channel 8 on PK0.
            ADC9 = 9,   ///< ADC channel 9 on PK1.
            ADC10 = 10, ///< ADC channel 10 on PK2.
            ADC11 = 11, ///< ADC channel 11 on PK3.
            ADC12 = 12, ///< ADC channel 12 on PK4.
            ADC13 = 13, ///< ADC channel 13 on PK5.
            ADC14 = 14, ///< ADC channel 14 on PK6.
            ADC15 = 15, ///< ADC channel 15 on PK7.
        };

        /** @brief Complete valid MUX5:0 selections from datasheet Table 26-4. */
        enum class MuxSelection : uint8_t
        {
            SingleEndedADC0 = 0x00, ///< Single-ended ADC0.
            SingleEndedADC1 = 0x01, ///< Single-ended ADC1.
            SingleEndedADC2 = 0x02, ///< Single-ended ADC2.
            SingleEndedADC3 = 0x03, ///< Single-ended ADC3.
            SingleEndedADC4 = 0x04, ///< Single-ended ADC4.
            SingleEndedADC5 = 0x05, ///< Single-ended ADC5.
            SingleEndedADC6 = 0x06, ///< Single-ended ADC6.
            SingleEndedADC7 = 0x07, ///< Single-ended ADC7.

            DifferentialADC0_ADC0_Gain10 = 0x08,  ///< ADC0 positive, ADC0 negative, gain 10x.
            DifferentialADC1_ADC0_Gain10 = 0x09,  ///< ADC1 positive, ADC0 negative, gain 10x.
            DifferentialADC0_ADC0_Gain200 = 0x0A, ///< ADC0 positive, ADC0 negative, gain 200x.
            DifferentialADC1_ADC0_Gain200 = 0x0B, ///< ADC1 positive, ADC0 negative, gain 200x.
            DifferentialADC2_ADC2_Gain10 = 0x0C,  ///< ADC2 positive, ADC2 negative, gain 10x.
            DifferentialADC3_ADC2_Gain10 = 0x0D,  ///< ADC3 positive, ADC2 negative, gain 10x.
            DifferentialADC2_ADC2_Gain200 = 0x0E, ///< ADC2 positive, ADC2 negative, gain 200x.
            DifferentialADC3_ADC2_Gain200 = 0x0F, ///< ADC3 positive, ADC2 negative, gain 200x.

            DifferentialADC0_ADC1_Gain1 = 0x10, ///< ADC0 positive, ADC1 negative, gain 1x.
            DifferentialADC1_ADC1_Gain1 = 0x11, ///< ADC1 positive, ADC1 negative, gain 1x.
            DifferentialADC2_ADC1_Gain1 = 0x12, ///< ADC2 positive, ADC1 negative, gain 1x.
            DifferentialADC3_ADC1_Gain1 = 0x13, ///< ADC3 positive, ADC1 negative, gain 1x.
            DifferentialADC4_ADC1_Gain1 = 0x14, ///< ADC4 positive, ADC1 negative, gain 1x.
            DifferentialADC5_ADC1_Gain1 = 0x15, ///< ADC5 positive, ADC1 negative, gain 1x.
            DifferentialADC6_ADC1_Gain1 = 0x16, ///< ADC6 positive, ADC1 negative, gain 1x.
            DifferentialADC7_ADC1_Gain1 = 0x17, ///< ADC7 positive, ADC1 negative, gain 1x.
            DifferentialADC0_ADC2_Gain1 = 0x18, ///< ADC0 positive, ADC2 negative, gain 1x.
            DifferentialADC1_ADC2_Gain1 = 0x19, ///< ADC1 positive, ADC2 negative, gain 1x.
            DifferentialADC2_ADC2_Gain1 = 0x1A, ///< ADC2 positive, ADC2 negative, gain 1x.
            DifferentialADC3_ADC2_Gain1 = 0x1B, ///< ADC3 positive, ADC2 negative, gain 1x.
            DifferentialADC4_ADC2_Gain1 = 0x1C, ///< ADC4 positive, ADC2 negative, gain 1x.
            DifferentialADC5_ADC2_Gain1 = 0x1D, ///< ADC5 positive, ADC2 negative, gain 1x.
            InternalBandgap1V1 = 0x1E,          ///< Internal 1.1 V bandgap channel.
            Ground = 0x1F,                      ///< Ground channel.

            SingleEndedADC8 = 0x20,  ///< Single-ended ADC8.
            SingleEndedADC9 = 0x21,  ///< Single-ended ADC9.
            SingleEndedADC10 = 0x22, ///< Single-ended ADC10.
            SingleEndedADC11 = 0x23, ///< Single-ended ADC11.
            SingleEndedADC12 = 0x24, ///< Single-ended ADC12.
            SingleEndedADC13 = 0x25, ///< Single-ended ADC13.
            SingleEndedADC14 = 0x26, ///< Single-ended ADC14.
            SingleEndedADC15 = 0x27, ///< Single-ended ADC15.

            DifferentialADC8_ADC8_Gain10 = 0x28,    ///< ADC8 positive, ADC8 negative, gain 10x.
            DifferentialADC9_ADC8_Gain10 = 0x29,    ///< ADC9 positive, ADC8 negative, gain 10x.
            DifferentialADC8_ADC8_Gain200 = 0x2A,   ///< ADC8 positive, ADC8 negative, gain 200x.
            DifferentialADC9_ADC8_Gain200 = 0x2B,   ///< ADC9 positive, ADC8 negative, gain 200x.
            DifferentialADC10_ADC10_Gain10 = 0x2C,  ///< ADC10 positive, ADC10 negative, gain 10x.
            DifferentialADC11_ADC10_Gain10 = 0x2D,  ///< ADC11 positive, ADC10 negative, gain 10x.
            DifferentialADC10_ADC10_Gain200 = 0x2E, ///< ADC10 positive, ADC10 negative, gain 200x.
            DifferentialADC11_ADC10_Gain200 = 0x2F, ///< ADC11 positive, ADC10 negative, gain 200x.

            DifferentialADC8_ADC9_Gain1 = 0x30,   ///< ADC8 positive, ADC9 negative, gain 1x.
            DifferentialADC9_ADC9_Gain1 = 0x31,   ///< ADC9 positive, ADC9 negative, gain 1x.
            DifferentialADC10_ADC9_Gain1 = 0x32,  ///< ADC10 positive, ADC9 negative, gain 1x.
            DifferentialADC11_ADC9_Gain1 = 0x33,  ///< ADC11 positive, ADC9 negative, gain 1x.
            DifferentialADC12_ADC9_Gain1 = 0x34,  ///< ADC12 positive, ADC9 negative, gain 1x.
            DifferentialADC13_ADC9_Gain1 = 0x35,  ///< ADC13 positive, ADC9 negative, gain 1x.
            DifferentialADC14_ADC9_Gain1 = 0x36,  ///< ADC14 positive, ADC9 negative, gain 1x.
            DifferentialADC15_ADC9_Gain1 = 0x37,  ///< ADC15 positive, ADC9 negative, gain 1x.
            DifferentialADC8_ADC10_Gain1 = 0x38,  ///< ADC8 positive, ADC10 negative, gain 1x.
            DifferentialADC9_ADC10_Gain1 = 0x39,  ///< ADC9 positive, ADC10 negative, gain 1x.
            DifferentialADC10_ADC10_Gain1 = 0x3A, ///< ADC10 positive, ADC10 negative, gain 1x.
            DifferentialADC11_ADC10_Gain1 = 0x3B, ///< ADC11 positive, ADC10 negative, gain 1x.
            DifferentialADC12_ADC10_Gain1 = 0x3C, ///< ADC12 positive, ADC10 negative, gain 1x.
            DifferentialADC13_ADC10_Gain1 = 0x3D, ///< ADC13 positive, ADC10 negative, gain 1x.
        };

        /** @brief ADC logical GPIO pin. */
        enum class InputPin : uint8_t
        {
            ADC0 = 0x50,  ///< ADC0 logical input.
            ADC1 = 0x51,  ///< ADC1 logical input.
            ADC2 = 0x52,  ///< ADC2 logical input.
            ADC3 = 0x53,  ///< ADC3 logical input.
            ADC4 = 0x54,  ///< ADC4 logical input.
            ADC5 = 0x55,  ///< ADC5 logical input.
            ADC6 = 0x56,  ///< ADC6 logical input.
            ADC7 = 0x57,  ///< ADC7 logical input.
            ADC8 = 0x90,  ///< ADC8 logical input.
            ADC9 = 0x91,  ///< ADC9 logical input.
            ADC10 = 0x92, ///< ADC10 logical input.
            ADC11 = 0x93, ///< ADC11 logical input.
            ADC12 = 0x94, ///< ADC12 logical input.
            ADC13 = 0x95, ///< ADC13 logical input.
            ADC14 = 0x96, ///< ADC14 logical input.
            ADC15 = 0x97, ///< ADC15 logical input.
        };

        /** @brief Reference voltage selection encodings. */
        enum class Reference : uint8_t
        {
            AREF = 0,         ///< External reference.
            AVCC = 1,         ///< Analog supply.
            Internal1V1 = 2,  ///< Internal nominal 1.1 V.
            Internal2V56 = 3, ///< Internal nominal 2.56 V.
        };

        /** @brief ADC trigger sources. */
        enum class TriggerSource : uint8_t
        {
            FreeRunning = 0,         ///< Free running conversions.
            AnalogComparator = 1,    ///< Comparator event.
            ExternalInterrupt0 = 2,  ///< INT0 trigger.
            Timer0CompareMatchA = 3, ///< Timer 0 compare A.
            Timer0Overflow = 4,      ///< Timer 0 overflow.
            Timer1CompareMatchB = 5, ///< Timer 1 compare B.
            Timer1Overflow = 6,      ///< Timer 1 overflow.
            Timer1CaptureEvent = 7,  ///< Timer 1 capture.
        };

        /** @brief ADC prescalers. */
        enum class Prescaler : uint16_t
        {
            Divide2 = 2,     ///< ADC division 2.
            Divide4 = 4,     ///< ADC division 4.
            Divide8 = 8,     ///< ADC division 8.
            Divide16 = 16,   ///< ADC division 16.
            Divide32 = 32,   ///< ADC division 32.
            Divide64 = 64,   ///< ADC division 64.
            Divide128 = 128, ///< ADC division 128.
        };

        /** @brief ADC capabilities and limits. */
        enum : uint16_t
        {
            resolution_bits = 10,                            ///< ADC resolution.
            external_channel_count = 16,                     ///< External single-ended channels.
            mux_selection_bits = 6,                          ///< MUX5:0 field width.
            valid_mux_selection_count = 62,                  ///< Valid MUX5:0 encodings.
            has_differential_inputs = 1,                     ///< Differential input selections are available.
            has_gain_stage = 1,                              ///< Differential gain stage is available.
            differential_gain_10x = 10,                      ///< Differential gain setting 10x.
            differential_gain_200x = 200,                    ///< Differential gain setting 200x.
            differential_gain_accuracy_min_supply_mv = 2700, ///< Minimum supply for specified 10x/200x gain accuracy.
            differential_resolution_bits_at_gain_1x = 8,     ///< Expected resolution at 1x gain.
            differential_resolution_bits_at_gain_10x = 8,    ///< Expected resolution at 10x gain.
            differential_resolution_bits_at_gain_200x = 7,   ///< Expected resolution at 200x gain.
            has_internal_1v1_reference = 1,                  ///< Internal 1.1 V reference is available.
            has_internal_2v56_reference = 1,                 ///< Internal 2.56 V reference is available.
        };
    }
}

#endif
