# Device.h

**Purpose:** Device identity and peripheral counts.

Namespace: `atmega2560::device`.

The ATmega2560 chip signature is `1E 98 01`.

```cpp
#include <atmega2560/Device.h>

namespace mcu = atmega2560;

static_assert(mcu::device::usart_count == 4, "ATmega2560 Device definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
