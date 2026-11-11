# TWI.h

**Purpose:** Two-wire serial interface characteristics.

Namespace: `atmega2560::twi`.

SCL is PD0 and SDA is PD1; both pins also support external interrupt inputs INT0 and INT1.

```cpp
#include <atmega2560/TWI.h>

namespace mcu = atmega2560;

static_assert(mcu::twi::scl_pin_value == 0x30, "ATmega2560 TWI definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
