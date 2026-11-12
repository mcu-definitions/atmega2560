/**
 * @file RegisterMap.h
 * @brief Data-space addresses of ATmega2560 peripheral registers.
 */

#ifndef ATMEGA2560_DEFINITIONS_REGISTER_MAP_H
#define ATMEGA2560_DEFINITIONS_REGISTER_MAP_H

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
        enum Register : uint16_t
        {
            PINA = 0x020,   ///< Input pin states.
            DDRA = 0x021,   ///< Data direction register.
            PORTA = 0x022,  ///< Output latch and pull-up control.
            PINB = 0x023,   ///< Input pin states.
            DDRB = 0x024,   ///< Data direction.
            PORTB = 0x025,  ///< Output latch / pull-up.
            PINC = 0x026,   ///< Input pin states.
            DDRC = 0x027,   ///< Data direction.
            PORTC = 0x028,  ///< Output latch / pull-up.
            PIND = 0x029,   ///< Input pin states.
            DDRD = 0x02A,   ///< Data direction.
            PORTD = 0x02B,  ///< Output latch / pull-up.
            PINE = 0x02C,   ///< Input pin states.
            DDRE = 0x02D,   ///< Data direction register.
            PORTE = 0x02E,  ///< Output latch and pull-up control.
            PINF = 0x02F,   ///< Input pin states.
            DDRF = 0x030,   ///< Data direction register.
            PORTF = 0x031,  ///< Output latch and pull-up control.
            PING = 0x032,   ///< Input pin states.
            DDRG = 0x033,   ///< Data direction register.
            PORTG = 0x034,  ///< Output latch and pull-up control.
            TIFR0 = 0x035,  ///< Timer interrupt flags.
            TIFR1 = 0x036,  ///< Timer interrupt flags.
            TIFR2 = 0x037,  ///< Timer interrupt flags.
            TIFR3 = 0x038,  ///< Timer interrupt flags.
            TIFR4 = 0x039,  ///< Timer interrupt flags.
            TIFR5 = 0x03A,  ///< Timer interrupt flags.
            PCIFR = 0x03B,  ///< Pin-change interrupt flags.
            EIFR = 0x03C,   ///< External interrupt flags.
            EIMSK = 0x03D,  ///< External interrupt mask.
            GPIOR0 = 0x03E, ///< General-purpose I/O register.
            EECR = 0x03F,   ///< EEPROM control.
            EEDR = 0x040,   ///< EEPROM data.
            EEARL = 0x041,  ///< EEPROM address.
            EEARH = 0x042,  ///< EEPROM address.
            GTCCR = 0x043,  ///< General timer control.
            TCCR0A = 0x044, ///< Timer control.
            TCCR0B = 0x045, ///< Timer control.
            TCNT0 = 0x046,  ///< Timer counter.
            OCR0A = 0x047,  ///< Output compare register.
            OCR0B = 0x048,  ///< Output compare register.
            GPIOR1 = 0x04A, ///< General-purpose I/O register.
            GPIOR2 = 0x04B, ///< General-purpose I/O register.
            SPCR = 0x04C,   ///< SPI control.
            SPSR = 0x04D,   ///< SPI status.
            SPDR = 0x04E,   ///< SPI data.
            ACSR = 0x050,   ///< Analog comparator control/status.
            OCDR = 0x051,   ///< Register at data-space address 0x051.
            SMCR = 0x053,   ///< Sleep-mode control.
            MCUSR = 0x054,  ///< MCU status / reset flags.
            MCUCR = 0x055,  ///< MCU control.
            SPMCSR = 0x057, ///< Flash self-programming control.
            RAMPZ = 0x05B,  ///< Register at data-space address 0x05B.
            EIND = 0x05C,   ///< Register at data-space address 0x05C.
            SPL = 0x05D,    ///< Stack pointer low byte.
            SPH = 0x05E,    ///< Stack pointer high byte.
            SREG = 0x05F,   ///< CPU status register.
            WDTCSR = 0x060, ///< Watchdog control/status.
            CLKPR = 0x061,  ///< Clock prescaler.
            PRR0 = 0x064,   ///< Peripheral power reduction.
            PRR1 = 0x065,   ///< Peripheral power reduction.
            OSCCAL = 0x066, ///< Internal oscillator calibration.
            PCICR = 0x068,  ///< Pin-change interrupt control.
            EICRA = 0x069,  ///< External interrupt control A.
            EICRB = 0x06A,  ///< External interrupt control.
            PCMSK0 = 0x06B, ///< Pin-change interrupt mask.
            PCMSK1 = 0x06C, ///< Pin-change interrupt mask.
            PCMSK2 = 0x06D, ///< Pin-change interrupt mask.
            TIMSK0 = 0x06E, ///< Timer interrupt mask.
            TIMSK1 = 0x06F, ///< Timer interrupt mask.
            TIMSK2 = 0x070, ///< Timer interrupt mask.
            TIMSK3 = 0x071, ///< Timer interrupt mask.
            TIMSK4 = 0x072, ///< Timer interrupt mask.
            TIMSK5 = 0x073, ///< Timer interrupt mask.
            XMCRA = 0x074,  ///< External memory control.
            XMCRB = 0x075,  ///< External memory control.
            ADCL = 0x078,   ///< ADC result low byte.
            ADCH = 0x079,   ///< ADC result high byte.
            ADCSRA = 0x07A, ///< ADC control/status A.
            ADCSRB = 0x07B, ///< ADC control/status B.
            ADMUX = 0x07C,  ///< ADC multiplexer selection.
            DIDR2 = 0x07D,  ///< Digital input disable.
            DIDR0 = 0x07E,  ///< Digital-input disable.
            DIDR1 = 0x07F,  ///< Digital-input disable.
            TCCR1A = 0x080, ///< Timer control.
            TCCR1B = 0x081, ///< Timer control.
            TCCR1C = 0x082, ///< Timer control.
            TCNT1L = 0x084, ///< Timer counter.
            TCNT1H = 0x085, ///< Timer counter.
            ICR1L = 0x086,  ///< Input capture register.
            ICR1H = 0x087,  ///< Input capture register.
            OCR1AL = 0x088, ///< Output compare register.
            OCR1AH = 0x089, ///< Output compare register.
            OCR1BL = 0x08A, ///< Output compare register.
            OCR1BH = 0x08B, ///< Output compare register.
            OCR1CL = 0x08C, ///< Output compare register.
            OCR1CH = 0x08D, ///< Output compare register.
            TCCR3A = 0x090, ///< Timer control register.
            TCCR3B = 0x091, ///< Timer control register.
            TCCR3C = 0x092, ///< Timer control register.
            TCNT3L = 0x094, ///< Timer counter register.
            TCNT3H = 0x095, ///< Timer counter register.
            ICR3L = 0x096,  ///< Input capture register.
            ICR3H = 0x097,  ///< Input capture register.
            OCR3AL = 0x098, ///< Output compare register.
            OCR3AH = 0x099, ///< Output compare register.
            OCR3BL = 0x09A, ///< Output compare register.
            OCR3BH = 0x09B, ///< Output compare register.
            OCR3CL = 0x09C, ///< Output compare register.
            OCR3CH = 0x09D, ///< Output compare register.
            TCCR4A = 0x0A0, ///< Timer control register.
            TCCR4B = 0x0A1, ///< Timer control register.
            TCCR4C = 0x0A2, ///< Timer control register.
            TCNT4L = 0x0A4, ///< Timer counter register.
            TCNT4H = 0x0A5, ///< Timer counter register.
            ICR4L = 0x0A6,  ///< Input capture register.
            ICR4H = 0x0A7,  ///< Input capture register.
            OCR4AL = 0x0A8, ///< Output compare register.
            OCR4AH = 0x0A9, ///< Output compare register.
            OCR4BL = 0x0AA, ///< Output compare register.
            OCR4BH = 0x0AB, ///< Output compare register.
            OCR4CL = 0x0AC, ///< Output compare register.
            OCR4CH = 0x0AD, ///< Output compare register.
            TCCR2A = 0x0B0, ///< Timer control.
            TCCR2B = 0x0B1, ///< Timer control.
            TCNT2 = 0x0B2,  ///< Timer counter.
            OCR2A = 0x0B3,  ///< Output compare register.
            OCR2B = 0x0B4,  ///< Output compare register.
            ASSR = 0x0B6,   ///< Asynchronous timer status.
            TWBR = 0x0B8,   ///< TWI bit-rate.
            TWSR = 0x0B9,   ///< TWI status.
            TWAR = 0x0BA,   ///< TWI address.
            TWDR = 0x0BB,   ///< TWI data.
            TWCR = 0x0BC,   ///< TWI control.
            TWAMR = 0x0BD,  ///< TWI address mask.
            UCSR0A = 0x0C0, ///< USART control/status.
            UCSR0B = 0x0C1, ///< USART control/status.
            UCSR0C = 0x0C2, ///< USART control/status.
            UBRR0L = 0x0C4, ///< USART baud-rate.
            UBRR0H = 0x0C5, ///< USART baud-rate.
            UDR0 = 0x0C6,   ///< USART data.
            UCSR1A = 0x0C8, ///< USART control and status.
            UCSR1B = 0x0C9, ///< USART control and status.
            UCSR1C = 0x0CA, ///< USART control and status.
            UBRR1L = 0x0CC, ///< USART baud-rate register.
            UBRR1H = 0x0CD, ///< USART baud-rate register.
            UDR1 = 0x0CE,   ///< USART data register.
            UCSR2A = 0x0D0, ///< USART control and status.
            UCSR2B = 0x0D1, ///< USART control and status.
            UCSR2C = 0x0D2, ///< USART control and status.
            UBRR2L = 0x0D4, ///< USART baud-rate register.
            UBRR2H = 0x0D5, ///< USART baud-rate register.
            UDR2 = 0x0D6,   ///< USART data register.
            PINH = 0x100,   ///< Input pin states.
            DDRH = 0x101,   ///< Data direction register.
            PORTH = 0x102,  ///< Output latch and pull-up control.
            PINJ = 0x103,   ///< Input pin states.
            DDRJ = 0x104,   ///< Data direction register.
            PORTJ = 0x105,  ///< Output latch and pull-up control.
            PINK = 0x106,   ///< Input pin states.
            DDRK = 0x107,   ///< Data direction register.
            PORTK = 0x108,  ///< Output latch and pull-up control.
            PINL = 0x109,   ///< Input pin states.
            DDRL = 0x10A,   ///< Data direction register.
            PORTL = 0x10B,  ///< Output latch and pull-up control.
            TCCR5A = 0x120, ///< Timer control register.
            TCCR5B = 0x121, ///< Timer control register.
            TCCR5C = 0x122, ///< Timer control register.
            TCNT5L = 0x124, ///< Timer counter register.
            TCNT5H = 0x125, ///< Timer counter register.
            ICR5L = 0x126,  ///< Input capture register.
            ICR5H = 0x127,  ///< Input capture register.
            OCR5AL = 0x128, ///< Output compare register.
            OCR5AH = 0x129, ///< Output compare register.
            OCR5BL = 0x12A, ///< Output compare register.
            OCR5BH = 0x12B, ///< Output compare register.
            OCR5CL = 0x12C, ///< Output compare register.
            OCR5CH = 0x12D, ///< Output compare register.
            UCSR3A = 0x130, ///< USART control and status.
            UCSR3B = 0x131, ///< USART control and status.
            UCSR3C = 0x132, ///< USART control and status.
            UBRR3L = 0x134, ///< USART baud-rate register.
            UBRR3H = 0x135, ///< USART baud-rate register.
            UDR3 = 0x136,   ///< USART data register.
        };
    }
}

#endif
