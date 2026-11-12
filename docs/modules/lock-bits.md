# LockBits.h

**Purpose:** Memory protection and bootloader lock bit positions.

Namespace: `atmega2560::lock_bits`.

```cpp
#include <atmega2560/LockBits.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::lock_bits::Bit::BLB12) == 5, "ATmega2560 LockBits definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
