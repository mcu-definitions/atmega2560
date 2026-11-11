# Timer.h

**Purpose:** Timer/counter architecture and modes.

Namespace: `atmega2560::timer`.

Timers 0 and 2 are 8-bit; timers 1, 3, 4, 5 are 16-bit. The latter have A/B/C compare channels and capture support.

```cpp
#include <atmega2560/Timer.h>

namespace mcu = atmega2560;

static_assert(mcu::timer::timer_count == 6, "ATmega2560 Timer definition");
```

## Timer groups

| Timer | Width | Compare channels | Capture |
|---|---:|---:|---|
| 0 | 8 | 2 | No |
| 1 | 16 | 3 | Yes |
| 2 | 8 | 2 | No; asynchronous operation possible |
| 3 | 16 | 3 | Yes |
| 4 | 16 | 3 | Yes |
| 5 | 16 | 3 | Yes |

The `timer0`…`timer5` namespaces expose metadata, while timer clock and waveform mode enums describe register encodings.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
