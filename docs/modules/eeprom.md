# EEPROM.h

**Purpose:** EEPROM organization and endurance.

Namespace: `atmega2560::eeprom`.

```cpp
#include <atmega2560/EEPROM.h>

namespace mcu = atmega2560;

static_assert(mcu::eeprom::page_size_bytes == 8, "ATmega2560 EEPROM definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
