/**
 * @file Config.h
 * @brief Device, package and operating-grade selection.
 */
#ifndef ATMEGA2560_DEFINITIONS_CONFIG_H
#define ATMEGA2560_DEFINITIONS_CONFIG_H

#define MCU_ATMEGA2560 1
#define MCU_HAS_GPIO 1
#define MCU_HAS_ADC 1
#define MCU_HAS_PWM 1
#define MCU_HAS_TIMER0 1
#define MCU_HAS_TIMER1 1
#define MCU_HAS_TIMER2 1
#define MCU_HAS_TIMER3 1
#define MCU_HAS_TIMER4 1
#define MCU_HAS_TIMER5 1
#define MCU_HAS_USART 1
#define MCU_HAS_SPI 1
#define MCU_HAS_TWI 1
#define MCU_HAS_ANALOG_COMPARATOR 1
#define MCU_HAS_WATCHDOG 1
#define MCU_HAS_EXTERNAL_INTERRUPTS 1
#define MCU_HAS_PIN_CHANGE_INTERRUPTS 1
#define MCU_HAS_JTAG 1
#define MCU_HAS_EXTERNAL_MEMORY_INTERFACE 1
#define MCU_HAS_SELF_PROGRAMMABLE_FLASH 1

#if (defined(MCU_PACKAGE_TQFP100) + defined(MCU_PACKAGE_CBGA100)) > 1
#error "Select only one MCU package."
#endif
#if (defined(MCU_GRADE_INDUSTRIAL_85C) + defined(MCU_GRADE_LOW_VOLTAGE)) > 1
#error "Select only one MCU grade."
#endif
#if defined(MCU_REQUIRE_PACKAGE) && !defined(MCU_PACKAGE_TQFP100) && !defined(MCU_PACKAGE_CBGA100)
#error "Select a 100-terminal MCU package."
#endif
#if defined(MCU_REQUIRE_GRADE) && !defined(MCU_GRADE_INDUSTRIAL_85C) && !defined(MCU_GRADE_LOW_VOLTAGE)
#error "Select an MCU operating grade."
#endif
#endif
