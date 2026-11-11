# Errata.h

**Purpose:** Datasheet revision and device silicon errata references.

Namespace: `atmega2560::errata`.

See the manufacturer errata document [DS80001074](https://onlinedocs.microchip.com/oxy/GUID-A1DA2380-86C9-41F6-B6EF-2E13FA07B3C7-en-US-7/index.html). Do not assume that every erratum affects every revision.

```cpp
#include <atmega2560/Errata.h>

namespace mcu = atmega2560;

static_assert(mcu::errata::errata_document_available == 1, "ATmega2560 Errata definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
