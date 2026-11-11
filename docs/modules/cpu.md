# CPU.h

**Purpose:** Core register and status flags.

Namespace: `atmega2560::cpu`.

```cpp
#include <atmega2560/CPU.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::cpu::StatusFlag::GlobalInterrupt) == 7, "ATmega2560 CPU definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
