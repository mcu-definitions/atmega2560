# Clock.h

**Purpose:** Clock sources, oscillator and CPU prescaler.

Namespace: `atmega2560::clock`.

The non-V device supports up to 16 MHz at 4.5–5.5 V. The V speed grade supports up to 8 MHz at 2.7 V and 2 MHz at 1.8 V. These are voltage-dependent limits.

```cpp
#include <atmega2560/Clock.h>

namespace mcu = atmega2560;

static_assert(mcu::clock::standard_max_cpu_hz_at_4v5 == 16000000UL, "ATmega2560 Clock definition");
```

`CKSELCode` exposes all 16 CKSEL3:0 values. Codes `0x4–0x5` select low-frequency crystal options, `0x6–0x7` full-swing crystal options, and `0x8–0xF` low-power crystal options. Their exact oscillator ranges and startup requirements are defined by the datasheet tables.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
