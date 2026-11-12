# Power.h

**Purpose:** Sleep modes and peripheral power gates.

Namespace: `atmega2560::power`.

The six sleep modes are Idle, ADC Noise Reduction, Power-down, Power-save, Standby and Extended Standby. Their SM2:0 encodings are `000`, `001`, `010`, `011`, `110` and `111`, respectively.

```cpp
#include <atmega2560/Power.h>

namespace mcu = atmega2560;

static_assert(mcu::power::has_prr1 == 1, "ATmega2560 Power definition");
static_assert(mcu::power::has_sleep_mode_adc_noise_reduction == 1, "ATmega2560 ADC Noise Reduction mode");
static_assert(static_cast<unsigned>(mcu::power::SleepMode::ExtendedStandby) == 7, "ATmega2560 sleep mode encoding");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf), Section 11.
