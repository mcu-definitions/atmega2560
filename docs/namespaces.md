# Namespaces

All public definitions are under `atmega2560`. The consuming application may define `namespace mcu = atmega2560;` for concise access.

| Namespace | Header | Contents |
|---|---|---|
| `atmega2560::device` | `Device.h` | Hardware resource counts and capabilities |
| `atmega2560::architecture` | `Architecture.h` | AVR8 architecture metadata |
| `atmega2560::cpu` | `CPU.h` | CPU registers and flags |
| `atmega2560::memory` | `Memory.h` | Memory geometry |
| `atmega2560::eeprom` | `EEPROM.h` | EEPROM geometry |
| `atmega2560::register_bits` | `RegisterBits.h` | Register bit fields |
| `atmega2560::register_map` | `RegisterMap.h` | Register data-space addresses |
| `atmega2560::package` | `Package.h` | Physical packages |
| `atmega2560::pin` | `Pin.h` | Logical pins and ports |
| `atmega2560::gpio` | `GPIO.h` | GPIO capabilities and registers |
| `atmega2560::clock` | `Clock.h` | Clock sources and prescalers |
| `atmega2560::timer` | `Timer.h` | Timers and modes |
| `atmega2560::rtc` | `RTC.h` | Asynchronous counter |
| `atmega2560::pwm` | `PWM.h` | PWM channels |
| `atmega2560::adc` | `ADC.h` | ADC channels and references |
| `atmega2560::analog_comparator` | `AnalogComparator.h` | Comparator characteristics |
| `atmega2560::usart` | `USART.h` | Serial channels |
| `atmega2560::spi` | `SPI.h` | SPI modes and capabilities |
| `atmega2560::twi` | `TWI.h` | Two-wire interface |
| `atmega2560::interrupts` | `Interrupts.h` | Interrupt vectors |
| `atmega2560::external_interrupts` | `ExternalInterrupts.h` | External and pin-change interrupts |
| `atmega2560::watchdog` | `Watchdog.h` | Watchdog timer |
| `atmega2560::power` | `Power.h` | Power and sleep modes |
| `atmega2560::reset` | `Reset.h` | Reset and brownout |
| `atmega2560::fuse` | `Fuse.h` | Fuse fields |
| `atmega2560::lock_bits` | `LockBits.h` | Protection bits |
| `atmega2560::bootloader` | `Bootloader.h` | Boot section geometry |
| `atmega2560::programming` | `Programming.h` | Programming metadata |
| `atmega2560::qtouch` | `QTouch.h` | Touch metadata |
| `atmega2560::electrical` | `Electrical.h` | Electrical limits |
| `atmega2560::errata` | `Errata.h` | Silicon errata |
| `atmega2560::jtag` | `JTAG.h` | JTAG interface |
| `atmega2560::xmem` | `XMEM.h` | External memory interface |

## Nested namespaces

Modules may include subnamespaces for individual peripherals, ports, registers, package variants or operating grades. The available names reflect the hardware of the ATmega2560.

`package::selected` identifies the package configured by the application. Logical pins remain independent of package terminal numbers.
