# PinFunctions.h

**Purpose:** Pin capabilities and alternate function identifiers.

Namespace: `atmega2560::pin`.

Flags describe capabilities of logical MCU pins, not Arduino board pin numbers. The external memory interface shares PA/PC/PG signals, and JTAG shares PF4..PF7.

```cpp
#include <atmega2560/PinFunctions.h>

namespace mcu = atmega2560;

static_assert(mcu::pin::capabilities::PB0 != 0, "ATmega2560 PinFunctions definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
