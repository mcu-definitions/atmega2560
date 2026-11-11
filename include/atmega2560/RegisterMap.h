/**
 * @file RegisterMap.h
 * @brief Data-space addresses of ATmega2560 peripheral registers.
 */

#ifndef ATMEGA2560_DEFINITIONS_REGISTERMAP_H
#define ATMEGA2560_DEFINITIONS_REGISTERMAP_H

#include <stdint.h>
#include "Config.h"

/** @brief ATmega2560 hardware definitions. */
namespace atmega2560
{
    /** @brief Register map definitions. */
    namespace register_map
    {
        /** @brief Memory-mapped I/O ranges. */
        enum : uint16_t
        {
            register_file_start = 0x0000,  ///< register file start.
            register_file_end = 0x001F,    ///< register file end.
            io_space_start = 0x0020,       ///< io space start.
            io_space_end = 0x005F,         ///< io space end.
            extended_io_start = 0x0060,    ///< extended io start.
            extended_io_end = 0x01FF,      ///< extended io end.
            sram_start = 0x0200,           ///< sram start.
            sram_end = 0x21FF,             ///< sram end.
            io_offset = 0x20,              ///< io offset.
            sbi_cbi_last_address = 0x003F, ///< sbi cbi last address.
            in_out_last_address = 0x005F,  ///< in out last address.
            invalid_io_address = 0xFFFF,   ///< invalid io address.
        };
        /** @brief Peripheral register addresses. */
        enum : uint16_t
        {
            PINA = 0x020,   ///< Data-space address 0x020.
            DDRA = 0x021,   ///< Data-space address 0x021.
            PORTA = 0x022,  ///< Data-space address 0x022.
            PINB = 0x023,   ///< Data-space address 0x023.
            DDRB = 0x024,   ///< Data-space address 0x024.
            PORTB = 0x025,  ///< Data-space address 0x025.
            PINC = 0x026,   ///< Data-space address 0x026.
            DDRC = 0x027,   ///< Data-space address 0x027.
            PORTC = 0x028,  ///< Data-space address 0x028.
            PIND = 0x029,   ///< Data-space address 0x029.
            DDRD = 0x02A,   ///< Data-space address 0x02A.
            PORTD = 0x02B,  ///< Data-space address 0x02B.
            PINE = 0x02C,   ///< Data-space address 0x02C.
            DDRE = 0x02D,   ///< Data-space address 0x02D.
            PORTE = 0x02E,  ///< Data-space address 0x02E.
            PINF = 0x02F,   ///< Data-space address 0x02F.
            DDRF = 0x030,   ///< Data-space address 0x030.
            PORTF = 0x031,  ///< Data-space address 0x031.
            PING = 0x032,   ///< Data-space address 0x032.
            DDRG = 0x033,   ///< Data-space address 0x033.
            PORTG = 0x034,  ///< Data-space address 0x034.
            TIFR0 = 0x035,  ///< Data-space address 0x035.
            TIFR1 = 0x036,  ///< Data-space address 0x036.
            TIFR2 = 0x037,  ///< Data-space address 0x037.
            TIFR3 = 0x038,  ///< Data-space address 0x038.
            TIFR4 = 0x039,  ///< Data-space address 0x039.
            TIFR5 = 0x03A,  ///< Data-space address 0x03A.
            PCIFR = 0x03B,  ///< Data-space address 0x03B.
            EIFR = 0x03C,   ///< Data-space address 0x03C.
            EIMSK = 0x03D,  ///< Data-space address 0x03D.
            GPIOR0 = 0x03E, ///< Data-space address 0x03E.
            EECR = 0x03F,   ///< Data-space address 0x03F.
            EEDR = 0x040,   ///< Data-space address 0x040.
            EEARL = 0x041,  ///< Data-space address 0x041.
            EEARH = 0x042,  ///< Data-space address 0x042.
            GTCCR = 0x043,  ///< Data-space address 0x043.
            TCCR0A = 0x044, ///< Data-space address 0x044.
            TCCR0B = 0x045, ///< Data-space address 0x045.
            TCNT0 = 0x046,  ///< Data-space address 0x046.
            OCR0A = 0x047,  ///< Data-space address 0x047.
            OCR0B = 0x048,  ///< Data-space address 0x048.
            GPIOR1 = 0x04A, ///< Data-space address 0x04A.
            GPIOR2 = 0x04B, ///< Data-space address 0x04B.
            SPCR = 0x04C,   ///< Data-space address 0x04C.
            SPSR = 0x04D,   ///< Data-space address 0x04D.
            SPDR = 0x04E,   ///< Data-space address 0x04E.
            ACSR = 0x050,   ///< Data-space address 0x050.
            OCDR = 0x051,   ///< Data-space address 0x051.
            SMCR = 0x053,   ///< Data-space address 0x053.
            MCUSR = 0x054,  ///< Data-space address 0x054.
            MCUCR = 0x055,  ///< Data-space address 0x055.
            SPMCSR = 0x057, ///< Data-space address 0x056.
            RAMPZ = 0x05B,  ///< Data-space address 0x05B.
            EIND = 0x05C,   ///< Data-space address 0x05C.
            SPL = 0x05D,    ///< Data-space address 0x05D.
            SPH = 0x05E,    ///< Data-space address 0x05E.
            SREG = 0x05F,   ///< Data-space address 0x05F.
            WDTCSR = 0x060, ///< Data-space address 0x060.
            CLKPR = 0x061,  ///< Data-space address 0x061.
            PRR0 = 0x064,   ///< Data-space address 0x064.
            PRR1 = 0x065,   ///< Data-space address 0x065.
            OSCCAL = 0x066, ///< Data-space address 0x066.
            PCICR = 0x068,  ///< Data-space address 0x068.
            EICRA = 0x069,  ///< Data-space address 0x069.
            EICRB = 0x06A,  ///< Data-space address 0x06A.
            PCMSK0 = 0x06B, ///< Data-space address 0x06C.
            PCMSK1 = 0x06C, ///< Data-space address 0x06D.
            PCMSK2 = 0x06D, ///< Data-space address 0x06E.
            TIMSK0 = 0x06E, ///< Data-space address 0x06F.
            TIMSK1 = 0x06F, ///< Data-space address 0x070.
            TIMSK2 = 0x070, ///< Data-space address 0x071.
            TIMSK3 = 0x071, ///< Data-space address 0x072.
            TIMSK4 = 0x072, ///< Data-space address 0x073.
            TIMSK5 = 0x073, ///< Data-space address 0x074.
            XMCRA = 0x074,  ///< Data-space address 0x075.
            XMCRB = 0x075,  ///< Data-space address 0x076.
            ADCL = 0x078,   ///< Data-space address 0x078.
            ADCH = 0x079,   ///< Data-space address 0x079.
            ADCSRA = 0x07A, ///< Data-space address 0x07A.
            ADCSRB = 0x07B, ///< Data-space address 0x07B.
            ADMUX = 0x07C,  ///< Data-space address 0x07C.
            DIDR2 = 0x07D,  ///< Data-space address 0x07D.
            DIDR0 = 0x07E,  ///< Data-space address 0x07E.
            DIDR1 = 0x07F,  ///< Data-space address 0x07F.
            TCCR1A = 0x080, ///< Data-space address 0x080.
            TCCR1B = 0x081, ///< Data-space address 0x081.
            TCCR1C = 0x082, ///< Data-space address 0x082.
            TCNT1L = 0x084, ///< Data-space address 0x084.
            TCNT1H = 0x085, ///< Data-space address 0x085.
            ICR1L = 0x086,  ///< Data-space address 0x086.
            ICR1H = 0x087,  ///< Data-space address 0x087.
            OCR1AL = 0x088, ///< Data-space address 0x088.
            OCR1AH = 0x089, ///< Data-space address 0x089.
            OCR1BL = 0x08A, ///< Data-space address 0x08A.
            OCR1BH = 0x08B, ///< Data-space address 0x08B.
            OCR1CL = 0x08C, ///< Data-space address 0x08C.
            OCR1CH = 0x08D, ///< Data-space address 0x08D.
            TCCR3A = 0x090, ///< Data-space address 0x090.
            TCCR3B = 0x091, ///< Data-space address 0x091.
            TCCR3C = 0x092, ///< Data-space address 0x092.
            TCNT3L = 0x094, ///< Data-space address 0x094.
            TCNT3H = 0x095, ///< Data-space address 0x095.
            ICR3L = 0x096,  ///< Data-space address 0x096.
            ICR3H = 0x097,  ///< Data-space address 0x097.
            OCR3AL = 0x098, ///< Data-space address 0x098.
            OCR3AH = 0x099, ///< Data-space address 0x099.
            OCR3BL = 0x09A, ///< Data-space address 0x09A.
            OCR3BH = 0x09B, ///< Data-space address 0x09B.
            OCR3CL = 0x09C, ///< Data-space address 0x09C.
            OCR3CH = 0x09D, ///< Data-space address 0x09D.
            TCCR4A = 0x0A0, ///< Data-space address 0x0A0.
            TCCR4B = 0x0A1, ///< Data-space address 0x0A1.
            TCCR4C = 0x0A2, ///< Data-space address 0x0A2.
            TCNT4L = 0x0A4, ///< Data-space address 0x0A4.
            TCNT4H = 0x0A5, ///< Data-space address 0x0A5.
            ICR4L = 0x0A6,  ///< Data-space address 0x0A6.
            ICR4H = 0x0A7,  ///< Data-space address 0x0A7.
            OCR4AL = 0x0A8, ///< Data-space address 0x0A8.
            OCR4AH = 0x0A9, ///< Data-space address 0x0A9.
            OCR4BL = 0x0AA, ///< Data-space address 0x0AA.
            OCR4BH = 0x0AB, ///< Data-space address 0x0AB.
            OCR4CL = 0x0AC, ///< Data-space address 0x0AC.
            OCR4CH = 0x0AD, ///< Data-space address 0x0AD.
            TCCR2A = 0x0B0, ///< Data-space address 0x0B0.
            TCCR2B = 0x0B1, ///< Data-space address 0x0B1.
            TCNT2 = 0x0B2,  ///< Data-space address 0x0B2.
            OCR2A = 0x0B3,  ///< Data-space address 0x0B3.
            OCR2B = 0x0B4,  ///< Data-space address 0x0B4.
            ASSR = 0x0B6,   ///< Data-space address 0x0B6.
            TWBR = 0x0B8,   ///< Data-space address 0x0B8.
            TWSR = 0x0B9,   ///< Data-space address 0x0B9.
            TWAR = 0x0BA,   ///< Data-space address 0x0BA.
            TWDR = 0x0BB,   ///< Data-space address 0x0BB.
            TWCR = 0x0BC,   ///< Data-space address 0x0BC.
            TWAMR = 0x0BD,  ///< Data-space address 0x0BD.
            UCSR0A = 0x0C0, ///< Data-space address 0x0C0.
            UCSR0B = 0x0C1, ///< Data-space address 0x0C1.
            UCSR0C = 0x0C2, ///< Data-space address 0x0C2.
            UBRR0L = 0x0C4, ///< Data-space address 0x0C4.
            UBRR0H = 0x0C5, ///< Data-space address 0x0C5.
            UDR0 = 0x0C6,   ///< Data-space address 0x0C6.
            UCSR1A = 0x0C8, ///< Data-space address 0x0C8.
            UCSR1B = 0x0C9, ///< Data-space address 0x0C9.
            UCSR1C = 0x0CA, ///< Data-space address 0x0CA.
            UBRR1L = 0x0CC, ///< Data-space address 0x0CC.
            UBRR1H = 0x0CD, ///< Data-space address 0x0CD.
            UDR1 = 0x0CE,   ///< Data-space address 0x0CE.
            UCSR2A = 0x0D0, ///< Data-space address 0x0D0.
            UCSR2B = 0x0D1, ///< Data-space address 0x0D1.
            UCSR2C = 0x0D2, ///< Data-space address 0x0D2.
            UBRR2L = 0x0D4, ///< Data-space address 0x0D4.
            UBRR2H = 0x0D5, ///< Data-space address 0x0D5.
            UDR2 = 0x0D6,   ///< Data-space address 0x0D6.
            PINH = 0x100,   ///< Data-space address 0x100.
            DDRH = 0x101,   ///< Data-space address 0x101.
            PORTH = 0x102,  ///< Data-space address 0x102.
            PINJ = 0x103,   ///< Data-space address 0x103.
            DDRJ = 0x104,   ///< Data-space address 0x104.
            PORTJ = 0x105,  ///< Data-space address 0x105.
            PINK = 0x106,   ///< Data-space address 0x106.
            DDRK = 0x107,   ///< Data-space address 0x107.
            PORTK = 0x108,  ///< Data-space address 0x108.
            PINL = 0x109,   ///< Data-space address 0x109.
            DDRL = 0x10A,   ///< Data-space address 0x10A.
            PORTL = 0x10B,  ///< Data-space address 0x10B.
            TCCR5A = 0x120, ///< Data-space address 0x120.
            TCCR5B = 0x121, ///< Data-space address 0x121.
            TCCR5C = 0x122, ///< Data-space address 0x122.
            TCNT5L = 0x124, ///< Data-space address 0x124.
            TCNT5H = 0x125, ///< Data-space address 0x125.
            ICR5L = 0x126,  ///< Data-space address 0x126.
            ICR5H = 0x127,  ///< Data-space address 0x127.
            OCR5AL = 0x128, ///< Data-space address 0x128.
            OCR5AH = 0x129, ///< Data-space address 0x129.
            OCR5BL = 0x12A, ///< Data-space address 0x12A.
            OCR5BH = 0x12B, ///< Data-space address 0x12B.
            OCR5CL = 0x12C, ///< Data-space address 0x12C.
            OCR5CH = 0x12D, ///< Data-space address 0x12D.
            UCSR3A = 0x130, ///< Data-space address 0x130.
            UCSR3B = 0x131, ///< Data-space address 0x131.
            UCSR3C = 0x132, ///< Data-space address 0x132.
            UBRR3L = 0x134, ///< Data-space address 0x134.
            UBRR3H = 0x135, ///< Data-space address 0x135.
            UDR3 = 0x136,   ///< Data-space address 0x136.
        };
    }
}

#endif
