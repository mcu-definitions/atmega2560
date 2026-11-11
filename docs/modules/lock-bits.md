# LockBits.h

**Purpose:** Memory protection and bootloader lock bit positions.

Namespace: `atmega2560::lock_bits`.

```cpp
#include <atmega2560/LockBits.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::lock_bits::Bit::BLB12) == 5, "ATmega2560 LockBits definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
