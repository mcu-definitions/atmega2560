# Architecture.h

**Purpose:** AVR CPU architecture.

Namespace: `atmega2560::architecture`.

```cpp
#include <atmega2560/Architecture.h>

namespace mcu = atmega2560;

static_assert(mcu::architecture::program_counter_bits == 17, "ATmega2560 Architecture definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
