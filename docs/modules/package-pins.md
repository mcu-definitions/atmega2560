# PackagePins.h

**Purpose:** Physical terminal and ball mappings for 100-terminal packages.

Namespace: `atmega2560::package`.

TQFP terminals are numbered 1–100. CBGA locations use row (A–K, skipping I) and column (1–10); `cbga100::PB0` and `cbga100::F4` both denote the F4 position by an ordinal (54), not a numbered package lead. See datasheet Figures 1-1 and 1-2, Table 1-1.

```cpp
#include <atmega2560/PackagePins.h>

namespace mcu = atmega2560;

static_assert(mcu::package::tqfp100::PB0 == 19 && mcu::package::cbga100::PB0 == 54, "ATmega2560 PackagePins definition");
```

## Physical mapping

`package::tqfp100::PB0 == 19`: terminal number on the 100-lead TQFP.

`package::cbga100::PB0 == 54`: row F, column 4 in the 100-ball CBGA top view; this is an internal ordinal representation, **not** lead number 54.

`package::cbga100::F4 == 54` uses the same ordinal by ball position. See datasheet Figures 1-1 and 1-2.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
