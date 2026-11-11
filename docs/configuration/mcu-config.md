# MCUConfig.h

The configuration file belongs to the consuming project, not the definitions library. It must be included before any device headers.

```cpp
#define MCU_PACKAGE_TQFP100
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 16000000UL
#include <atmega2560/ATmega2560.h>
namespace mcu = atmega2560;
```

Only one package and one grade may be selected. Set `MCU_REQUIRE_PACKAGE` or `MCU_REQUIRE_GRADE` to require explicit selection.

For bootloaded Arduino Mega hardware, fuse values depend on the board's bootloader and oscillator.
