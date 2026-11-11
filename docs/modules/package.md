# Package.h

**Purpose:** Supported package types and selected package.

Namespace: `atmega2560::package`.

```cpp
#include <atmega2560/Package.h>

namespace mcu = atmega2560;

static_assert(mcu::package::supported_package_count == 2, "ATmega2560 Package definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
