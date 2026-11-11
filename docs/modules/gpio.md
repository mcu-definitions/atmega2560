# GPIO.h

**Purpose:** GPIO port widths, masks and pull-ups.

Namespace: `atmega2560::gpio`.

```cpp
#include <atmega2560/GPIO.h>

namespace mcu = atmega2560;

static_assert(mcu::gpio::port_count == 11, "ATmega2560 GPIO definition");
```

## Port map

| Port | GPIO bits |
|---|---|
| A, B, C, D, E, F, H, J, K, L | 0–7 |
| G | 0–5 |

The chip has 86 general-purpose I/O lines. GPIO pins shared with external memory, JTAG, the crystal, or serial peripherals may be unavailable to general GPIO in a given board configuration.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
