# AnalogComparator.h

**Purpose:** Analog comparator input and interrupt definitions.

Namespace: `atmega2560::analog_comparator`.

AIN0 is PE2 and AIN1 is PE3. The ADC multiplexer can supply comparator negative input when ADC is disabled and ACME is selected.

```cpp
#include <atmega2560/AnalogComparator.h>

namespace mcu = atmega2560;

static_assert(mcu::analog_comparator::positive_input_pin_value == 0x42, "ATmega2560 AnalogComparator definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
