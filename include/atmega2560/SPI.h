/**
 * @file SPI.h
 * @brief SPI interface and pin definitions.
 */

#ifndef ATMEGA2560_DEFINITIONS_SPI_H
#define ATMEGA2560_DEFINITIONS_SPI_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Spi definitions. */
    namespace spi
    {
        /** @brief Operating modes. */
        enum class Mode : uint8_t
        {
            Master = 0, ///< SPI master.
            Slave = 1,  ///< SPI slave.
        };
        /** @brief Clock modes. */
        enum class DataMode : uint8_t
        {
            Mode0 = 0, ///< CPOL0 CPHA0.
            Mode1 = 1, ///< CPOL0 CPHA1.
            Mode2 = 2, ///< CPOL1 CPHA0.
            Mode3 = 3, ///< CPOL1 CPHA1.
        };
        /** @brief SPI signal and width. */
        enum : uint8_t
        {
            module_count = 1,       ///< module count.
            ss_pin_value = 0x10,    ///< ss pin value.
            sck_pin_value = 0x11,   ///< sck pin value.
            mosi_pin_value = 0x12,  ///< mosi pin value.
            miso_pin_value = 0x13,  ///< miso pin value.
            data_register_bits = 8, ///< data register bits.
        };
    }
}

#endif
