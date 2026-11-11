# Reset.h

**Purpose:** Reset origins and status.

Namespace: `atmega2560::reset`.

```cpp
#include <atmega2560/Reset.h>

namespace mcu = atmega2560;

static_assert(mcu::reset::has_jtag_reset == 1, "ATmega2560 Reset definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
