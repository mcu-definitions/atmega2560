# MCUConfig.h

The consuming firmware owns this configuration. Define target-specific values before including the device headers.

```cpp
#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

#define MCU_PACKAGE_TQFP100
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 16000000UL

#include <atmega2560/ATmega2560.h>

namespace mcu = atmega2560;

#endif
```

| Setting | Purpose |
|---|---|
| `MCU_PACKAGE_TQFP100` | Physical package selection |
| `MCU_GRADE_INDUSTRIAL_85C` | Device operating grade |
| `MCU_CLOCK_HZ` | Expected CPU clock, supplied by the board |
| `namespace mcu = atmega2560` | Short alias for this device's definitions |

Fuse values may be provided as board-specific macros, but the library does not program them.

The operating frequency depends on the board oscillator and fuse settings. A package and grade selection do not program fuses or configure clocks.
