# ATmega2560 hardware definitions

A header-only C++11 library containing hardware definitions for the ATmega2560.

The library describes the device, package terminals, logical pins, memory, registers, peripherals, clock sources, interrupts, fuses, electrical limits, and errata.

It contains definitions only. It does not provide peripheral drivers, register access, initialization, or programmer integration.

## Include

```cpp
#include <atmega2560/ATmega2560.h>
```

For a smaller dependency, include individual modules:

```cpp
#include <atmega2560/Pin.h>
#include <atmega2560/GPIO.h>
#include <atmega2560/RegisterMap.h>
```

## MCUConfig.h

The consumer selects its physical package and grade and supplies clock/fuse configuration:

```cpp
#define MCU_PACKAGE_TQFP100
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 16000000UL

#include <atmega2560/ATmega2560.h>

namespace mcu = atmega2560;
```

Fuse bytes are deliberately not prescribed; verify against actual hardware and bootloader settings.

## Common MCU interface

Keep the same `mcu` alias across device repositories:

```cpp
mcu::gpio::port_count
mcu::timer::timer_count
mcu::pwm::channel_count
mcu::memory::flash_size_bytes
```

## Documentation

Start at [Getting started](docs/getting-started.md), [Namespace map](docs/namespaces.md), [MCU configuration](docs/configuration/mcu-config.md), and [Module reference](docs/index.md).

## Scope

The library does not integrate with AVR-GCC, AVRDUDE, an IDE, or a programmer. It provides the definitions that consuming firmware and peripheral libraries can use.
