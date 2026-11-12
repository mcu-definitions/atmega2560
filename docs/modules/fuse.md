# Fuse.h

**Purpose:** Low, high, and extended fuse bit locations.

Namespace: `atmega2560::fuse`.

Fuse locations are bit positions. Fuse bytes are active-low: programmed bits are zero. Do not infer fuse bytes for a board from these constants alone.

```cpp
#include <atmega2560/Fuse.h>

namespace mcu = atmega2560;

static_assert(mcu::fuse::high::JTAGEN == 6, "ATmega2560 Fuse definition");
```

## Safety

Fuse bit constants are **positions**; they are not complete fuse byte presets. Fuse byte values depend on the selected bootloader size, JTAG state, system clock, and brown-out configuration. Choose them for the target board before programming.

Microchip identifies bit value `0` as **programmed** and `1` as **unprogrammed**.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
