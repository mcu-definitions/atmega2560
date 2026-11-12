# Pin.h

**Purpose:** Logical GPIO pin and port identifiers.

Namespace: `atmega2560::pin` and device-level aliases.

```cpp
#include <atmega2560/Pin.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::pin::Pin::PL5) == 0xA5, "ATmega2560 Pin definition");
```

## Logical pin encoding

The high nibble encodes the ordinal GPIO port (A=0, B=1, C=2, …, H=7, J=8, K=9, L=10). The low nibble encodes the bit position. Example: `Pin::PB0` is `0x10`; `Pin::PL5` is `0xA5`.

This encoding is independent of the Arduino Mega digital pin numbers and the physical 100-terminal package layout.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
