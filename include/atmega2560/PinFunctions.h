/**
 * @file PinFunctions.h
 * @brief Pin capabilities and alternate function identifiers.
 */

#ifndef ATMEGA2560_DEFINITIONS_PIN_FUNCTIONS_H
#define ATMEGA2560_DEFINITIONS_PIN_FUNCTIONS_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Pin multiplexed functions definitions. */
    namespace pin
    {
        /** @brief Pin hardware capability flags. */
        enum : uint32_t
        {
            GPIO = 0x00001U,                    ///< GPIO capability.
            PinChangeInterrupt = 0x00002U,      ///< PinChangeInterrupt capability.
            ADC = 0x00004U,                     ///< ADC capability.
            PWM = 0x00008U,                     ///< PWM capability.
            ExternalInterrupt = 0x00010U,       ///< ExternalInterrupt capability.
            SPI = 0x00020U,                     ///< SPI capability.
            USART = 0x00040U,                   ///< USART capability.
            TWI = 0x00080U,                     ///< TWI capability.
            TimerExternalClock = 0x00100U,      ///< TimerExternalClock capability.
            InputCapture = 0x00200U,            ///< InputCapture capability.
            ClockOutput = 0x00400U,             ///< ClockOutput capability.
            Reset = 0x00800U,                   ///< Reset capability.
            AnalogComparator = 0x01000U,        ///< AnalogComparator capability.
            TimerOscillator = 0x02000U,         ///< TimerOscillator capability.
            MainClockOscillator = 0x04000U,     ///< MainClockOscillator capability.
            JTAG = 0x08000U,                    ///< JTAG capability.
            ExternalMemoryInterface = 0x10000U, ///< ExternalMemoryInterface capability.
            None = 0x00000U,                    ///< No capabilities.
        };
        /** @brief Named alternate functions. */
        enum class Function : uint8_t
        {
            GPIO = 0,     ///< GPIO alternate function.
            A10 = 1,      ///< A10 alternate function.
            A11 = 2,      ///< A11 alternate function.
            A12 = 3,      ///< A12 alternate function.
            A13 = 4,      ///< A13 alternate function.
            A14 = 5,      ///< A14 alternate function.
            A15 = 6,      ///< A15 alternate function.
            A8 = 7,       ///< A8 alternate function.
            A9 = 8,       ///< A9 alternate function.
            AD0 = 9,      ///< AD0 alternate function.
            AD1 = 10,     ///< AD1 alternate function.
            AD2 = 11,     ///< AD2 alternate function.
            AD3 = 12,     ///< AD3 alternate function.
            AD4 = 13,     ///< AD4 alternate function.
            AD5 = 14,     ///< AD5 alternate function.
            AD6 = 15,     ///< AD6 alternate function.
            AD7 = 16,     ///< AD7 alternate function.
            ADC0 = 17,    ///< ADC0 alternate function.
            ADC1 = 18,    ///< ADC1 alternate function.
            ADC10 = 19,   ///< ADC10 alternate function.
            ADC11 = 20,   ///< ADC11 alternate function.
            ADC12 = 21,   ///< ADC12 alternate function.
            ADC13 = 22,   ///< ADC13 alternate function.
            ADC14 = 23,   ///< ADC14 alternate function.
            ADC15 = 24,   ///< ADC15 alternate function.
            ADC2 = 25,    ///< ADC2 alternate function.
            ADC3 = 26,    ///< ADC3 alternate function.
            ADC4 = 27,    ///< ADC4 alternate function.
            ADC5 = 28,    ///< ADC5 alternate function.
            ADC6 = 29,    ///< ADC6 alternate function.
            ADC7 = 30,    ///< ADC7 alternate function.
            ADC8 = 31,    ///< ADC8 alternate function.
            ADC9 = 32,    ///< ADC9 alternate function.
            AIN0 = 33,    ///< AIN0 alternate function.
            AIN1 = 34,    ///< AIN1 alternate function.
            ALE = 35,     ///< ALE alternate function.
            CLKO = 36,    ///< CLKO alternate function.
            ICP1 = 37,    ///< ICP1 alternate function.
            ICP3 = 38,    ///< ICP3 alternate function.
            ICP4 = 39,    ///< ICP4 alternate function.
            ICP5 = 40,    ///< ICP5 alternate function.
            INT0 = 41,    ///< INT0 alternate function.
            INT1 = 42,    ///< INT1 alternate function.
            INT2 = 43,    ///< INT2 alternate function.
            INT3 = 44,    ///< INT3 alternate function.
            INT4 = 45,    ///< INT4 alternate function.
            INT5 = 46,    ///< INT5 alternate function.
            INT6 = 47,    ///< INT6 alternate function.
            INT7 = 48,    ///< INT7 alternate function.
            MISO = 49,    ///< MISO alternate function.
            MOSI = 50,    ///< MOSI alternate function.
            OC0A = 51,    ///< OC0A alternate function.
            OC0B = 52,    ///< OC0B alternate function.
            OC1A = 53,    ///< OC1A alternate function.
            OC1B = 54,    ///< OC1B alternate function.
            OC1C = 55,    ///< OC1C alternate function.
            OC2A = 56,    ///< OC2A alternate function.
            OC2B = 57,    ///< OC2B alternate function.
            OC3A = 58,    ///< OC3A alternate function.
            OC3B = 59,    ///< OC3B alternate function.
            OC3C = 60,    ///< OC3C alternate function.
            OC4A = 61,    ///< OC4A alternate function.
            OC4B = 62,    ///< OC4B alternate function.
            OC4C = 63,    ///< OC4C alternate function.
            OC5A = 64,    ///< OC5A alternate function.
            OC5B = 65,    ///< OC5B alternate function.
            OC5C = 66,    ///< OC5C alternate function.
            PCINT0 = 67,  ///< PCINT0 alternate function.
            PCINT1 = 68,  ///< PCINT1 alternate function.
            PCINT10 = 69, ///< PCINT10 alternate function.
            PCINT11 = 70, ///< PCINT11 alternate function.
            PCINT12 = 71, ///< PCINT12 alternate function.
            PCINT13 = 72, ///< PCINT13 alternate function.
            PCINT14 = 73, ///< PCINT14 alternate function.
            PCINT15 = 74, ///< PCINT15 alternate function.
            PCINT16 = 75, ///< PCINT16 alternate function.
            PCINT17 = 76, ///< PCINT17 alternate function.
            PCINT18 = 77, ///< PCINT18 alternate function.
            PCINT19 = 78, ///< PCINT19 alternate function.
            PCINT2 = 79,  ///< PCINT2 alternate function.
            PCINT20 = 80, ///< PCINT20 alternate function.
            PCINT21 = 81, ///< PCINT21 alternate function.
            PCINT22 = 82, ///< PCINT22 alternate function.
            PCINT23 = 83, ///< PCINT23 alternate function.
            PCINT3 = 84,  ///< PCINT3 alternate function.
            PCINT4 = 85,  ///< PCINT4 alternate function.
            PCINT5 = 86,  ///< PCINT5 alternate function.
            PCINT6 = 87,  ///< PCINT6 alternate function.
            PCINT7 = 88,  ///< PCINT7 alternate function.
            PCINT8 = 89,  ///< PCINT8 alternate function.
            PCINT9 = 90,  ///< PCINT9 alternate function.
            RD = 91,      ///< RD alternate function.
            RXD0 = 92,    ///< RXD0 alternate function.
            RXD1 = 93,    ///< RXD1 alternate function.
            RXD2 = 94,    ///< RXD2 alternate function.
            RXD3 = 95,    ///< RXD3 alternate function.
            SCK = 96,     ///< SCK alternate function.
            SCL = 97,     ///< SCL alternate function.
            SDA = 98,     ///< SDA alternate function.
            SS = 99,      ///< SS alternate function.
            T0 = 100,     ///< T0 alternate function.
            T1 = 101,     ///< T1 alternate function.
            T3 = 102,     ///< T3 alternate function.
            T4 = 103,     ///< T4 alternate function.
            T5 = 104,     ///< T5 alternate function.
            TCK = 105,    ///< TCK alternate function.
            TDI = 106,    ///< TDI alternate function.
            TDO = 107,    ///< TDO alternate function.
            TMS = 108,    ///< TMS alternate function.
            TOSC1 = 109,  ///< TOSC1 alternate function.
            TOSC2 = 110,  ///< TOSC2 alternate function.
            TXD0 = 111,   ///< TXD0 alternate function.
            TXD1 = 112,   ///< TXD1 alternate function.
            TXD2 = 113,   ///< TXD2 alternate function.
            TXD3 = 114,   ///< TXD3 alternate function.
            WR = 115,     ///< WR alternate function.
            XCK0 = 116,   ///< XCK0 alternate function.
            XCK1 = 117,   ///< XCK1 alternate function.
            XCK2 = 118,   ///< XCK2 alternate function.
            XCK3 = 119,   ///< XCK3 alternate function.
        };
        /** @brief Capabilities definitions. */
        namespace capabilities
        {
            /** @brief Capability masks by logical pin. */
            enum : uint32_t
            {
                PA0 = 0x10001U, ///< PA0 capability mask.
                PA1 = 0x10001U, ///< PA1 capability mask.
                PA2 = 0x10001U, ///< PA2 capability mask.
                PA3 = 0x10001U, ///< PA3 capability mask.
                PA4 = 0x10001U, ///< PA4 capability mask.
                PA5 = 0x10001U, ///< PA5 capability mask.
                PA6 = 0x10001U, ///< PA6 capability mask.
                PA7 = 0x10001U, ///< PA7 capability mask.
                PB0 = 0x00023U, ///< PB0 capability mask.
                PB1 = 0x00023U, ///< PB1 capability mask.
                PB2 = 0x00023U, ///< PB2 capability mask.
                PB3 = 0x00023U, ///< PB3 capability mask.
                PB4 = 0x0000BU, ///< PB4 capability mask.
                PB5 = 0x0000BU, ///< PB5 capability mask.
                PB6 = 0x0000BU, ///< PB6 capability mask.
                PB7 = 0x0000BU, ///< PB7 capability mask.
                PC0 = 0x10001U, ///< PC0 capability mask.
                PC1 = 0x10001U, ///< PC1 capability mask.
                PC2 = 0x10001U, ///< PC2 capability mask.
                PC3 = 0x10001U, ///< PC3 capability mask.
                PC4 = 0x10001U, ///< PC4 capability mask.
                PC5 = 0x10001U, ///< PC5 capability mask.
                PC6 = 0x10001U, ///< PC6 capability mask.
                PC7 = 0x10001U, ///< PC7 capability mask.
                PD0 = 0x00091U, ///< PD0 capability mask.
                PD1 = 0x00091U, ///< PD1 capability mask.
                PD2 = 0x00051U, ///< PD2 capability mask.
                PD3 = 0x00051U, ///< PD3 capability mask.
                PD4 = 0x00201U, ///< PD4 capability mask.
                PD5 = 0x00041U, ///< PD5 capability mask.
                PD6 = 0x00101U, ///< PD6 capability mask.
                PD7 = 0x00101U, ///< PD7 capability mask.
                PE0 = 0x00043U, ///< PE0 capability mask.
                PE1 = 0x00041U, ///< PE1 capability mask.
                PE2 = 0x01041U, ///< PE2 capability mask.
                PE3 = 0x01009U, ///< PE3 capability mask.
                PE4 = 0x00019U, ///< PE4 capability mask.
                PE5 = 0x00019U, ///< PE5 capability mask.
                PE6 = 0x00111U, ///< PE6 capability mask.
                PE7 = 0x00611U, ///< PE7 capability mask.
                PF0 = 0x00005U, ///< PF0 capability mask.
                PF1 = 0x00005U, ///< PF1 capability mask.
                PF2 = 0x00005U, ///< PF2 capability mask.
                PF3 = 0x00005U, ///< PF3 capability mask.
                PF4 = 0x08005U, ///< PF4 capability mask.
                PF5 = 0x08005U, ///< PF5 capability mask.
                PF6 = 0x08005U, ///< PF6 capability mask.
                PF7 = 0x08005U, ///< PF7 capability mask.
                PG0 = 0x10001U, ///< PG0 capability mask.
                PG1 = 0x10001U, ///< PG1 capability mask.
                PG2 = 0x10001U, ///< PG2 capability mask.
                PG3 = 0x02001U, ///< PG3 capability mask.
                PG4 = 0x02001U, ///< PG4 capability mask.
                PG5 = 0x00009U, ///< PG5 capability mask.
                PH0 = 0x00041U, ///< PH0 capability mask.
                PH1 = 0x00041U, ///< PH1 capability mask.
                PH2 = 0x00041U, ///< PH2 capability mask.
                PH3 = 0x00009U, ///< PH3 capability mask.
                PH4 = 0x00009U, ///< PH4 capability mask.
                PH5 = 0x00009U, ///< PH5 capability mask.
                PH6 = 0x00009U, ///< PH6 capability mask.
                PH7 = 0x00101U, ///< PH7 capability mask.
                PJ0 = 0x00043U, ///< PJ0 capability mask.
                PJ1 = 0x00043U, ///< PJ1 capability mask.
                PJ2 = 0x00043U, ///< PJ2 capability mask.
                PJ3 = 0x00003U, ///< PJ3 capability mask.
                PJ4 = 0x00003U, ///< PJ4 capability mask.
                PJ5 = 0x00003U, ///< PJ5 capability mask.
                PJ6 = 0x00003U, ///< PJ6 capability mask.
                PJ7 = 0x00001U, ///< PJ7 capability mask.
                PK0 = 0x00007U, ///< PK0 capability mask.
                PK1 = 0x00007U, ///< PK1 capability mask.
                PK2 = 0x00007U, ///< PK2 capability mask.
                PK3 = 0x00007U, ///< PK3 capability mask.
                PK4 = 0x00007U, ///< PK4 capability mask.
                PK5 = 0x00007U, ///< PK5 capability mask.
                PK6 = 0x00007U, ///< PK6 capability mask.
                PK7 = 0x00007U, ///< PK7 capability mask.
                PL0 = 0x00201U, ///< PL0 capability mask.
                PL1 = 0x00201U, ///< PL1 capability mask.
                PL2 = 0x00101U, ///< PL2 capability mask.
                PL3 = 0x00009U, ///< PL3 capability mask.
                PL4 = 0x00009U, ///< PL4 capability mask.
                PL5 = 0x00009U, ///< PL5 capability mask.
                PL6 = 0x00001U, ///< PL6 capability mask.
                PL7 = 0x00001U, ///< PL7 capability mask.
            };
        }
    }
}

#endif
