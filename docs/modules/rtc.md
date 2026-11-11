# RTC.h

**Purpose:** Asynchronous Timer2 real-time counter support.

Namespace: `atmega2560::rtc`.

Timer2 may operate asynchronously from the crystal on PG4 (TOSC1) and PG3 (TOSC2). There is no separate dedicated calendar RTC peripheral.

```cpp
#include <atmega2560/RTC.h>

namespace mcu = atmega2560;

static_assert(mcu::rtc::tosc1_pin_value == 0x64, "ATmega2560 RTC definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
