/**
 * @file Interrupts.h
 * @brief Interrupt vector sources, slot numbers and word addresses.
 */

#ifndef ATMEGA2560_DEFINITIONS_INTERRUPTS_H
#define ATMEGA2560_DEFINITIONS_INTERRUPTS_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Interrupts definitions. */
    namespace interrupts
    {
        /** @brief 1-based vector slots, including Reset. */
        enum class Vector : uint8_t
        {
            Reset = 1,                    ///< Reset vector slot.
            INT0 = 2,                     ///< INT0 vector slot.
            INT1 = 3,                     ///< INT1 vector slot.
            INT2 = 4,                     ///< INT2 vector slot.
            INT3 = 5,                     ///< INT3 vector slot.
            INT4 = 6,                     ///< INT4 vector slot.
            INT5 = 7,                     ///< INT5 vector slot.
            INT6 = 8,                     ///< INT6 vector slot.
            INT7 = 9,                     ///< INT7 vector slot.
            PCINT0 = 10,                  ///< PCINT0 vector slot.
            PCINT1 = 11,                  ///< PCINT1 vector slot.
            PCINT2 = 12,                  ///< PCINT2 vector slot.
            Watchdog = 13,                ///< Watchdog vector slot.
            Timer2CompareA = 14,          ///< Timer2CompareA vector slot.
            Timer2CompareB = 15,          ///< Timer2CompareB vector slot.
            Timer2Overflow = 16,          ///< Timer2Overflow vector slot.
            Timer1Capture = 17,           ///< Timer1Capture vector slot.
            Timer1CompareA = 18,          ///< Timer1CompareA vector slot.
            Timer1CompareB = 19,          ///< Timer1CompareB vector slot.
            Timer1CompareC = 20,          ///< Timer1CompareC vector slot.
            Timer1Overflow = 21,          ///< Timer1Overflow vector slot.
            Timer0CompareA = 22,          ///< Timer0CompareA vector slot.
            Timer0CompareB = 23,          ///< Timer0CompareB vector slot.
            Timer0Overflow = 24,          ///< Timer0Overflow vector slot.
            SPITransferComplete = 25,     ///< SPITransferComplete vector slot.
            USART0ReceiveComplete = 26,   ///< USART0ReceiveComplete vector slot.
            USART0DataRegisterEmpty = 27, ///< USART0DataRegisterEmpty vector slot.
            USART0TransmitComplete = 28,  ///< USART0TransmitComplete vector slot.
            AnalogComparator = 29,        ///< AnalogComparator vector slot.
            ADCConversionComplete = 30,   ///< ADCConversionComplete vector slot.
            EEPROMReady = 31,             ///< EEPROMReady vector slot.
            Timer3Capture = 32,           ///< Timer3Capture vector slot.
            Timer3CompareA = 33,          ///< Timer3CompareA vector slot.
            Timer3CompareB = 34,          ///< Timer3CompareB vector slot.
            Timer3CompareC = 35,          ///< Timer3CompareC vector slot.
            Timer3Overflow = 36,          ///< Timer3Overflow vector slot.
            USART1ReceiveComplete = 37,   ///< USART1ReceiveComplete vector slot.
            USART1DataRegisterEmpty = 38, ///< USART1DataRegisterEmpty vector slot.
            USART1TransmitComplete = 39,  ///< USART1TransmitComplete vector slot.
            TWI = 40,                     ///< TWI vector slot.
            SPMReady = 41,                ///< SPMReady vector slot.
            Timer4Capture = 42,           ///< Timer4Capture vector slot.
            Timer4CompareA = 43,          ///< Timer4CompareA vector slot.
            Timer4CompareB = 44,          ///< Timer4CompareB vector slot.
            Timer4CompareC = 45,          ///< Timer4CompareC vector slot.
            Timer4Overflow = 46,          ///< Timer4Overflow vector slot.
            Timer5Capture = 47,           ///< Timer5Capture vector slot.
            Timer5CompareA = 48,          ///< Timer5CompareA vector slot.
            Timer5CompareB = 49,          ///< Timer5CompareB vector slot.
            Timer5CompareC = 50,          ///< Timer5CompareC vector slot.
            Timer5Overflow = 51,          ///< Timer5Overflow vector slot.
            USART2ReceiveComplete = 52,   ///< USART2ReceiveComplete vector slot.
            USART2DataRegisterEmpty = 53, ///< USART2DataRegisterEmpty vector slot.
            USART2TransmitComplete = 54,  ///< USART2TransmitComplete vector slot.
            USART3ReceiveComplete = 55,   ///< USART3ReceiveComplete vector slot.
            USART3DataRegisterEmpty = 56, ///< USART3DataRegisterEmpty vector slot.
            USART3TransmitComplete = 57,  ///< USART3TransmitComplete vector slot.
        };
        /** @brief Program memory word addresses. */
        enum class WordAddress : uint16_t
        {
            Reset = 0x0000,                   ///< Reset vector word address.
            INT0 = 0x0002,                    ///< INT0 vector word address.
            INT1 = 0x0004,                    ///< INT1 vector word address.
            INT2 = 0x0006,                    ///< INT2 vector word address.
            INT3 = 0x0008,                    ///< INT3 vector word address.
            INT4 = 0x000A,                    ///< INT4 vector word address.
            INT5 = 0x000C,                    ///< INT5 vector word address.
            INT6 = 0x000E,                    ///< INT6 vector word address.
            INT7 = 0x0010,                    ///< INT7 vector word address.
            PCINT0 = 0x0012,                  ///< PCINT0 vector word address.
            PCINT1 = 0x0014,                  ///< PCINT1 vector word address.
            PCINT2 = 0x0016,                  ///< PCINT2 vector word address.
            Watchdog = 0x0018,                ///< Watchdog vector word address.
            Timer2CompareA = 0x001A,          ///< Timer2CompareA vector word address.
            Timer2CompareB = 0x001C,          ///< Timer2CompareB vector word address.
            Timer2Overflow = 0x001E,          ///< Timer2Overflow vector word address.
            Timer1Capture = 0x0020,           ///< Timer1Capture vector word address.
            Timer1CompareA = 0x0022,          ///< Timer1CompareA vector word address.
            Timer1CompareB = 0x0024,          ///< Timer1CompareB vector word address.
            Timer1CompareC = 0x0026,          ///< Timer1CompareC vector word address.
            Timer1Overflow = 0x0028,          ///< Timer1Overflow vector word address.
            Timer0CompareA = 0x002A,          ///< Timer0CompareA vector word address.
            Timer0CompareB = 0x002C,          ///< Timer0CompareB vector word address.
            Timer0Overflow = 0x002E,          ///< Timer0Overflow vector word address.
            SPITransferComplete = 0x0030,     ///< SPITransferComplete vector word address.
            USART0ReceiveComplete = 0x0032,   ///< USART0ReceiveComplete vector word address.
            USART0DataRegisterEmpty = 0x0034, ///< USART0DataRegisterEmpty vector word address.
            USART0TransmitComplete = 0x0036,  ///< USART0TransmitComplete vector word address.
            AnalogComparator = 0x0038,        ///< AnalogComparator vector word address.
            ADCConversionComplete = 0x003A,   ///< ADCConversionComplete vector word address.
            EEPROMReady = 0x003C,             ///< EEPROMReady vector word address.
            Timer3Capture = 0x003E,           ///< Timer3Capture vector word address.
            Timer3CompareA = 0x0040,          ///< Timer3CompareA vector word address.
            Timer3CompareB = 0x0042,          ///< Timer3CompareB vector word address.
            Timer3CompareC = 0x0044,          ///< Timer3CompareC vector word address.
            Timer3Overflow = 0x0046,          ///< Timer3Overflow vector word address.
            USART1ReceiveComplete = 0x0048,   ///< USART1ReceiveComplete vector word address.
            USART1DataRegisterEmpty = 0x004A, ///< USART1DataRegisterEmpty vector word address.
            USART1TransmitComplete = 0x004C,  ///< USART1TransmitComplete vector word address.
            TWI = 0x004E,                     ///< TWI vector word address.
            SPMReady = 0x0050,                ///< SPMReady vector word address.
            Timer4Capture = 0x0052,           ///< Timer4Capture vector word address.
            Timer4CompareA = 0x0054,          ///< Timer4CompareA vector word address.
            Timer4CompareB = 0x0056,          ///< Timer4CompareB vector word address.
            Timer4CompareC = 0x0058,          ///< Timer4CompareC vector word address.
            Timer4Overflow = 0x005A,          ///< Timer4Overflow vector word address.
            Timer5Capture = 0x005C,           ///< Timer5Capture vector word address.
            Timer5CompareA = 0x005E,          ///< Timer5CompareA vector word address.
            Timer5CompareB = 0x0060,          ///< Timer5CompareB vector word address.
            Timer5CompareC = 0x0062,          ///< Timer5CompareC vector word address.
            Timer5Overflow = 0x0064,          ///< Timer5Overflow vector word address.
            USART2ReceiveComplete = 0x0066,   ///< USART2ReceiveComplete vector word address.
            USART2DataRegisterEmpty = 0x0068, ///< USART2DataRegisterEmpty vector word address.
            USART2TransmitComplete = 0x006A,  ///< USART2TransmitComplete vector word address.
            USART3ReceiveComplete = 0x006C,   ///< USART3ReceiveComplete vector word address.
            USART3DataRegisterEmpty = 0x006E, ///< USART3DataRegisterEmpty vector word address.
            USART3TransmitComplete = 0x0070,  ///< USART3TransmitComplete vector word address.
        };
        /** @brief Interrupt sources, excluding Reset. */
        enum class Source : uint8_t
        {
            INT0 = 0,                     ///< INT0 source index.
            INT1 = 1,                     ///< INT1 source index.
            INT2 = 2,                     ///< INT2 source index.
            INT3 = 3,                     ///< INT3 source index.
            INT4 = 4,                     ///< INT4 source index.
            INT5 = 5,                     ///< INT5 source index.
            INT6 = 6,                     ///< INT6 source index.
            INT7 = 7,                     ///< INT7 source index.
            PCINT0 = 8,                   ///< PCINT0 source index.
            PCINT1 = 9,                   ///< PCINT1 source index.
            PCINT2 = 10,                  ///< PCINT2 source index.
            Watchdog = 11,                ///< Watchdog source index.
            Timer2CompareA = 12,          ///< Timer2CompareA source index.
            Timer2CompareB = 13,          ///< Timer2CompareB source index.
            Timer2Overflow = 14,          ///< Timer2Overflow source index.
            Timer1Capture = 15,           ///< Timer1Capture source index.
            Timer1CompareA = 16,          ///< Timer1CompareA source index.
            Timer1CompareB = 17,          ///< Timer1CompareB source index.
            Timer1CompareC = 18,          ///< Timer1CompareC source index.
            Timer1Overflow = 19,          ///< Timer1Overflow source index.
            Timer0CompareA = 20,          ///< Timer0CompareA source index.
            Timer0CompareB = 21,          ///< Timer0CompareB source index.
            Timer0Overflow = 22,          ///< Timer0Overflow source index.
            SPITransferComplete = 23,     ///< SPITransferComplete source index.
            USART0ReceiveComplete = 24,   ///< USART0ReceiveComplete source index.
            USART0DataRegisterEmpty = 25, ///< USART0DataRegisterEmpty source index.
            USART0TransmitComplete = 26,  ///< USART0TransmitComplete source index.
            AnalogComparator = 27,        ///< AnalogComparator source index.
            ADCConversionComplete = 28,   ///< ADCConversionComplete source index.
            EEPROMReady = 29,             ///< EEPROMReady source index.
            Timer3Capture = 30,           ///< Timer3Capture source index.
            Timer3CompareA = 31,          ///< Timer3CompareA source index.
            Timer3CompareB = 32,          ///< Timer3CompareB source index.
            Timer3CompareC = 33,          ///< Timer3CompareC source index.
            Timer3Overflow = 34,          ///< Timer3Overflow source index.
            USART1ReceiveComplete = 35,   ///< USART1ReceiveComplete source index.
            USART1DataRegisterEmpty = 36, ///< USART1DataRegisterEmpty source index.
            USART1TransmitComplete = 37,  ///< USART1TransmitComplete source index.
            TWI = 38,                     ///< TWI source index.
            SPMReady = 39,                ///< SPMReady source index.
            Timer4Capture = 40,           ///< Timer4Capture source index.
            Timer4CompareA = 41,          ///< Timer4CompareA source index.
            Timer4CompareB = 42,          ///< Timer4CompareB source index.
            Timer4CompareC = 43,          ///< Timer4CompareC source index.
            Timer4Overflow = 44,          ///< Timer4Overflow source index.
            Timer5Capture = 45,           ///< Timer5Capture source index.
            Timer5CompareA = 46,          ///< Timer5CompareA source index.
            Timer5CompareB = 47,          ///< Timer5CompareB source index.
            Timer5CompareC = 48,          ///< Timer5CompareC source index.
            Timer5Overflow = 49,          ///< Timer5Overflow source index.
            USART2ReceiveComplete = 50,   ///< USART2ReceiveComplete source index.
            USART2DataRegisterEmpty = 51, ///< USART2DataRegisterEmpty source index.
            USART2TransmitComplete = 52,  ///< USART2TransmitComplete source index.
            USART3ReceiveComplete = 53,   ///< USART3ReceiveComplete source index.
            USART3DataRegisterEmpty = 54, ///< USART3DataRegisterEmpty source index.
            USART3TransmitComplete = 55,  ///< USART3TransmitComplete source index.
        };
    }
}

#endif
