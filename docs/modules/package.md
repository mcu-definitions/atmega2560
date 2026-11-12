# Package.h

**Purpose:** Supported package types and selected package.

Namespace: `atmega2560::package`.

```cpp
#include <atmega2560/Package.h>

namespace mcu = atmega2560;

static_assert(mcu::package::supported_package_count == 2, "ATmega2560 Package definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
