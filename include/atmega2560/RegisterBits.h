/**
 * @file RegisterBits.h
 * @brief Register bit positions and field masks.
 */

#ifndef ATMEGA2560_DEFINITIONS_REGISTERBITS_H
#define ATMEGA2560_DEFINITIONS_REGISTERBITS_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Register bits definitions. */
    namespace register_bits
    {
        /** @brief Pina definitions. */
        namespace pina
        {
            /** @brief PINA bit positions. */
            enum : uint8_t
            {
                pina7 = 7, ///< PINA PINA7 bit position.
                pina6 = 6, ///< PINA PINA6 bit position.
                pina5 = 5, ///< PINA PINA5 bit position.
                pina4 = 4, ///< PINA PINA4 bit position.
                pina3 = 3, ///< PINA PINA3 bit position.
                pina2 = 2, ///< PINA PINA2 bit position.
                pina1 = 1, ///< PINA PINA1 bit position.
                pina0 = 0, ///< PINA PINA0 bit position.
            };
        }
        /** @brief Ddra definitions. */
        namespace ddra
        {
            /** @brief DDRA bit positions. */
            enum : uint8_t
            {
                dda7 = 7, ///< DDRA DDA7 bit position.
                dda6 = 6, ///< DDRA DDA6 bit position.
                dda5 = 5, ///< DDRA DDA5 bit position.
                dda4 = 4, ///< DDRA DDA4 bit position.
                dda3 = 3, ///< DDRA DDA3 bit position.
                dda2 = 2, ///< DDRA DDA2 bit position.
                dda1 = 1, ///< DDRA DDA1 bit position.
                dda0 = 0, ///< DDRA DDA0 bit position.
            };
        }
        /** @brief Porta definitions. */
        namespace porta
        {
            /** @brief PORTA bit positions. */
            enum : uint8_t
            {
                porta7 = 7, ///< PORTA PORTA7 bit position.
                porta6 = 6, ///< PORTA PORTA6 bit position.
                porta5 = 5, ///< PORTA PORTA5 bit position.
                porta4 = 4, ///< PORTA PORTA4 bit position.
                porta3 = 3, ///< PORTA PORTA3 bit position.
                porta2 = 2, ///< PORTA PORTA2 bit position.
                porta1 = 1, ///< PORTA PORTA1 bit position.
                porta0 = 0, ///< PORTA PORTA0 bit position.
            };
        }
        /** @brief Pinb definitions. */
        namespace pinb
        {
            /** @brief PINB bit positions. */
            enum : uint8_t
            {
                pinb7 = 7, ///< PINB PINB7 bit position.
                pinb6 = 6, ///< PINB PINB6 bit position.
                pinb5 = 5, ///< PINB PINB5 bit position.
                pinb4 = 4, ///< PINB PINB4 bit position.
                pinb3 = 3, ///< PINB PINB3 bit position.
                pinb2 = 2, ///< PINB PINB2 bit position.
                pinb1 = 1, ///< PINB PINB1 bit position.
                pinb0 = 0, ///< PINB PINB0 bit position.
            };
        }
        /** @brief Ddrb definitions. */
        namespace ddrb
        {
            /** @brief DDRB bit positions. */
            enum : uint8_t
            {
                ddb7 = 7, ///< DDRB DDB7 bit position.
                ddb6 = 6, ///< DDRB DDB6 bit position.
                ddb5 = 5, ///< DDRB DDB5 bit position.
                ddb4 = 4, ///< DDRB DDB4 bit position.
                ddb3 = 3, ///< DDRB DDB3 bit position.
                ddb2 = 2, ///< DDRB DDB2 bit position.
                ddb1 = 1, ///< DDRB DDB1 bit position.
                ddb0 = 0, ///< DDRB DDB0 bit position.
            };
        }
        /** @brief Portb definitions. */
        namespace portb
        {
            /** @brief PORTB bit positions. */
            enum : uint8_t
            {
                portb7 = 7, ///< PORTB PORTB7 bit position.
                portb6 = 6, ///< PORTB PORTB6 bit position.
                portb5 = 5, ///< PORTB PORTB5 bit position.
                portb4 = 4, ///< PORTB PORTB4 bit position.
                portb3 = 3, ///< PORTB PORTB3 bit position.
                portb2 = 2, ///< PORTB PORTB2 bit position.
                portb1 = 1, ///< PORTB PORTB1 bit position.
                portb0 = 0, ///< PORTB PORTB0 bit position.
            };
        }
        /** @brief Pinc definitions. */
        namespace pinc
        {
            /** @brief PINC bit positions. */
            enum : uint8_t
            {
                pinc7 = 7, ///< PINC PINC7 bit position.
                pinc6 = 6, ///< PINC PINC6 bit position.
                pinc5 = 5, ///< PINC PINC5 bit position.
                pinc4 = 4, ///< PINC PINC4 bit position.
                pinc3 = 3, ///< PINC PINC3 bit position.
                pinc2 = 2, ///< PINC PINC2 bit position.
                pinc1 = 1, ///< PINC PINC1 bit position.
                pinc0 = 0, ///< PINC PINC0 bit position.
            };
        }
        /** @brief Ddrc definitions. */
        namespace ddrc
        {
            /** @brief DDRC bit positions. */
            enum : uint8_t
            {
                ddc7 = 7, ///< DDRC DDC7 bit position.
                ddc6 = 6, ///< DDRC DDC6 bit position.
                ddc5 = 5, ///< DDRC DDC5 bit position.
                ddc4 = 4, ///< DDRC DDC4 bit position.
                ddc3 = 3, ///< DDRC DDC3 bit position.
                ddc2 = 2, ///< DDRC DDC2 bit position.
                ddc1 = 1, ///< DDRC DDC1 bit position.
                ddc0 = 0, ///< DDRC DDC0 bit position.
            };
        }
        /** @brief Portc definitions. */
        namespace portc
        {
            /** @brief PORTC bit positions. */
            enum : uint8_t
            {
                portc7 = 7, ///< PORTC PORTC7 bit position.
                portc6 = 6, ///< PORTC PORTC6 bit position.
                portc5 = 5, ///< PORTC PORTC5 bit position.
                portc4 = 4, ///< PORTC PORTC4 bit position.
                portc3 = 3, ///< PORTC PORTC3 bit position.
                portc2 = 2, ///< PORTC PORTC2 bit position.
                portc1 = 1, ///< PORTC PORTC1 bit position.
                portc0 = 0, ///< PORTC PORTC0 bit position.
            };
        }
        /** @brief Pind definitions. */
        namespace pind
        {
            /** @brief PIND bit positions. */
            enum : uint8_t
            {
                pind7 = 7, ///< PIND PIND7 bit position.
                pind6 = 6, ///< PIND PIND6 bit position.
                pind5 = 5, ///< PIND PIND5 bit position.
                pind4 = 4, ///< PIND PIND4 bit position.
                pind3 = 3, ///< PIND PIND3 bit position.
                pind2 = 2, ///< PIND PIND2 bit position.
                pind1 = 1, ///< PIND PIND1 bit position.
                pind0 = 0, ///< PIND PIND0 bit position.
            };
        }
        /** @brief Ddrd definitions. */
        namespace ddrd
        {
            /** @brief DDRD bit positions. */
            enum : uint8_t
            {
                ddd7 = 7, ///< DDRD DDD7 bit position.
                ddd6 = 6, ///< DDRD DDD6 bit position.
                ddd5 = 5, ///< DDRD DDD5 bit position.
                ddd4 = 4, ///< DDRD DDD4 bit position.
                ddd3 = 3, ///< DDRD DDD3 bit position.
                ddd2 = 2, ///< DDRD DDD2 bit position.
                ddd1 = 1, ///< DDRD DDD1 bit position.
                ddd0 = 0, ///< DDRD DDD0 bit position.
            };
        }
        /** @brief Portd definitions. */
        namespace portd
        {
            /** @brief PORTD bit positions. */
            enum : uint8_t
            {
                portd7 = 7, ///< PORTD PORTD7 bit position.
                portd6 = 6, ///< PORTD PORTD6 bit position.
                portd5 = 5, ///< PORTD PORTD5 bit position.
                portd4 = 4, ///< PORTD PORTD4 bit position.
                portd3 = 3, ///< PORTD PORTD3 bit position.
                portd2 = 2, ///< PORTD PORTD2 bit position.
                portd1 = 1, ///< PORTD PORTD1 bit position.
                portd0 = 0, ///< PORTD PORTD0 bit position.
            };
        }
        /** @brief Pine definitions. */
        namespace pine
        {
            /** @brief PINE bit positions. */
            enum : uint8_t
            {
                pine7 = 7, ///< PINE PINE7 bit position.
                pine6 = 6, ///< PINE PINE6 bit position.
                pine5 = 5, ///< PINE PINE5 bit position.
                pine4 = 4, ///< PINE PINE4 bit position.
                pine3 = 3, ///< PINE PINE3 bit position.
                pine2 = 2, ///< PINE PINE2 bit position.
                pine1 = 1, ///< PINE PINE1 bit position.
                pine0 = 0, ///< PINE PINE0 bit position.
            };
        }
        /** @brief Ddre definitions. */
        namespace ddre
        {
            /** @brief DDRE bit positions. */
            enum : uint8_t
            {
                dde7 = 7, ///< DDRE DDE7 bit position.
                dde6 = 6, ///< DDRE DDE6 bit position.
                dde5 = 5, ///< DDRE DDE5 bit position.
                dde4 = 4, ///< DDRE DDE4 bit position.
                dde3 = 3, ///< DDRE DDE3 bit position.
                dde2 = 2, ///< DDRE DDE2 bit position.
                dde1 = 1, ///< DDRE DDE1 bit position.
                dde0 = 0, ///< DDRE DDE0 bit position.
            };
        }
        /** @brief Porte definitions. */
        namespace porte
        {
            /** @brief PORTE bit positions. */
            enum : uint8_t
            {
                porte7 = 7, ///< PORTE PORTE7 bit position.
                porte6 = 6, ///< PORTE PORTE6 bit position.
                porte5 = 5, ///< PORTE PORTE5 bit position.
                porte4 = 4, ///< PORTE PORTE4 bit position.
                porte3 = 3, ///< PORTE PORTE3 bit position.
                porte2 = 2, ///< PORTE PORTE2 bit position.
                porte1 = 1, ///< PORTE PORTE1 bit position.
                porte0 = 0, ///< PORTE PORTE0 bit position.
            };
        }
        /** @brief Pinf definitions. */
        namespace pinf
        {
            /** @brief PINF bit positions. */
            enum : uint8_t
            {
                pinf7 = 7, ///< PINF PINF7 bit position.
                pinf6 = 6, ///< PINF PINF6 bit position.
                pinf5 = 5, ///< PINF PINF5 bit position.
                pinf4 = 4, ///< PINF PINF4 bit position.
                pinf3 = 3, ///< PINF PINF3 bit position.
                pinf2 = 2, ///< PINF PINF2 bit position.
                pinf1 = 1, ///< PINF PINF1 bit position.
                pinf0 = 0, ///< PINF PINF0 bit position.
            };
        }
        /** @brief Ddrf definitions. */
        namespace ddrf
        {
            /** @brief DDRF bit positions. */
            enum : uint8_t
            {
                ddf7 = 7, ///< DDRF DDF7 bit position.
                ddf6 = 6, ///< DDRF DDF6 bit position.
                ddf5 = 5, ///< DDRF DDF5 bit position.
                ddf4 = 4, ///< DDRF DDF4 bit position.
                ddf3 = 3, ///< DDRF DDF3 bit position.
                ddf2 = 2, ///< DDRF DDF2 bit position.
                ddf1 = 1, ///< DDRF DDF1 bit position.
                ddf0 = 0, ///< DDRF DDF0 bit position.
            };
        }
        /** @brief Portf definitions. */
        namespace portf
        {
            /** @brief PORTF bit positions. */
            enum : uint8_t
            {
                portf7 = 7, ///< PORTF PORTF7 bit position.
                portf6 = 6, ///< PORTF PORTF6 bit position.
                portf5 = 5, ///< PORTF PORTF5 bit position.
                portf4 = 4, ///< PORTF PORTF4 bit position.
                portf3 = 3, ///< PORTF PORTF3 bit position.
                portf2 = 2, ///< PORTF PORTF2 bit position.
                portf1 = 1, ///< PORTF PORTF1 bit position.
                portf0 = 0, ///< PORTF PORTF0 bit position.
            };
        }
        /** @brief Ping definitions. */
        namespace ping
        {
            /** @brief PING bit positions. */
            enum : uint8_t
            {
                ping5 = 5, ///< PING PING5 bit position.
                ping4 = 4, ///< PING PING4 bit position.
                ping3 = 3, ///< PING PING3 bit position.
                ping2 = 2, ///< PING PING2 bit position.
                ping1 = 1, ///< PING PING1 bit position.
                ping0 = 0, ///< PING PING0 bit position.
            };
        }
        /** @brief Ddrg definitions. */
        namespace ddrg
        {
            /** @brief DDRG bit positions. */
            enum : uint8_t
            {
                ddg5 = 5, ///< DDRG DDG5 bit position.
                ddg4 = 4, ///< DDRG DDG4 bit position.
                ddg3 = 3, ///< DDRG DDG3 bit position.
                ddg2 = 2, ///< DDRG DDG2 bit position.
                ddg1 = 1, ///< DDRG DDG1 bit position.
                ddg0 = 0, ///< DDRG DDG0 bit position.
            };
        }
        /** @brief Portg definitions. */
        namespace portg
        {
            /** @brief PORTG bit positions. */
            enum : uint8_t
            {
                portg5 = 5, ///< PORTG PORTG5 bit position.
                portg4 = 4, ///< PORTG PORTG4 bit position.
                portg3 = 3, ///< PORTG PORTG3 bit position.
                portg2 = 2, ///< PORTG PORTG2 bit position.
                portg1 = 1, ///< PORTG PORTG1 bit position.
                portg0 = 0, ///< PORTG PORTG0 bit position.
            };
        }
        /** @brief Tifr0 definitions. */
        namespace tifr0
        {
            /** @brief TIFR0 bit positions. */
            enum : uint8_t
            {
                ocf0b = 2, ///< TIFR0 OCF0B bit position.
                ocf0a = 1, ///< TIFR0 OCF0A bit position.
                tov0 = 0,  ///< TIFR0 TOV0 bit position.
            };
        }
        /** @brief Tifr1 definitions. */
        namespace tifr1
        {
            /** @brief TIFR1 bit positions. */
            enum : uint8_t
            {
                icf1 = 5,  ///< TIFR1 ICF1 bit position.
                ocf1c = 3, ///< TIFR1 OCF1C bit position.
                ocf1b = 2, ///< TIFR1 OCF1B bit position.
                ocf1a = 1, ///< TIFR1 OCF1A bit position.
                tov1 = 0,  ///< TIFR1 TOV1 bit position.
            };
        }
        /** @brief Tifr2 definitions. */
        namespace tifr2
        {
            /** @brief TIFR2 bit positions. */
            enum : uint8_t
            {
                ocf2b = 2, ///< TIFR2 OCF2B bit position.
                ocf2a = 1, ///< TIFR2 OCF2A bit position.
                tov2 = 0,  ///< TIFR2 TOV2 bit position.
            };
        }
        /** @brief Tifr3 definitions. */
        namespace tifr3
        {
            /** @brief TIFR3 bit positions. */
            enum : uint8_t
            {
                icf3 = 5,  ///< TIFR3 ICF3 bit position.
                ocf3c = 3, ///< TIFR3 OCF3C bit position.
                ocf3b = 2, ///< TIFR3 OCF3B bit position.
                ocf3a = 1, ///< TIFR3 OCF3A bit position.
                tov3 = 0,  ///< TIFR3 TOV3 bit position.
            };
        }
        /** @brief Tifr4 definitions. */
        namespace tifr4
        {
            /** @brief TIFR4 bit positions. */
            enum : uint8_t
            {
                icf4 = 5,  ///< TIFR4 ICF4 bit position.
                ocf4c = 3, ///< TIFR4 OCF4C bit position.
                ocf4b = 2, ///< TIFR4 OCF4B bit position.
                ocf4a = 1, ///< TIFR4 OCF4A bit position.
                tov4 = 0,  ///< TIFR4 TOV4 bit position.
            };
        }
        /** @brief Tifr5 definitions. */
        namespace tifr5
        {
            /** @brief TIFR5 bit positions. */
            enum : uint8_t
            {
                icf5 = 5,  ///< TIFR5 ICF5 bit position.
                ocf5c = 3, ///< TIFR5 OCF5C bit position.
                ocf5b = 2, ///< TIFR5 OCF5B bit position.
                ocf5a = 1, ///< TIFR5 OCF5A bit position.
                tov5 = 0,  ///< TIFR5 TOV5 bit position.
            };
        }
        /** @brief Pcifr definitions. */
        namespace pcifr
        {
            /** @brief PCIFR bit positions. */
            enum : uint8_t
            {
                pcif2 = 2, ///< PCIFR PCIF2 bit position.
                pcif1 = 1, ///< PCIFR PCIF1 bit position.
                pcif0 = 0, ///< PCIFR PCIF0 bit position.
            };
        }
        /** @brief Eifr definitions. */
        namespace eifr
        {
            /** @brief EIFR bit positions. */
            enum : uint8_t
            {
                intf7 = 7, ///< EIFR INTF7 bit position.
                intf6 = 6, ///< EIFR INTF6 bit position.
                intf5 = 5, ///< EIFR INTF5 bit position.
                intf4 = 4, ///< EIFR INTF4 bit position.
                intf3 = 3, ///< EIFR INTF3 bit position.
                intf2 = 2, ///< EIFR INTF2 bit position.
                intf1 = 1, ///< EIFR INTF1 bit position.
                intf0 = 0, ///< EIFR INTF0 bit position.
            };
        }
        /** @brief Eimsk definitions. */
        namespace eimsk
        {
            /** @brief EIMSK bit positions. */
            enum : uint8_t
            {
                int7 = 7, ///< EIMSK INT7 bit position.
                int6 = 6, ///< EIMSK INT6 bit position.
                int5 = 5, ///< EIMSK INT5 bit position.
                int4 = 4, ///< EIMSK INT4 bit position.
                int3 = 3, ///< EIMSK INT3 bit position.
                int2 = 2, ///< EIMSK INT2 bit position.
                int1 = 1, ///< EIMSK INT1 bit position.
                int0 = 0, ///< EIMSK INT0 bit position.
            };
        }
        /** @brief Eecr definitions. */
        namespace eecr
        {
            /** @brief EECR bit positions. */
            enum : uint8_t
            {
                eepm1 = 5, ///< EECR EEPM1 bit position.
                eepm0 = 4, ///< EECR EEPM0 bit position.
                eerie = 3, ///< EECR EERIE bit position.
                eempe = 2, ///< EECR EEMPE bit position.
                eepe = 1,  ///< EECR EEPE bit position.
                eere = 0,  ///< EECR EERE bit position.
            };
        }
        /** @brief Gtccr definitions. */
        namespace gtccr
        {
            /** @brief GTCCR bit positions. */
            enum : uint8_t
            {
                tsm = 7,     ///< GTCCR TSM bit position.
                psrasy = 1,  ///< GTCCR PSRASY bit position.
                psrsync = 0, ///< GTCCR PSRSYNC bit position.
            };
        }
        /** @brief Tccr0a definitions. */
        namespace tccr0a
        {
            /** @brief TCCR0A bit positions. */
            enum : uint8_t
            {
                com0a1 = 7, ///< TCCR0A COM0A1 bit position.
                com0a0 = 6, ///< TCCR0A COM0A0 bit position.
                com0b1 = 5, ///< TCCR0A COM0B1 bit position.
                com0b0 = 4, ///< TCCR0A COM0B0 bit position.
                wgm01 = 1,  ///< TCCR0A WGM01 bit position.
                wgm00 = 0,  ///< TCCR0A WGM00 bit position.
            };
        }
        /** @brief Tccr0b definitions. */
        namespace tccr0b
        {
            /** @brief TCCR0B bit positions. */
            enum : uint8_t
            {
                foc0a = 7, ///< TCCR0B FOC0A bit position.
                foc0b = 6, ///< TCCR0B FOC0B bit position.
                wgm02 = 3, ///< TCCR0B WGM02 bit position.
                cs02 = 2,  ///< TCCR0B CS02 bit position.
                cs01 = 1,  ///< TCCR0B CS01 bit position.
                cs00 = 0,  ///< TCCR0B CS00 bit position.
            };
        }
        /** @brief Spcr definitions. */
        namespace spcr
        {
            /** @brief SPCR bit positions. */
            enum : uint8_t
            {
                spie = 7, ///< SPCR SPIE bit position.
                spe = 6,  ///< SPCR SPE bit position.
                dord = 5, ///< SPCR DORD bit position.
                mstr = 4, ///< SPCR MSTR bit position.
                cpol = 3, ///< SPCR CPOL bit position.
                cpha = 2, ///< SPCR CPHA bit position.
                spr1 = 1, ///< SPCR SPR1 bit position.
                spr0 = 0, ///< SPCR SPR0 bit position.
            };
        }
        /** @brief Spsr definitions. */
        namespace spsr
        {
            /** @brief SPSR bit positions. */
            enum : uint8_t
            {
                spif = 7,  ///< SPSR SPIF bit position.
                wcol = 6,  ///< SPSR WCOL bit position.
                spi2x = 0, ///< SPSR SPI2X bit position.
            };
        }
        /** @brief Acsr definitions. */
        namespace acsr
        {
            /** @brief ACSR bit positions. */
            enum : uint8_t
            {
                acd = 7,   ///< ACSR ACD bit position.
                acbg = 6,  ///< ACSR ACBG bit position.
                aco = 5,   ///< ACSR ACO bit position.
                aci = 4,   ///< ACSR ACI bit position.
                acie = 3,  ///< ACSR ACIE bit position.
                acic = 2,  ///< ACSR ACIC bit position.
                acis1 = 1, ///< ACSR ACIS1 bit position.
                acis0 = 0, ///< ACSR ACIS0 bit position.
            };
        }
        /** @brief Ocdr definitions. */
        namespace ocdr
        {
            /** @brief OCDR bit positions. */
            enum : uint8_t
            {
                ocdr7 = 7, ///< OCDR OCDR7 bit position.
                ocdr6 = 6, ///< OCDR OCDR6 bit position.
                ocdr5 = 5, ///< OCDR OCDR5 bit position.
                ocdr4 = 4, ///< OCDR OCDR4 bit position.
                ocdr3 = 3, ///< OCDR OCDR3 bit position.
                ocdr2 = 2, ///< OCDR OCDR2 bit position.
                ocdr1 = 1, ///< OCDR OCDR1 bit position.
                ocdr0 = 0, ///< OCDR OCDR0 bit position.
            };
        }
        /** @brief Smcr definitions. */
        namespace smcr
        {
            /** @brief SMCR bit positions. */
            enum : uint8_t
            {
                sm2 = 3, ///< SMCR SM2 bit position.
                sm1 = 2, ///< SMCR SM1 bit position.
                sm0 = 1, ///< SMCR SM0 bit position.
                se = 0,  ///< SMCR SE bit position.
            };
        }
        /** @brief Mcusr definitions. */
        namespace mcusr
        {
            /** @brief MCUSR bit positions. */
            enum : uint8_t
            {
                jtrf = 4,  ///< MCUSR JTRF bit position.
                wdrf = 3,  ///< MCUSR WDRF bit position.
                borf = 2,  ///< MCUSR BORF bit position.
                extrf = 1, ///< MCUSR EXTRF bit position.
                porf = 0,  ///< MCUSR PORF bit position.
            };
        }
        /** @brief Mcucr definitions. */
        namespace mcucr
        {
            /** @brief MCUCR bit positions. */
            enum : uint8_t
            {
                jtd = 7,   ///< MCUCR JTD bit position.
                pud = 4,   ///< MCUCR PUD bit position.
                ivsel = 1, ///< MCUCR IVSEL bit position.
                ivce = 0,  ///< MCUCR IVCE bit position.
            };
        }
        /** @brief Spmcsr definitions. */
        namespace spmcsr
        {
            /** @brief SPMCSR bit positions. */
            enum : uint8_t
            {
                spmie = 7,  ///< SPMCSR SPMIE bit position.
                rwwsb = 6,  ///< SPMCSR RWWSB bit position.
                sigrd = 5,  ///< SPMCSR SIGRD bit position.
                rwwsre = 4, ///< SPMCSR RWWSRE bit position.
                blbset = 3, ///< SPMCSR BLBSET bit position.
                pgwrt = 2,  ///< SPMCSR PGWRT bit position.
                pgers = 1,  ///< SPMCSR PGERS bit position.
                spmen = 0,  ///< SPMCSR SPMEN bit position.
            };
        }
        /** @brief Rampz definitions. */
        namespace rampz
        {
            /** @brief RAMPZ bit positions. */
            enum : uint8_t
            {
                rampz1 = 1, ///< RAMPZ RAMPZ1 bit position.
                rampz0 = 0, ///< RAMPZ RAMPZ0 bit position.
            };
        }
        /** @brief Eind definitions. */
        namespace eind
        {
            /** @brief EIND bit positions implemented by ATmega2560. */
            enum : uint8_t
            {
                eind0 = 0, ///< EIND EIND0 bit position.
            };
        }
        /** @brief Spl definitions. */
        namespace spl
        {
            /** @brief SPL bit positions. */
            enum : uint8_t
            {
                sp7 = 7, ///< SPL SP7 bit position.
                sp6 = 6, ///< SPL SP6 bit position.
                sp5 = 5, ///< SPL SP5 bit position.
                sp4 = 4, ///< SPL SP4 bit position.
                sp3 = 3, ///< SPL SP3 bit position.
                sp2 = 2, ///< SPL SP2 bit position.
                sp1 = 1, ///< SPL SP1 bit position.
                sp0 = 0, ///< SPL SP0 bit position.
            };
        }
        /** @brief Sph definitions. */
        namespace sph
        {
            /** @brief SPH bit positions. */
            enum : uint8_t
            {
                sp15 = 7, ///< SPH SP15 bit position.
                sp14 = 6, ///< SPH SP14 bit position.
                sp13 = 5, ///< SPH SP13 bit position.
                sp12 = 4, ///< SPH SP12 bit position.
                sp11 = 3, ///< SPH SP11 bit position.
                sp10 = 2, ///< SPH SP10 bit position.
                sp9 = 1,  ///< SPH SP9 bit position.
                sp8 = 0,  ///< SPH SP8 bit position.
            };
        }
        /** @brief Sreg definitions. */
        namespace sreg
        {
            /** @brief SREG bit positions. */
            enum : uint8_t
            {
                i = 7, ///< SREG I bit position.
                t = 6, ///< SREG T bit position.
                h = 5, ///< SREG H bit position.
                s = 4, ///< SREG S bit position.
                v = 3, ///< SREG V bit position.
                n = 2, ///< SREG N bit position.
                z = 1, ///< SREG Z bit position.
                c = 0, ///< SREG C bit position.
            };
        }
        /** @brief Wdtcsr definitions. */
        namespace wdtcsr
        {
            /** @brief WDTCSR bit positions. */
            enum : uint8_t
            {
                wdif = 7, ///< WDTCSR WDIF bit position.
                wdie = 6, ///< WDTCSR WDIE bit position.
                wdp3 = 5, ///< WDTCSR WDP3 bit position.
                wdce = 4, ///< WDTCSR WDCE bit position.
                wde = 3,  ///< WDTCSR WDE bit position.
                wdp2 = 2, ///< WDTCSR WDP2 bit position.
                wdp1 = 1, ///< WDTCSR WDP1 bit position.
                wdp0 = 0, ///< WDTCSR WDP0 bit position.
            };
        }
        /** @brief Clkpr definitions. */
        namespace clkpr
        {
            /** @brief CLKPR bit positions. */
            enum : uint8_t
            {
                clkpce = 7, ///< CLKPR CLKPCE bit position.
                clkps3 = 3, ///< CLKPR CLKPS3 bit position.
                clkps2 = 2, ///< CLKPR CLKPS2 bit position.
                clkps1 = 1, ///< CLKPR CLKPS1 bit position.
                clkps0 = 0, ///< CLKPR CLKPS0 bit position.
            };
        }
        /** @brief Prr0 definitions. */
        namespace prr0
        {
            /** @brief PRR0 bit positions. */
            enum : uint8_t
            {
                prtwi = 7,    ///< PRR0 PRTWI bit position.
                prtim2 = 6,   ///< PRR0 PRTIM2 bit position.
                prtim0 = 5,   ///< PRR0 PRTIM0 bit position.
                prtim1 = 3,   ///< PRR0 PRTIM1 bit position.
                prspi = 2,    ///< PRR0 PRSPI bit position.
                prusart0 = 1, ///< PRR0 PRUSART0 bit position.
                pradc = 0,    ///< PRR0 PRADC bit position.
            };
        }
        /** @brief Prr1 definitions. */
        namespace prr1
        {
            /** @brief PRR1 bit positions. */
            enum : uint8_t
            {
                prtim5 = 5,   ///< PRR1 PRTIM5 bit position.
                prtim4 = 4,   ///< PRR1 PRTIM4 bit position.
                prtim3 = 3,   ///< PRR1 PRTIM3 bit position.
                prusart3 = 2, ///< PRR1 PRUSART3 bit position.
                prusart2 = 1, ///< PRR1 PRUSART2 bit position.
                prusart1 = 0, ///< PRR1 PRUSART1 bit position.
            };
        }
        /** @brief Pcicr definitions. */
        namespace pcicr
        {
            /** @brief PCICR bit positions. */
            enum : uint8_t
            {
                pcie2 = 2, ///< PCICR PCIE2 bit position.
                pcie1 = 1, ///< PCICR PCIE1 bit position.
                pcie0 = 0, ///< PCICR PCIE0 bit position.
            };
        }
        /** @brief Eicra definitions. */
        namespace eicra
        {
            /** @brief EICRA bit positions. */
            enum : uint8_t
            {
                isc31 = 7, ///< EICRA ISC31 bit position.
                isc30 = 6, ///< EICRA ISC30 bit position.
                isc21 = 5, ///< EICRA ISC21 bit position.
                isc20 = 4, ///< EICRA ISC20 bit position.
                isc11 = 3, ///< EICRA ISC11 bit position.
                isc10 = 2, ///< EICRA ISC10 bit position.
                isc01 = 1, ///< EICRA ISC01 bit position.
                isc00 = 0, ///< EICRA ISC00 bit position.
            };
        }
        /** @brief Eicrb definitions. */
        namespace eicrb
        {
            /** @brief EICRB bit positions. */
            enum : uint8_t
            {
                isc71 = 7, ///< EICRB ISC71 bit position.
                isc70 = 6, ///< EICRB ISC70 bit position.
                isc61 = 5, ///< EICRB ISC61 bit position.
                isc60 = 4, ///< EICRB ISC60 bit position.
                isc51 = 3, ///< EICRB ISC51 bit position.
                isc50 = 2, ///< EICRB ISC50 bit position.
                isc41 = 1, ///< EICRB ISC41 bit position.
                isc40 = 0, ///< EICRB ISC40 bit position.
            };
        }
        /** @brief Pcmsk0 definitions. */
        namespace pcmsk0
        {
            /** @brief PCMSK0 bit positions. */
            enum : uint8_t
            {
                pcint7 = 7, ///< PCMSK0 PCINT7 bit position.
                pcint6 = 6, ///< PCMSK0 PCINT6 bit position.
                pcint5 = 5, ///< PCMSK0 PCINT5 bit position.
                pcint4 = 4, ///< PCMSK0 PCINT4 bit position.
                pcint3 = 3, ///< PCMSK0 PCINT3 bit position.
                pcint2 = 2, ///< PCMSK0 PCINT2 bit position.
                pcint1 = 1, ///< PCMSK0 PCINT1 bit position.
                pcint0 = 0, ///< PCMSK0 PCINT0 bit position.
            };
        }
        /** @brief Pcmsk1 definitions. */
        namespace pcmsk1
        {
            /** @brief PCMSK1 bit positions. */
            enum : uint8_t
            {
                pcint15 = 7, ///< PCMSK1 PCINT15 bit position.
                pcint14 = 6, ///< PCMSK1 PCINT14 bit position.
                pcint13 = 5, ///< PCMSK1 PCINT13 bit position.
                pcint12 = 4, ///< PCMSK1 PCINT12 bit position.
                pcint11 = 3, ///< PCMSK1 PCINT11 bit position.
                pcint10 = 2, ///< PCMSK1 PCINT10 bit position.
                pcint9 = 1,  ///< PCMSK1 PCINT9 bit position.
                pcint8 = 0,  ///< PCMSK1 PCINT8 bit position.
            };
        }
        /** @brief Pcmsk2 definitions. */
        namespace pcmsk2
        {
            /** @brief PCMSK2 bit positions. */
            enum : uint8_t
            {
                pcint23 = 7, ///< PCMSK2 PCINT23 bit position.
                pcint22 = 6, ///< PCMSK2 PCINT22 bit position.
                pcint21 = 5, ///< PCMSK2 PCINT21 bit position.
                pcint20 = 4, ///< PCMSK2 PCINT20 bit position.
                pcint19 = 3, ///< PCMSK2 PCINT19 bit position.
                pcint18 = 2, ///< PCMSK2 PCINT18 bit position.
                pcint17 = 1, ///< PCMSK2 PCINT17 bit position.
                pcint16 = 0, ///< PCMSK2 PCINT16 bit position.
            };
        }
        /** @brief Timsk0 definitions. */
        namespace timsk0
        {
            /** @brief TIMSK0 bit positions. */
            enum : uint8_t
            {
                ocie0b = 2, ///< TIMSK0 OCIE0B bit position.
                ocie0a = 1, ///< TIMSK0 OCIE0A bit position.
                toie0 = 0,  ///< TIMSK0 TOIE0 bit position.
            };
        }
        /** @brief Timsk1 definitions. */
        namespace timsk1
        {
            /** @brief TIMSK1 bit positions. */
            enum : uint8_t
            {
                icie1 = 5,  ///< TIMSK1 ICIE1 bit position.
                ocie1c = 3, ///< TIMSK1 OCIE1C bit position.
                ocie1b = 2, ///< TIMSK1 OCIE1B bit position.
                ocie1a = 1, ///< TIMSK1 OCIE1A bit position.
                toie1 = 0,  ///< TIMSK1 TOIE1 bit position.
            };
        }
        /** @brief Timsk2 definitions. */
        namespace timsk2
        {
            /** @brief TIMSK2 bit positions. */
            enum : uint8_t
            {
                ocie2b = 2, ///< TIMSK2 OCIE2B bit position.
                ocie2a = 1, ///< TIMSK2 OCIE2A bit position.
                toie2 = 0,  ///< TIMSK2 TOIE2 bit position.
            };
        }
        /** @brief Timsk3 definitions. */
        namespace timsk3
        {
            /** @brief TIMSK3 bit positions. */
            enum : uint8_t
            {
                icie3 = 5,  ///< TIMSK3 ICIE3 bit position.
                ocie3c = 3, ///< TIMSK3 OCIE3C bit position.
                ocie3b = 2, ///< TIMSK3 OCIE3B bit position.
                ocie3a = 1, ///< TIMSK3 OCIE3A bit position.
                toie3 = 0,  ///< TIMSK3 TOIE3 bit position.
            };
        }
        /** @brief Timsk4 definitions. */
        namespace timsk4
        {
            /** @brief TIMSK4 bit positions. */
            enum : uint8_t
            {
                icie4 = 5,  ///< TIMSK4 ICIE4 bit position.
                ocie4c = 3, ///< TIMSK4 OCIE4C bit position.
                ocie4b = 2, ///< TIMSK4 OCIE4B bit position.
                ocie4a = 1, ///< TIMSK4 OCIE4A bit position.
                toie4 = 0,  ///< TIMSK4 TOIE4 bit position.
            };
        }
        /** @brief Timsk5 definitions. */
        namespace timsk5
        {
            /** @brief TIMSK5 bit positions. */
            enum : uint8_t
            {
                icie5 = 5,  ///< TIMSK5 ICIE5 bit position.
                ocie5c = 3, ///< TIMSK5 OCIE5C bit position.
                ocie5b = 2, ///< TIMSK5 OCIE5B bit position.
                ocie5a = 1, ///< TIMSK5 OCIE5A bit position.
                toie5 = 0,  ///< TIMSK5 TOIE5 bit position.
            };
        }
        /** @brief Xmcra definitions. */
        namespace xmcra
        {
            /** @brief XMCRA bit positions. */
            enum : uint8_t
            {
                sre = 7,   ///< XMCRA SRE bit position.
                srl2 = 6,  ///< XMCRA SRL2 bit position.
                srl1 = 5,  ///< XMCRA SRL1 bit position.
                srl0 = 4,  ///< XMCRA SRL0 bit position.
                srw11 = 3, ///< XMCRA SRW11 bit position.
                srw10 = 2, ///< XMCRA SRW10 bit position.
                srw01 = 1, ///< XMCRA SRW01 bit position.
                srw00 = 0, ///< XMCRA SRW00 bit position.
            };
        }
        /** @brief Xmcrb definitions. */
        namespace xmcrb
        {
            /** @brief XMCRB bit positions. */
            enum : uint8_t
            {
                xmbk = 7, ///< XMCRB XMBK bit position.
                xmm2 = 2, ///< XMCRB XMM2 bit position.
                xmm1 = 1, ///< XMCRB XMM1 bit position.
                xmm0 = 0, ///< XMCRB XMM0 bit position.
            };
        }
        /** @brief Adcsra definitions. */
        namespace adcsra
        {
            /** @brief ADCSRA bit positions. */
            enum : uint8_t
            {
                aden = 7,  ///< ADCSRA ADEN bit position.
                adsc = 6,  ///< ADCSRA ADSC bit position.
                adate = 5, ///< ADCSRA ADATE bit position.
                adif = 4,  ///< ADCSRA ADIF bit position.
                adie = 3,  ///< ADCSRA ADIE bit position.
                adps2 = 2, ///< ADCSRA ADPS2 bit position.
                adps1 = 1, ///< ADCSRA ADPS1 bit position.
                adps0 = 0, ///< ADCSRA ADPS0 bit position.
            };
        }
        /** @brief Adcsrb definitions. */
        namespace adcsrb
        {
            /** @brief ADCSRB bit positions. */
            enum : uint8_t
            {
                acme = 6,  ///< ADCSRB ACME bit position.
                mux5 = 3,  ///< ADCSRB MUX5 bit position.
                adts2 = 2, ///< ADCSRB ADTS2 bit position.
                adts1 = 1, ///< ADCSRB ADTS1 bit position.
                adts0 = 0, ///< ADCSRB ADTS0 bit position.
            };
        }
        /** @brief Admux definitions. */
        namespace admux
        {
            /** @brief ADMUX bit positions. */
            enum : uint8_t
            {
                refs1 = 7, ///< ADMUX REFS1 bit position.
                refs0 = 6, ///< ADMUX REFS0 bit position.
                adlar = 5, ///< ADMUX ADLAR bit position.
                mux4 = 4,  ///< ADMUX MUX4 bit position.
                mux3 = 3,  ///< ADMUX MUX3 bit position.
                mux2 = 2,  ///< ADMUX MUX2 bit position.
                mux1 = 1,  ///< ADMUX MUX1 bit position.
                mux0 = 0,  ///< ADMUX MUX0 bit position.
            };
        }
        /** @brief Didr2 definitions. */
        namespace didr2
        {
            /** @brief DIDR2 bit positions. */
            enum : uint8_t
            {
                adc15d = 7, ///< DIDR2 ADC15D bit position.
                adc14d = 6, ///< DIDR2 ADC14D bit position.
                adc13d = 5, ///< DIDR2 ADC13D bit position.
                adc12d = 4, ///< DIDR2 ADC12D bit position.
                adc11d = 3, ///< DIDR2 ADC11D bit position.
                adc10d = 2, ///< DIDR2 ADC10D bit position.
                adc9d = 1,  ///< DIDR2 ADC9D bit position.
                adc8d = 0,  ///< DIDR2 ADC8D bit position.
            };
        }
        /** @brief Didr0 definitions. */
        namespace didr0
        {
            /** @brief DIDR0 bit positions. */
            enum : uint8_t
            {
                adc7d = 7, ///< DIDR0 ADC7D bit position.
                adc6d = 6, ///< DIDR0 ADC6D bit position.
                adc5d = 5, ///< DIDR0 ADC5D bit position.
                adc4d = 4, ///< DIDR0 ADC4D bit position.
                adc3d = 3, ///< DIDR0 ADC3D bit position.
                adc2d = 2, ///< DIDR0 ADC2D bit position.
                adc1d = 1, ///< DIDR0 ADC1D bit position.
                adc0d = 0, ///< DIDR0 ADC0D bit position.
            };
        }
        /** @brief Didr1 definitions. */
        namespace didr1
        {
            /** @brief DIDR1 bit positions. */
            enum : uint8_t
            {
                ain1d = 1, ///< DIDR1 AIN1D bit position.
                ain0d = 0, ///< DIDR1 AIN0D bit position.
            };
        }
        /** @brief Tccr1a definitions. */
        namespace tccr1a
        {
            /** @brief TCCR1A bit positions. */
            enum : uint8_t
            {
                com1a1 = 7, ///< TCCR1A COM1A1 bit position.
                com1a0 = 6, ///< TCCR1A COM1A0 bit position.
                com1b1 = 5, ///< TCCR1A COM1B1 bit position.
                com1b0 = 4, ///< TCCR1A COM1B0 bit position.
                com1c1 = 3, ///< TCCR1A COM1C1 bit position.
                com1c0 = 2, ///< TCCR1A COM1C0 bit position.
                wgm11 = 1,  ///< TCCR1A WGM11 bit position.
                wgm10 = 0,  ///< TCCR1A WGM10 bit position.
            };
        }
        /** @brief Tccr1b definitions. */
        namespace tccr1b
        {
            /** @brief TCCR1B bit positions. */
            enum : uint8_t
            {
                icnc1 = 7, ///< TCCR1B ICNC1 bit position.
                ices1 = 6, ///< TCCR1B ICES1 bit position.
                wgm13 = 4, ///< TCCR1B WGM13 bit position.
                wgm12 = 3, ///< TCCR1B WGM12 bit position.
                cs12 = 2,  ///< TCCR1B CS12 bit position.
                cs11 = 1,  ///< TCCR1B CS11 bit position.
                cs10 = 0,  ///< TCCR1B CS10 bit position.
            };
        }
        /** @brief Tccr1c definitions. */
        namespace tccr1c
        {
            /** @brief TCCR1C bit positions. */
            enum : uint8_t
            {
                foc1a = 7, ///< TCCR1C FOC1A bit position.
                foc1b = 6, ///< TCCR1C FOC1B bit position.
                foc1c = 5, ///< TCCR1C FOC1C bit position.
            };
        }
        /** @brief Tccr3a definitions. */
        namespace tccr3a
        {
            /** @brief TCCR3A bit positions. */
            enum : uint8_t
            {
                com3a1 = 7, ///< TCCR3A COM3A1 bit position.
                com3a0 = 6, ///< TCCR3A COM3A0 bit position.
                com3b1 = 5, ///< TCCR3A COM3B1 bit position.
                com3b0 = 4, ///< TCCR3A COM3B0 bit position.
                com3c1 = 3, ///< TCCR3A COM3C1 bit position.
                com3c0 = 2, ///< TCCR3A COM3C0 bit position.
                wgm31 = 1,  ///< TCCR3A WGM31 bit position.
                wgm30 = 0,  ///< TCCR3A WGM30 bit position.
            };
        }
        /** @brief Tccr3b definitions. */
        namespace tccr3b
        {
            /** @brief TCCR3B bit positions. */
            enum : uint8_t
            {
                icnc3 = 7, ///< TCCR3B ICNC3 bit position.
                ices3 = 6, ///< TCCR3B ICES3 bit position.
                wgm33 = 4, ///< TCCR3B WGM33 bit position.
                wgm32 = 3, ///< TCCR3B WGM32 bit position.
                cs32 = 2,  ///< TCCR3B CS32 bit position.
                cs31 = 1,  ///< TCCR3B CS31 bit position.
                cs30 = 0,  ///< TCCR3B CS30 bit position.
            };
        }
        /** @brief Tccr3c definitions. */
        namespace tccr3c
        {
            /** @brief TCCR3C bit positions. */
            enum : uint8_t
            {
                foc3a = 7, ///< TCCR3C FOC3A bit position.
                foc3b = 6, ///< TCCR3C FOC3B bit position.
                foc3c = 5, ///< TCCR3C FOC3C bit position.
            };
        }
        /** @brief Tccr4a definitions. */
        namespace tccr4a
        {
            /** @brief TCCR4A bit positions. */
            enum : uint8_t
            {
                com4a1 = 7, ///< TCCR4A COM4A1 bit position.
                com4a0 = 6, ///< TCCR4A COM4A0 bit position.
                com4b1 = 5, ///< TCCR4A COM4B1 bit position.
                com4b0 = 4, ///< TCCR4A COM4B0 bit position.
                com4c1 = 3, ///< TCCR4A COM4C1 bit position.
                com4c0 = 2, ///< TCCR4A COM4C0 bit position.
                wgm41 = 1,  ///< TCCR4A WGM41 bit position.
                wgm40 = 0,  ///< TCCR4A WGM40 bit position.
            };
        }
        /** @brief Tccr4b definitions. */
        namespace tccr4b
        {
            /** @brief TCCR4B bit positions. */
            enum : uint8_t
            {
                icnc4 = 7, ///< TCCR4B ICNC4 bit position.
                ices4 = 6, ///< TCCR4B ICES4 bit position.
                wgm43 = 4, ///< TCCR4B WGM43 bit position.
                wgm42 = 3, ///< TCCR4B WGM42 bit position.
                cs42 = 2,  ///< TCCR4B CS42 bit position.
                cs41 = 1,  ///< TCCR4B CS41 bit position.
                cs40 = 0,  ///< TCCR4B CS40 bit position.
            };
        }
        /** @brief Tccr4c definitions. */
        namespace tccr4c
        {
            /** @brief TCCR4C bit positions. */
            enum : uint8_t
            {
                foc4a = 7, ///< TCCR4C FOC4A bit position.
                foc4b = 6, ///< TCCR4C FOC4B bit position.
                foc4c = 5, ///< TCCR4C FOC4C bit position.
            };
        }
        /** @brief Tccr2a definitions. */
        namespace tccr2a
        {
            /** @brief TCCR2A bit positions. */
            enum : uint8_t
            {
                com2a1 = 7, ///< TCCR2A COM2A1 bit position.
                com2a0 = 6, ///< TCCR2A COM2A0 bit position.
                com2b1 = 5, ///< TCCR2A COM2B1 bit position.
                com2b0 = 4, ///< TCCR2A COM2B0 bit position.
                wgm21 = 1,  ///< TCCR2A WGM21 bit position.
                wgm20 = 0,  ///< TCCR2A WGM20 bit position.
            };
        }
        /** @brief Tccr2b definitions. */
        namespace tccr2b
        {
            /** @brief TCCR2B bit positions. */
            enum : uint8_t
            {
                foc2a = 7, ///< TCCR2B FOC2A bit position.
                foc2b = 6, ///< TCCR2B FOC2B bit position.
                wgm22 = 3, ///< TCCR2B WGM22 bit position.
                cs22 = 2,  ///< TCCR2B CS22 bit position.
                cs21 = 1,  ///< TCCR2B CS21 bit position.
                cs20 = 0,  ///< TCCR2B CS20 bit position.
            };
        }
        /** @brief Assr definitions. */
        namespace assr
        {
            /** @brief ASSR bit positions. */
            enum : uint8_t
            {
                exclk = 6,   ///< ASSR EXCLK bit position.
                as2 = 5,     ///< ASSR AS2 bit position.
                tcn2ub = 4,  ///< ASSR TCN2UB bit position.
                ocr2aub = 3, ///< ASSR OCR2AUB bit position.
                ocr2bub = 2, ///< ASSR OCR2BUB bit position.
                tcr2aub = 1, ///< ASSR TCR2AUB bit position.
                tcr2bub = 0, ///< ASSR TCR2BUB bit position.
            };
        }
        /** @brief Twsr definitions. */
        namespace twsr
        {
            /** @brief TWSR bit positions. */
            enum : uint8_t
            {
                tws7 = 7,  ///< TWSR TWS7 bit position.
                tws6 = 6,  ///< TWSR TWS6 bit position.
                tws5 = 5,  ///< TWSR TWS5 bit position.
                tws4 = 4,  ///< TWSR TWS4 bit position.
                tws3 = 3,  ///< TWSR TWS3 bit position.
                twps1 = 1, ///< TWSR TWPS1 bit position.
                twps0 = 0, ///< TWSR TWPS0 bit position.
            };
        }
        /** @brief Twar definitions. */
        namespace twar
        {
            /** @brief TWAR bit positions. */
            enum : uint8_t
            {
                twa6 = 7,  ///< TWAR TWA6 bit position.
                twa5 = 6,  ///< TWAR TWA5 bit position.
                twa4 = 5,  ///< TWAR TWA4 bit position.
                twa3 = 4,  ///< TWAR TWA3 bit position.
                twa2 = 3,  ///< TWAR TWA2 bit position.
                twa1 = 2,  ///< TWAR TWA1 bit position.
                twa0 = 1,  ///< TWAR TWA0 bit position.
                twgce = 0, ///< TWAR TWGCE bit position.
            };
        }
        /** @brief Twcr definitions. */
        namespace twcr
        {
            /** @brief TWCR bit positions. */
            enum : uint8_t
            {
                twint = 7, ///< TWCR TWINT bit position.
                twea = 6,  ///< TWCR TWEA bit position.
                twsta = 5, ///< TWCR TWSTA bit position.
                twsto = 4, ///< TWCR TWSTO bit position.
                twwc = 3,  ///< TWCR TWWC bit position.
                twen = 2,  ///< TWCR TWEN bit position.
                twie = 0,  ///< TWCR TWIE bit position.
            };
        }
        /** @brief Twamr definitions. */
        namespace twamr
        {
            /** @brief TWAMR bit positions. */
            enum : uint8_t
            {
                twam6 = 7, ///< TWAMR TWAM6 bit position.
                twam5 = 6, ///< TWAMR TWAM5 bit position.
                twam4 = 5, ///< TWAMR TWAM4 bit position.
                twam3 = 4, ///< TWAMR TWAM3 bit position.
                twam2 = 3, ///< TWAMR TWAM2 bit position.
                twam1 = 2, ///< TWAMR TWAM1 bit position.
                twam0 = 1, ///< TWAMR TWAM0 bit position.
            };
        }
        /** @brief Ucsr0a definitions. */
        namespace ucsr0a
        {
            /** @brief UCSR0A bit positions. */
            enum : uint8_t
            {
                rxc0 = 7,  ///< UCSR0A RXC0 bit position.
                txc0 = 6,  ///< UCSR0A TXC0 bit position.
                udre0 = 5, ///< UCSR0A UDRE0 bit position.
                fe0 = 4,   ///< UCSR0A FE0 bit position.
                dor0 = 3,  ///< UCSR0A DOR0 bit position.
                upe0 = 2,  ///< UCSR0A UPE0 bit position.
                u2x0 = 1,  ///< UCSR0A U2X0 bit position.
                mpcm0 = 0, ///< UCSR0A MPCM0 bit position.
            };
        }
        /** @brief Ucsr0b definitions. */
        namespace ucsr0b
        {
            /** @brief UCSR0B bit positions. */
            enum : uint8_t
            {
                rxcie0 = 7, ///< UCSR0B RXCIE0 bit position.
                txcie0 = 6, ///< UCSR0B TXCIE0 bit position.
                udrie0 = 5, ///< UCSR0B UDRIE0 bit position.
                rxen0 = 4,  ///< UCSR0B RXEN0 bit position.
                txen0 = 3,  ///< UCSR0B TXEN0 bit position.
                ucsz02 = 2, ///< UCSR0B UCSZ02 bit position.
                rxb80 = 1,  ///< UCSR0B RXB80 bit position.
                txb80 = 0,  ///< UCSR0B TXB80 bit position.
            };
        }
        /** @brief Ucsr0c definitions. */
        namespace ucsr0c
        {
            /** @brief UCSR0C bit positions. */
            enum : uint8_t
            {
                umsel01 = 7, ///< UCSR0C UMSEL01 bit position.
                umsel00 = 6, ///< UCSR0C UMSEL00 bit position.
                upm01 = 5,   ///< UCSR0C UPM01 bit position.
                upm00 = 4,   ///< UCSR0C UPM00 bit position.
                usbs0 = 3,   ///< UCSR0C USBS0 bit position.
                ucsz01 = 2,  ///< UCSR0C UCSZ01 bit position.
                ucsz00 = 1,  ///< UCSR0C UCSZ00 bit position.
                ucpol0 = 0,  ///< UCSR0C UCPOL0 bit position.
            };
        }
        /** @brief Ucsr1a definitions. */
        namespace ucsr1a
        {
            /** @brief UCSR1A bit positions. */
            enum : uint8_t
            {
                rxc1 = 7,  ///< UCSR1A RXC1 bit position.
                txc1 = 6,  ///< UCSR1A TXC1 bit position.
                udre1 = 5, ///< UCSR1A UDRE1 bit position.
                fe1 = 4,   ///< UCSR1A FE1 bit position.
                dor1 = 3,  ///< UCSR1A DOR1 bit position.
                upe1 = 2,  ///< UCSR1A UPE1 bit position.
                u2x1 = 1,  ///< UCSR1A U2X1 bit position.
                mpcm1 = 0, ///< UCSR1A MPCM1 bit position.
            };
        }
        /** @brief Ucsr1b definitions. */
        namespace ucsr1b
        {
            /** @brief UCSR1B bit positions. */
            enum : uint8_t
            {
                rxcie1 = 7, ///< UCSR1B RXCIE1 bit position.
                txcie1 = 6, ///< UCSR1B TXCIE1 bit position.
                udrie1 = 5, ///< UCSR1B UDRIE1 bit position.
                rxen1 = 4,  ///< UCSR1B RXEN1 bit position.
                txen1 = 3,  ///< UCSR1B TXEN1 bit position.
                ucsz12 = 2, ///< UCSR1B UCSZ12 bit position.
                rxb81 = 1,  ///< UCSR1B RXB81 bit position.
                txb81 = 0,  ///< UCSR1B TXB81 bit position.
            };
        }
        /** @brief Ucsr1c definitions. */
        namespace ucsr1c
        {
            /** @brief UCSR1C bit positions. */
            enum : uint8_t
            {
                umsel11 = 7, ///< UCSR1C UMSEL11 bit position.
                umsel10 = 6, ///< UCSR1C UMSEL10 bit position.
                upm11 = 5,   ///< UCSR1C UPM11 bit position.
                upm10 = 4,   ///< UCSR1C UPM10 bit position.
                usbs1 = 3,   ///< UCSR1C USBS1 bit position.
                ucsz11 = 2,  ///< UCSR1C UCSZ11 bit position.
                ucsz10 = 1,  ///< UCSR1C UCSZ10 bit position.
                ucpol1 = 0,  ///< UCSR1C UCPOL1 bit position.
            };
        }
        /** @brief Ucsr2a definitions. */
        namespace ucsr2a
        {
            /** @brief UCSR2A bit positions. */
            enum : uint8_t
            {
                rxc2 = 7,  ///< UCSR2A RXC2 bit position.
                txc2 = 6,  ///< UCSR2A TXC2 bit position.
                udre2 = 5, ///< UCSR2A UDRE2 bit position.
                fe2 = 4,   ///< UCSR2A FE2 bit position.
                dor2 = 3,  ///< UCSR2A DOR2 bit position.
                upe2 = 2,  ///< UCSR2A UPE2 bit position.
                u2x2 = 1,  ///< UCSR2A U2X2 bit position.
                mpcm2 = 0, ///< UCSR2A MPCM2 bit position.
            };
        }
        /** @brief Ucsr2b definitions. */
        namespace ucsr2b
        {
            /** @brief UCSR2B bit positions. */
            enum : uint8_t
            {
                rxcie2 = 7, ///< UCSR2B RXCIE2 bit position.
                txcie2 = 6, ///< UCSR2B TXCIE2 bit position.
                udrie2 = 5, ///< UCSR2B UDRIE2 bit position.
                rxen2 = 4,  ///< UCSR2B RXEN2 bit position.
                txen2 = 3,  ///< UCSR2B TXEN2 bit position.
                ucsz22 = 2, ///< UCSR2B UCSZ22 bit position.
                rxb82 = 1,  ///< UCSR2B RXB82 bit position.
                txb82 = 0,  ///< UCSR2B TXB82 bit position.
            };
        }
        /** @brief Ucsr2c definitions. */
        namespace ucsr2c
        {
            /** @brief UCSR2C bit positions. */
            enum : uint8_t
            {
                umsel21 = 7, ///< UCSR2C UMSEL21 bit position.
                umsel20 = 6, ///< UCSR2C UMSEL20 bit position.
                upm21 = 5,   ///< UCSR2C UPM21 bit position.
                upm20 = 4,   ///< UCSR2C UPM20 bit position.
                usbs2 = 3,   ///< UCSR2C USBS2 bit position.
                ucsz21 = 2,  ///< UCSR2C UCSZ21 bit position.
                ucsz20 = 1,  ///< UCSR2C UCSZ20 bit position.
                ucpol2 = 0,  ///< UCSR2C UCPOL2 bit position.
            };
        }
        /** @brief Pinh definitions. */
        namespace pinh
        {
            /** @brief PINH bit positions. */
            enum : uint8_t
            {
                pinh7 = 7, ///< PINH PINH7 bit position.
                pinh6 = 6, ///< PINH PINH6 bit position.
                pinh5 = 5, ///< PINH PINH5 bit position.
                pinh4 = 4, ///< PINH PINH4 bit position.
                pinh3 = 3, ///< PINH PINH3 bit position.
                pinh2 = 2, ///< PINH PINH2 bit position.
                pinh1 = 1, ///< PINH PINH1 bit position.
                pinh0 = 0, ///< PINH PINH0 bit position.
            };
        }
        /** @brief Ddrh definitions. */
        namespace ddrh
        {
            /** @brief DDRH bit positions. */
            enum : uint8_t
            {
                ddh7 = 7, ///< DDRH DDH7 bit position.
                ddh6 = 6, ///< DDRH DDH6 bit position.
                ddh5 = 5, ///< DDRH DDH5 bit position.
                ddh4 = 4, ///< DDRH DDH4 bit position.
                ddh3 = 3, ///< DDRH DDH3 bit position.
                ddh2 = 2, ///< DDRH DDH2 bit position.
                ddh1 = 1, ///< DDRH DDH1 bit position.
                ddh0 = 0, ///< DDRH DDH0 bit position.
            };
        }
        /** @brief Porth definitions. */
        namespace porth
        {
            /** @brief PORTH bit positions. */
            enum : uint8_t
            {
                porth7 = 7, ///< PORTH PORTH7 bit position.
                porth6 = 6, ///< PORTH PORTH6 bit position.
                porth5 = 5, ///< PORTH PORTH5 bit position.
                porth4 = 4, ///< PORTH PORTH4 bit position.
                porth3 = 3, ///< PORTH PORTH3 bit position.
                porth2 = 2, ///< PORTH PORTH2 bit position.
                porth1 = 1, ///< PORTH PORTH1 bit position.
                porth0 = 0, ///< PORTH PORTH0 bit position.
            };
        }
        /** @brief Pinj definitions. */
        namespace pinj
        {
            /** @brief PINJ bit positions. */
            enum : uint8_t
            {
                pinj7 = 7, ///< PINJ PINJ7 bit position.
                pinj6 = 6, ///< PINJ PINJ6 bit position.
                pinj5 = 5, ///< PINJ PINJ5 bit position.
                pinj4 = 4, ///< PINJ PINJ4 bit position.
                pinj3 = 3, ///< PINJ PINJ3 bit position.
                pinj2 = 2, ///< PINJ PINJ2 bit position.
                pinj1 = 1, ///< PINJ PINJ1 bit position.
                pinj0 = 0, ///< PINJ PINJ0 bit position.
            };
        }
        /** @brief Ddrj definitions. */
        namespace ddrj
        {
            /** @brief DDRJ bit positions. */
            enum : uint8_t
            {
                ddj7 = 7, ///< DDRJ DDJ7 bit position.
                ddj6 = 6, ///< DDRJ DDJ6 bit position.
                ddj5 = 5, ///< DDRJ DDJ5 bit position.
                ddj4 = 4, ///< DDRJ DDJ4 bit position.
                ddj3 = 3, ///< DDRJ DDJ3 bit position.
                ddj2 = 2, ///< DDRJ DDJ2 bit position.
                ddj1 = 1, ///< DDRJ DDJ1 bit position.
                ddj0 = 0, ///< DDRJ DDJ0 bit position.
            };
        }
        /** @brief Portj definitions. */
        namespace portj
        {
            /** @brief PORTJ bit positions. */
            enum : uint8_t
            {
                portj7 = 7, ///< PORTJ PORTJ7 bit position.
                portj6 = 6, ///< PORTJ PORTJ6 bit position.
                portj5 = 5, ///< PORTJ PORTJ5 bit position.
                portj4 = 4, ///< PORTJ PORTJ4 bit position.
                portj3 = 3, ///< PORTJ PORTJ3 bit position.
                portj2 = 2, ///< PORTJ PORTJ2 bit position.
                portj1 = 1, ///< PORTJ PORTJ1 bit position.
                portj0 = 0, ///< PORTJ PORTJ0 bit position.
            };
        }
        /** @brief Pink definitions. */
        namespace pink
        {
            /** @brief PINK bit positions. */
            enum : uint8_t
            {
                pink7 = 7, ///< PINK PINK7 bit position.
                pink6 = 6, ///< PINK PINK6 bit position.
                pink5 = 5, ///< PINK PINK5 bit position.
                pink4 = 4, ///< PINK PINK4 bit position.
                pink3 = 3, ///< PINK PINK3 bit position.
                pink2 = 2, ///< PINK PINK2 bit position.
                pink1 = 1, ///< PINK PINK1 bit position.
                pink0 = 0, ///< PINK PINK0 bit position.
            };
        }
        /** @brief Ddrk definitions. */
        namespace ddrk
        {
            /** @brief DDRK bit positions. */
            enum : uint8_t
            {
                ddk7 = 7, ///< DDRK DDK7 bit position.
                ddk6 = 6, ///< DDRK DDK6 bit position.
                ddk5 = 5, ///< DDRK DDK5 bit position.
                ddk4 = 4, ///< DDRK DDK4 bit position.
                ddk3 = 3, ///< DDRK DDK3 bit position.
                ddk2 = 2, ///< DDRK DDK2 bit position.
                ddk1 = 1, ///< DDRK DDK1 bit position.
                ddk0 = 0, ///< DDRK DDK0 bit position.
            };
        }
        /** @brief Portk definitions. */
        namespace portk
        {
            /** @brief PORTK bit positions. */
            enum : uint8_t
            {
                portk7 = 7, ///< PORTK PORTK7 bit position.
                portk6 = 6, ///< PORTK PORTK6 bit position.
                portk5 = 5, ///< PORTK PORTK5 bit position.
                portk4 = 4, ///< PORTK PORTK4 bit position.
                portk3 = 3, ///< PORTK PORTK3 bit position.
                portk2 = 2, ///< PORTK PORTK2 bit position.
                portk1 = 1, ///< PORTK PORTK1 bit position.
                portk0 = 0, ///< PORTK PORTK0 bit position.
            };
        }
        /** @brief Pinl definitions. */
        namespace pinl
        {
            /** @brief PINL bit positions. */
            enum : uint8_t
            {
                pinl7 = 7, ///< PINL PINL7 bit position.
                pinl6 = 6, ///< PINL PINL6 bit position.
                pinl5 = 5, ///< PINL PINL5 bit position.
                pinl4 = 4, ///< PINL PINL4 bit position.
                pinl3 = 3, ///< PINL PINL3 bit position.
                pinl2 = 2, ///< PINL PINL2 bit position.
                pinl1 = 1, ///< PINL PINL1 bit position.
                pinl0 = 0, ///< PINL PINL0 bit position.
            };
        }
        /** @brief Ddrl definitions. */
        namespace ddrl
        {
            /** @brief DDRL bit positions. */
            enum : uint8_t
            {
                ddl7 = 7, ///< DDRL DDL7 bit position.
                ddl6 = 6, ///< DDRL DDL6 bit position.
                ddl5 = 5, ///< DDRL DDL5 bit position.
                ddl4 = 4, ///< DDRL DDL4 bit position.
                ddl3 = 3, ///< DDRL DDL3 bit position.
                ddl2 = 2, ///< DDRL DDL2 bit position.
                ddl1 = 1, ///< DDRL DDL1 bit position.
                ddl0 = 0, ///< DDRL DDL0 bit position.
            };
        }
        /** @brief Portl definitions. */
        namespace portl
        {
            /** @brief PORTL bit positions. */
            enum : uint8_t
            {
                portl7 = 7, ///< PORTL PORTL7 bit position.
                portl6 = 6, ///< PORTL PORTL6 bit position.
                portl5 = 5, ///< PORTL PORTL5 bit position.
                portl4 = 4, ///< PORTL PORTL4 bit position.
                portl3 = 3, ///< PORTL PORTL3 bit position.
                portl2 = 2, ///< PORTL PORTL2 bit position.
                portl1 = 1, ///< PORTL PORTL1 bit position.
                portl0 = 0, ///< PORTL PORTL0 bit position.
            };
        }
        /** @brief Tccr5a definitions. */
        namespace tccr5a
        {
            /** @brief TCCR5A bit positions. */
            enum : uint8_t
            {
                com5a1 = 7, ///< TCCR5A COM5A1 bit position.
                com5a0 = 6, ///< TCCR5A COM5A0 bit position.
                com5b1 = 5, ///< TCCR5A COM5B1 bit position.
                com5b0 = 4, ///< TCCR5A COM5B0 bit position.
                com5c1 = 3, ///< TCCR5A COM5C1 bit position.
                com5c0 = 2, ///< TCCR5A COM5C0 bit position.
                wgm51 = 1,  ///< TCCR5A WGM51 bit position.
                wgm50 = 0,  ///< TCCR5A WGM50 bit position.
            };
        }
        /** @brief Tccr5b definitions. */
        namespace tccr5b
        {
            /** @brief TCCR5B bit positions. */
            enum : uint8_t
            {
                icnc5 = 7, ///< TCCR5B ICNC5 bit position.
                ices5 = 6, ///< TCCR5B ICES5 bit position.
                wgm53 = 4, ///< TCCR5B WGM53 bit position.
                wgm52 = 3, ///< TCCR5B WGM52 bit position.
                cs52 = 2,  ///< TCCR5B CS52 bit position.
                cs51 = 1,  ///< TCCR5B CS51 bit position.
                cs50 = 0,  ///< TCCR5B CS50 bit position.
            };
        }
        /** @brief Tccr5c definitions. */
        namespace tccr5c
        {
            /** @brief TCCR5C bit positions. */
            enum : uint8_t
            {
                foc5a = 7, ///< TCCR5C FOC5A bit position.
                foc5b = 6, ///< TCCR5C FOC5B bit position.
                foc5c = 5, ///< TCCR5C FOC5C bit position.
            };
        }
        /** @brief Ucsr3a definitions. */
        namespace ucsr3a
        {
            /** @brief UCSR3A bit positions. */
            enum : uint8_t
            {
                rxc3 = 7,  ///< UCSR3A RXC3 bit position.
                txc3 = 6,  ///< UCSR3A TXC3 bit position.
                udre3 = 5, ///< UCSR3A UDRE3 bit position.
                fe3 = 4,   ///< UCSR3A FE3 bit position.
                dor3 = 3,  ///< UCSR3A DOR3 bit position.
                upe3 = 2,  ///< UCSR3A UPE3 bit position.
                u2x3 = 1,  ///< UCSR3A U2X3 bit position.
                mpcm3 = 0, ///< UCSR3A MPCM3 bit position.
            };
        }
        /** @brief Ucsr3b definitions. */
        namespace ucsr3b
        {
            /** @brief UCSR3B bit positions. */
            enum : uint8_t
            {
                rxcie3 = 7, ///< UCSR3B RXCIE3 bit position.
                txcie3 = 6, ///< UCSR3B TXCIE3 bit position.
                udrie3 = 5, ///< UCSR3B UDRIE3 bit position.
                rxen3 = 4,  ///< UCSR3B RXEN3 bit position.
                txen3 = 3,  ///< UCSR3B TXEN3 bit position.
                ucsz32 = 2, ///< UCSR3B UCSZ32 bit position.
                rxb83 = 1,  ///< UCSR3B RXB83 bit position.
                txb83 = 0,  ///< UCSR3B TXB83 bit position.
            };
        }
        /** @brief Ucsr3c definitions. */
        namespace ucsr3c
        {
            /** @brief UCSR3C bit positions. */
            enum : uint8_t
            {
                umsel31 = 7, ///< UCSR3C UMSEL31 bit position.
                umsel30 = 6, ///< UCSR3C UMSEL30 bit position.
                upm31 = 5,   ///< UCSR3C UPM31 bit position.
                upm30 = 4,   ///< UCSR3C UPM30 bit position.
                usbs3 = 3,   ///< UCSR3C USBS3 bit position.
                ucsz31 = 2,  ///< UCSR3C UCSZ31 bit position.
                ucsz30 = 1,  ///< UCSR3C UCSZ30 bit position.
                ucpol3 = 0,  ///< UCSR3C UCPOL3 bit position.
            };
        }
    }
}

#endif
