# GPIO.h

**Purpose:** GPIO port widths, valid bit masks, register addresses and hardware capabilities.

Namespace: `atmega2560::gpio`

The device exposes 11 GPIO ports (A, B, C, D, E, F, H, J, K, L, G).

```cpp
#include <atmega2560/GPIO.h>
namespace mcu = atmega2560;

constexpr auto ports = mcu::gpio::port_count;
constexpr auto width = mcu::gpio::port::b_width;
constexpr auto mask = mcu::gpio::port::b_mask;
constexpr auto direction = mcu::gpio::port::b_direction_register;
```

Register metadata uses AVR data-space addresses. This header does not configure GPIO or access registers.
