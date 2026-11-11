# Programming.h

**Purpose:** In-system programming interface, signatures and page geometry.

Namespace: `atmega2560::programming`.

```cpp
#include <atmega2560/Programming.h>

namespace mcu = atmega2560;

static_assert(mcu::programming::signature_byte_2 == 0x01, "ATmega2560 Programming definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
