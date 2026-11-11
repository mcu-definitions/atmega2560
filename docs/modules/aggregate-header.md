# ATmega2560.h

**Purpose:** Aggregate header for the complete ATmega2560 definition set.

Namespace: `atmega2560::atmega2560`.

Includes the public modules but does not initialize registers or execute peripheral operations.

```cpp
#include <atmega2560/ATmega2560.h>

namespace mcu = atmega2560;

static_assert(mcu::memory::flash_size_bytes == 262144UL, "ATmega2560 ATmega2560 definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
