# PWM.h

**Purpose:** PWM output channels and associated logical pins.

Namespace: `atmega2560::pwm`.

There are 16 compare outputs mapped to 15 distinct GPIO pins: PB7 is multiplexed between OC0A and OC1C. Do not infer that 16 separate pins can generate PWM simultaneously.

```cpp
#include <atmega2560/PWM.h>

namespace mcu = atmega2560;

static_assert(mcu::pwm::channel_count == 16, "ATmega2560 PWM definition");
```

## Compare outputs

Timer0/2 expose A and B. Timers1/3/4/5 expose A, B and C, for 16 compare channels in total. Because OC0A and OC1C both use PB7, there are only 15 distinct PWM-capable GPIO pins.

Channel counts are hardware outputs rather than guarantees of simultaneous independent pin use.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
