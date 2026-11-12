# Electrical.h

**Purpose:** Operating conditions and absolute maximum ratings.

Namespace: `atmega2560::electrical`.

The standard ATmega2560 16 MHz ordering grade is specified for 4.5–5.5 V. The related ATmega2560V ordering variant supports lower supply voltages with reduced maximum frequency; select it explicitly with `MCU_GRADE_LOW_VOLTAGE`.

```cpp
#include <atmega2560/Electrical.h>

namespace mcu = atmega2560;

static_assert(mcu::electrical::standard::max_cpu_frequency_hz == 16000000UL, "ATmega2560 Electrical definition");
static_assert(mcu::electrical::absolute_maximum::max_vcc_mv == 6000, "ATmega2560 absolute maximum");
```

## Operating conditions

| Variant | Supply | Maximum frequency |
|---|---:|---:|
| ATmega2560 | 4.5–5.5 V | 16 MHz |
| ATmega2560V | 1.8–5.5 V | 2 MHz at 1.8 V; 8 MHz at 2.7 V and above |

Both ordering grades have an industrial operating temperature range of −40 °C to +85 °C.

## Absolute maximum ratings

These are stress limits, **not recommended operating conditions**. Exceeding them may permanently damage the device.

| Parameter | Limit |
|---|---:|
| Operating temperature | −55 °C to +125 °C |
| Storage temperature | −65 °C to +150 °C |
| Any pin except RESET | −0.5 V to VCC + 0.5 V |
| RESET pin | −0.5 V to +13.0 V |
| VCC | 6.0 V maximum |
| DC current per I/O pin | 40 mA maximum |
| DC current through VCC/GND pins | 200 mA maximum |

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf), Sections 31.1–31.2 and 35.4.
