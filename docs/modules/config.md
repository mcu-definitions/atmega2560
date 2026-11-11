# Config.h

**Purpose:** Selects the ATmega2560 package and operating grade.

Namespace: `atmega2560::config`.

Two packages are documented: TQFP-100 and CBGA-100. The low-voltage V grade has a lower maximum clock speed.

```cpp
#include <atmega2560/Config.h>
#include <atmega2560/Device.h>

namespace mcu = atmega2560;

static_assert(MCU_ATMEGA2560 == 1, "ATmega2560 Config definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
