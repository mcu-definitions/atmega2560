# Namespaces

The root is `atmega2560`. Consuming code should alias `namespace mcu = atmega2560;`.

- `mcu::device` — Device identity and peripheral counts.
- `mcu::architecture` — AVR CPU architecture.
- `mcu::cpu` — Core register and status flags.
- `mcu::memory` — Flash, EEPROM, SRAM, and external-memory geometry.
- `mcu::eeprom` — EEPROM organization and endurance.
- `mcu::register_bits` — Register bit positions and field masks.
- `mcu::package` — Supported package types and selected package.
- `mcu::package` — Physical terminal and ball mappings for 100-terminal packages.
- `mcu::pin` — Logical GPIO pin and port identifiers.
- `mcu::pin` — Pin capabilities and alternate function identifiers.
- `mcu::gpio` — GPIO port widths, masks and pull-ups.
- `mcu::clock` — Clock sources, oscillator and CPU prescaler.
- `mcu::timer` — Timer/counter architecture and modes.
- `mcu::rtc` — Asynchronous Timer2 real-time counter support.
- `mcu::pwm` — PWM output channels and associated logical pins.
- `mcu::adc` — ADC channels, input mappings, references and modes.
- `mcu::analog_comparator` — Analog comparator input and interrupt definitions.
- `mcu::usart` — USART frame modes, channel numbers and pin multiplexing.
- `mcu::spi` — SPI interface and pin definitions.
- `mcu::twi` — Two-wire serial interface characteristics.
- `mcu::interrupts` — Interrupt vector sources, slot numbers and word addresses.
- `mcu::external_interrupts` — External interrupt and pin-change mappings.
- `mcu::watchdog` — Watchdog oscillator and timeout selections.
- `mcu::power` — Sleep modes and peripheral power gates.
- `mcu::reset` — Reset origins and status.
- `mcu::fuse` — Low, high, and extended fuse bit locations.
- `mcu::lock_bits` — Memory protection and bootloader lock bit positions.
- `mcu::bootloader` — Boot section sizes and Flash address ranges.
- `mcu::programming` — In-system programming interface, signatures and page geometry.
- `mcu::jtag` — JTAG debug and boundary-scan interface.
- `mcu::xmem` — External memory interface buses and control registers.
- `mcu::qtouch` — Capacitive touch software support metadata.
- `mcu::register_map` — Data-space addresses of ATmega2560 peripheral registers.
- `mcu::electrical` — Operating voltages, frequency grades and absolute limits.
- `mcu::errata` — Datasheet revision and device silicon errata references.

The aggregate header has no dedicated C++ namespace; it only includes modules.
