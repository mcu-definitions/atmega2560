# Getting started

The definitions are C++11 header-only and expose hardware metadata.

## Include

```cpp
#define MCU_PACKAGE_TQFP100
#define MCU_GRADE_INDUSTRIAL_85C
#include <atmega2560/ATmega2560.h>
namespace mcu = atmega2560;

static_assert(mcu::gpio::port_count == 11, "GPIO ports");
static_assert(mcu::usart::module_count == 4, "USART count");
static_assert(mcu::register_map::PORTB == 0x25, "Data-space address");
```

Add `include/` to the compiler search path. Include only the headers you need, or include the aggregate header.

## Addresses and pins

`register_map` values are data-space addresses. They are not compiler intrinsics or volatile register objects. `pin::Pin` values encode logical MCU port and bit, not Arduino board pin numbers.

## Package

Choose `MCU_PACKAGE_TQFP100` or `MCU_PACKAGE_CBGA100` before any definition header. `package::selected` exposes package metadata.
