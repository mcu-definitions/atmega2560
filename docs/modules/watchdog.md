# Watchdog.h

**Purpose:** Watchdog oscillator and timeout selections.

Namespace: `atmega2560::watchdog`.

```cpp
#include <atmega2560/Watchdog.h>

namespace mcu = atmega2560;

static_assert(mcu::watchdog::supports_interrupt_mode == 1, "ATmega2560 Watchdog definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
