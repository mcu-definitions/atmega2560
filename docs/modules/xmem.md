# XMEM.h

**Purpose:** External memory interface buses and control registers.

Namespace: `atmega2560::xmem`.

The external memory bus multiplexes AD0..AD7 on PA0..PA7 and exposes A8..A15 on PC0..PC7; ALE is PG2, RD is PG1 and WR is PG0. Address decoding and wait states use XMCRA/XMCRB.

```cpp
#include <atmega2560/XMEM.h>

namespace mcu = atmega2560;

static_assert(mcu::xmem::external_memory_start == 0x2200, "ATmega2560 XMEM definition");
```

## Bus connections

| Function | Port / pins |
|---|---|
| AD0–AD7 | PA0–PA7 |
| A8–A15 | PC0–PC7 |
| ALE | PG2 |
| RD | PG1 |
| WR | PG0 |

External SRAM is mapped at `0x2200` and above when XMEM is enabled. Internal SRAM remains at `0x0200–0x21FF`. Sharing pins with XMEM reduces available GPIO.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
