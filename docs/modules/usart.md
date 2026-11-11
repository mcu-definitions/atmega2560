# USART.h

**Purpose:** USART frame modes, channel numbers and pin multiplexing.

Namespace: `atmega2560::usart`.

USART0: PE0/PE1/PE2; USART1: PD2/PD3/PD5; USART2: PH0/PH1/PH2; USART3: PJ0/PJ1/PJ2. `pins` uses encoded logical pin values.

```cpp
#include <atmega2560/USART.h>

namespace mcu = atmega2560;

static_assert(mcu::usart::module_count == 4, "ATmega2560 USART definition");
```

## Hardware controllers

| USART | RXD | TXD | XCK |
|---|---|---|---|
| 0 | PE0 | PE1 | PE2 |
| 1 | PD2 | PD3 | PD5 |
| 2 | PH0 | PH1 | PH2 |
| 3 | PJ0 | PJ1 | PJ2 |

Per-instance pins are available under `usart::usart0` through `usart::usart3`; the `usart::pins` namespace provides compact names for all channels.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
