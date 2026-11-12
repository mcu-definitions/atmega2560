# Watchdog.h

**Purpose:** Watchdog oscillator and timeout selections.

Namespace: `atmega2560::watchdog`.

```cpp
#include <atmega2560/Watchdog.h>

namespace mcu = atmega2560;

static_assert(mcu::watchdog::supports_interrupt_mode == 1, "ATmega2560 Watchdog definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
