# SPI.h

**Purpose:** SPI interface and pin definitions.

Namespace: `atmega2560::spi`.

ATmega2560 hardware SPI pins: SS PB0, SCK PB1, MOSI PB2, MISO PB3. These are MCU port pins, not Arduino Mega shield pin numbers.

```cpp
#include <atmega2560/SPI.h>

namespace mcu = atmega2560;

static_assert(mcu::spi::ss_pin_value == 0x10, "ATmega2560 SPI definition");
```

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
