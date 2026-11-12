/**
 * @file Pin.h
 * @brief Logical GPIO pin and port identifiers.
 */

#ifndef ATMEGA2560_DEFINITIONS_PIN_H
#define ATMEGA2560_DEFINITIONS_PIN_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Logical pin and alternate function identifiers definitions. */
    namespace pin
    {
        /** @brief GPIO ports. */
        enum class Port : uint8_t
        {
            A = 0,  ///< GPIO port A.
            B = 1,  ///< GPIO port B.
            C = 2,  ///< GPIO port C.
            D = 3,  ///< GPIO port D.
            E = 4,  ///< GPIO port E.
            F = 5,  ///< GPIO port F.
            G = 6,  ///< GPIO port G.
            H = 7,  ///< GPIO port H.
            J = 8,  ///< GPIO port J.
            K = 9,  ///< GPIO port K.
            L = 10, ///< GPIO port L.
        };
        /** @brief Package-independent logical GPIO pins. */
        enum class Pin : uint8_t
        {
            PA0 = 0x00, ///< Port A bit 0.
            PA1 = 0x01, ///< Port A bit 1.
            PA2 = 0x02, ///< Port A bit 2.
            PA3 = 0x03, ///< Port A bit 3.
            PA4 = 0x04, ///< Port A bit 4.
            PA5 = 0x05, ///< Port A bit 5.
            PA6 = 0x06, ///< Port A bit 6.
            PA7 = 0x07, ///< Port A bit 7.
            PB0 = 0x10, ///< Port B bit 0.
            PB1 = 0x11, ///< Port B bit 1.
            PB2 = 0x12, ///< Port B bit 2.
            PB3 = 0x13, ///< Port B bit 3.
            PB4 = 0x14, ///< Port B bit 4.
            PB5 = 0x15, ///< Port B bit 5.
            PB6 = 0x16, ///< Port B bit 6.
            PB7 = 0x17, ///< Port B bit 7.
            PC0 = 0x20, ///< Port C bit 0.
            PC1 = 0x21, ///< Port C bit 1.
            PC2 = 0x22, ///< Port C bit 2.
            PC3 = 0x23, ///< Port C bit 3.
            PC4 = 0x24, ///< Port C bit 4.
            PC5 = 0x25, ///< Port C bit 5.
            PC6 = 0x26, ///< Port C bit 6.
            PC7 = 0x27, ///< Port C bit 7.
            PD0 = 0x30, ///< Port D bit 0.
            PD1 = 0x31, ///< Port D bit 1.
            PD2 = 0x32, ///< Port D bit 2.
            PD3 = 0x33, ///< Port D bit 3.
            PD4 = 0x34, ///< Port D bit 4.
            PD5 = 0x35, ///< Port D bit 5.
            PD6 = 0x36, ///< Port D bit 6.
            PD7 = 0x37, ///< Port D bit 7.
            PE0 = 0x40, ///< Port E bit 0.
            PE1 = 0x41, ///< Port E bit 1.
            PE2 = 0x42, ///< Port E bit 2.
            PE3 = 0x43, ///< Port E bit 3.
            PE4 = 0x44, ///< Port E bit 4.
            PE5 = 0x45, ///< Port E bit 5.
            PE6 = 0x46, ///< Port E bit 6.
            PE7 = 0x47, ///< Port E bit 7.
            PF0 = 0x50, ///< Port F bit 0.
            PF1 = 0x51, ///< Port F bit 1.
            PF2 = 0x52, ///< Port F bit 2.
            PF3 = 0x53, ///< Port F bit 3.
            PF4 = 0x54, ///< Port F bit 4.
            PF5 = 0x55, ///< Port F bit 5.
            PF6 = 0x56, ///< Port F bit 6.
            PF7 = 0x57, ///< Port F bit 7.
            PG0 = 0x60, ///< Port G bit 0.
            PG1 = 0x61, ///< Port G bit 1.
            PG2 = 0x62, ///< Port G bit 2.
            PG3 = 0x63, ///< Port G bit 3.
            PG4 = 0x64, ///< Port G bit 4.
            PG5 = 0x65, ///< Port G bit 5.
            PH0 = 0x70, ///< Port H bit 0.
            PH1 = 0x71, ///< Port H bit 1.
            PH2 = 0x72, ///< Port H bit 2.
            PH3 = 0x73, ///< Port H bit 3.
            PH4 = 0x74, ///< Port H bit 4.
            PH5 = 0x75, ///< Port H bit 5.
            PH6 = 0x76, ///< Port H bit 6.
            PH7 = 0x77, ///< Port H bit 7.
            PJ0 = 0x80, ///< Port J bit 0.
            PJ1 = 0x81, ///< Port J bit 1.
            PJ2 = 0x82, ///< Port J bit 2.
            PJ3 = 0x83, ///< Port J bit 3.
            PJ4 = 0x84, ///< Port J bit 4.
            PJ5 = 0x85, ///< Port J bit 5.
            PJ6 = 0x86, ///< Port J bit 6.
            PJ7 = 0x87, ///< Port J bit 7.
            PK0 = 0x90, ///< Port K bit 0.
            PK1 = 0x91, ///< Port K bit 1.
            PK2 = 0x92, ///< Port K bit 2.
            PK3 = 0x93, ///< Port K bit 3.
            PK4 = 0x94, ///< Port K bit 4.
            PK5 = 0x95, ///< Port K bit 5.
            PK6 = 0x96, ///< Port K bit 6.
            PK7 = 0x97, ///< Port K bit 7.
            PL0 = 0xA0, ///< Port L bit 0.
            PL1 = 0xA1, ///< Port L bit 1.
            PL2 = 0xA2, ///< Port L bit 2.
            PL3 = 0xA3, ///< Port L bit 3.
            PL4 = 0xA4, ///< Port L bit 4.
            PL5 = 0xA5, ///< Port L bit 5.
            PL6 = 0xA6, ///< Port L bit 6.
            PL7 = 0xA7, ///< Port L bit 7.
        };
        /** @brief Logical pin encoding. */
        enum : uint8_t
        {
            port_shift = 4,   ///< port shift.
            port_mask = 0xF0, ///< port mask.
            bit_mask = 0x0F,  ///< bit mask.
            pin_count = 86,   ///< pin count.
        };
        /** @brief Port encodings. */
        enum : uint8_t
        {
            port_a_code = 0,  ///< Port A code.
            port_b_code = 1,  ///< Port B code.
            port_c_code = 2,  ///< Port C code.
            port_d_code = 3,  ///< Port D code.
            port_e_code = 4,  ///< Port E code.
            port_f_code = 5,  ///< Port F code.
            port_g_code = 6,  ///< Port G code.
            port_h_code = 7,  ///< Port H code.
            port_j_code = 8,  ///< Port J code.
            port_k_code = 9,  ///< Port K code.
            port_l_code = 10, ///< Port L code.
        };
        /** @brief Port widths. */
        enum : uint8_t
        {
            port_a_width = 8, ///< Port A width.
            port_b_width = 8, ///< Port B width.
            port_c_width = 8, ///< Port C width.
            port_d_width = 8, ///< Port D width.
            port_e_width = 8, ///< Port E width.
            port_f_width = 8, ///< Port F width.
            port_g_width = 6, ///< Port G width.
            port_h_width = 8, ///< Port H width.
            port_j_width = 8, ///< Port J width.
            port_k_width = 8, ///< Port K width.
            port_l_width = 8, ///< Port L width.
            port_a_mask = 0xFF,
            port_b_mask = 0xFF,
            port_c_mask = 0xFF,
            port_d_mask = 0xFF,
            port_e_mask = 0xFF,
            port_f_mask = 0xFF,
            port_g_mask = 0x3F,
            port_h_mask = 0xFF,
            port_j_mask = 0xFF,
            port_k_mask = 0xFF,
            port_l_mask = 0xFF
        };
    }
    using pin::Pin;
    using pin::Port;
}

#endif
