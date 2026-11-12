# CPU.h

**Purpose:** Core register and status flags.

Namespace: `atmega2560::cpu`.

```cpp
#include <atmega2560/CPU.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::cpu::StatusFlag::GlobalInterrupt) == 7, "ATmega2560 CPU definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
