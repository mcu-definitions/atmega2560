# JTAG.h

**Purpose:** JTAG debug and boundary-scan interface.

Namespace: `atmega2560::jtag`.

TCK/TMS/TDO/TDI use PF4/PF5/PF6/PF7. Enabling JTAG assigns these pins to the JTAG interface and affects their GPIO use.

```cpp
#include <atmega2560/JTAG.h>

namespace mcu = atmega2560;

static_assert(mcu::jtag::supported == 1, "ATmega2560 JTAG definition");
```

## Signals

| JTAG | Logical pin |
|---|---|
| TCK | PF4 |
| TMS | PF5 |
| TDO | PF6 |
| TDI | PF7 |

The JTAGEN fuse setting and debugger configuration determine pin availability.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
