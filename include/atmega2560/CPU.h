/**
 * @file CPU.h
 * @brief Core register and status flags.
 */

#ifndef ATMEGA2560_DEFINITIONS_CPU_H
#define ATMEGA2560_DEFINITIONS_CPU_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Cpu definitions. */
    namespace cpu
    {
        /** @brief 32 general-purpose registers. */
        enum class Register : uint8_t
        {
            R0 = 0,   ///< CPU register R0.
            R1 = 1,   ///< CPU register R1.
            R2 = 2,   ///< CPU register R2.
            R3 = 3,   ///< CPU register R3.
            R4 = 4,   ///< CPU register R4.
            R5 = 5,   ///< CPU register R5.
            R6 = 6,   ///< CPU register R6.
            R7 = 7,   ///< CPU register R7.
            R8 = 8,   ///< CPU register R8.
            R9 = 9,   ///< CPU register R9.
            R10 = 10, ///< CPU register R10.
            R11 = 11, ///< CPU register R11.
            R12 = 12, ///< CPU register R12.
            R13 = 13, ///< CPU register R13.
            R14 = 14, ///< CPU register R14.
            R15 = 15, ///< CPU register R15.
            R16 = 16, ///< CPU register R16.
            R17 = 17, ///< CPU register R17.
            R18 = 18, ///< CPU register R18.
            R19 = 19, ///< CPU register R19.
            R20 = 20, ///< CPU register R20.
            R21 = 21, ///< CPU register R21.
            R22 = 22, ///< CPU register R22.
            R23 = 23, ///< CPU register R23.
            R24 = 24, ///< CPU register R24.
            R25 = 25, ///< CPU register R25.
            R26 = 26, ///< CPU register R26.
            R27 = 27, ///< CPU register R27.
            R28 = 28, ///< CPU register R28.
            R29 = 29, ///< CPU register R29.
            R30 = 30, ///< CPU register R30.
            R31 = 31, ///< CPU register R31.
        };
        /** @brief 16-bit pointer pairs. */
        enum class PointerRegister : uint8_t
        {
            X = 0, ///< R27:R26.
            Y = 1, ///< R29:R28.
            Z = 2, ///< R31:R30.
        };
        /** @brief SREG flag positions. */
        enum class StatusFlag : uint8_t
        {
            Carry = 0,           ///< Carry.
            Zero = 1,            ///< Zero.
            Negative = 2,        ///< Negative.
            Overflow = 3,        ///< Overflow.
            Sign = 4,            ///< Sign.
            HalfCarry = 5,       ///< HalfCarry.
            Transfer = 6,        ///< Transfer.
            GlobalInterrupt = 7, ///< GlobalInterrupt.
        };
        /** @brief Pointer register numbers. */
        enum : uint8_t
        {
            x_low_register = 26,  ///< x low register.
            x_high_register = 27, ///< x high register.
            y_low_register = 28,  ///< y low register.
            y_high_register = 29, ///< y high register.
            z_low_register = 30,  ///< z low register.
            z_high_register = 31, ///< z high register.
        };
    }
}

#endif
