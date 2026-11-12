/**
 * @file USART.h
 * @brief USART frame modes, channel numbers and pin multiplexing.
 */

#ifndef ATMEGA2560_DEFINITIONS_USART_H
#define ATMEGA2560_DEFINITIONS_USART_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief USART definitions. */
    namespace usart
    {
        /** @brief Hardware USART instances. */
        enum class Id : uint8_t
        {
            USART0 = 0, ///< USART channel 0.
            USART1 = 1, ///< USART channel 1.
            USART2 = 2, ///< USART channel 2.
            USART3 = 3, ///< USART channel 3.
        };
        /** @brief USART mode encodings. */
        enum class Mode : uint8_t
        {
            Asynchronous = 0, ///< Asynchronous serial.
            Synchronous = 1,  ///< Synchronous serial.
            MasterSPI = 3,    ///< Master SPI via USART.
        };
        /** @brief Frame widths. */
        enum class DataBits : uint8_t
        {
            Five = 5,  ///< 5 data bits.
            Six = 6,   ///< 6 data bits.
            Seven = 7, ///< 7 data bits.
            Eight = 8, ///< 8 data bits.
            Nine = 9,  ///< 9 data bits.
        };
        /** @brief Parity selections. */
        enum class Parity : uint8_t
        {
            Disabled = 0, ///< No parity.
            Even = 2,     ///< Even parity.
            Odd = 3,      ///< Odd parity.
        };
        /** @brief Stop-bit counts. */
        enum class StopBits : uint8_t
        {
            One = 1, ///< One stop bit.
            Two = 2, ///< Two stop bits.
        };
        /** @brief USART0 logical pins. */
        namespace usart0
        {
            enum : uint8_t
            {
                module_number = 0,    ///< Controller index.
                rx_pin_value = 0x40,  ///< RXD0 logical pin.
                tx_pin_value = 0x41,  ///< TXD0 logical pin.
                xck_pin_value = 0x42, ///< XCK0 logical pin.
            };
        }

        /** @brief USART1 logical pins. */
        namespace usart1
        {
            enum : uint8_t
            {
                module_number = 1,    ///< Controller index.
                rx_pin_value = 0x32,  ///< RXD1 logical pin.
                tx_pin_value = 0x33,  ///< TXD1 logical pin.
                xck_pin_value = 0x35, ///< XCK1 logical pin.
            };
        }

        /** @brief USART2 logical pins. */
        namespace usart2
        {
            enum : uint8_t
            {
                module_number = 2,    ///< Controller index.
                rx_pin_value = 0x70,  ///< RXD2 logical pin.
                tx_pin_value = 0x71,  ///< TXD2 logical pin.
                xck_pin_value = 0x72, ///< XCK2 logical pin.
            };
        }

        /** @brief USART3 logical pins. */
        namespace usart3
        {
            enum : uint8_t
            {
                module_number = 3,    ///< Controller index.
                rx_pin_value = 0x80,  ///< RXD3 logical pin.
                tx_pin_value = 0x81,  ///< TXD3 logical pin.
                xck_pin_value = 0x82, ///< XCK3 logical pin.
            };
        }

        /** @brief USART characteristics. */
        enum : uint8_t
        {
            module_count = 4,                    ///< Number of USART controllers.
            baud_register_bits = 12,             ///< Baud divisor width.
            async_oversampling = 16,             ///< Normal asynchronous oversampling.
            async_double_speed_oversampling = 8, ///< Double-speed oversampling.
        };
        /** @brief Pins definitions. */
        namespace pins
        {
            /** @brief USART pin mapping. */
            enum : uint8_t
            {
                usart0_rxd = 0x40, ///< USART0 RXD logical pin.
                usart0_txd = 0x41, ///< USART0 TXD logical pin.
                usart0_xck = 0x42, ///< USART0 XCK logical pin.
                usart1_rxd = 0x32, ///< USART1 RXD logical pin.
                usart1_txd = 0x33, ///< USART1 TXD logical pin.
                usart1_xck = 0x35, ///< USART1 XCK logical pin.
                usart2_rxd = 0x70, ///< USART2 RXD logical pin.
                usart2_txd = 0x71, ///< USART2 TXD logical pin.
                usart2_xck = 0x72, ///< USART2 XCK logical pin.
                usart3_rxd = 0x80, ///< USART3 RXD logical pin.
                usart3_txd = 0x81, ///< USART3 TXD logical pin.
                usart3_xck = 0x82, ///< USART3 XCK logical pin.
            };
        }
    }
}

#endif
