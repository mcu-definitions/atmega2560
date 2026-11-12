# ExternalInterrupts.h

**Purpose:** External interrupt and pin-change mappings.

Namespace: `atmega2560::external_interrupts`.

INT0..INT3 are on PD0..PD3. INT4..INT7 are on PE4..PE7. PCINT0..7 are PB0..7; PCINT8 is PE0 and PCINT9..15 are PJ0..PJ6; PCINT16..23 are PK0..PK7.

```cpp
#include <atmega2560/ExternalInterrupts.h>

namespace mcu = atmega2560;

static_assert(mcu::external_interrupts::external_line_count == 8, "ATmega2560 ExternalInterrupts definition");
static_assert(static_cast<unsigned>(mcu::external_interrupts::PinChangePin::PCINT8) == 0x40, "PCINT8 on PE0");
static_assert(static_cast<unsigned>(mcu::external_interrupts::PinChangePin::PCINT23) == 0x97, "PCINT23 on PK7");
```

## Interrupt pin groups

| Hardware group | MCU pins |
|---|---|
| INT0–INT3 | PD0–PD3 |
| INT4–INT7 | PE4–PE7 |
| PCINT0–PCINT7 | PB0–PB7 |
| PCINT8 | PE0 |
| PCINT9–PCINT15 | PJ0–PJ6 |
| PCINT16–PCINT23 | PK0–PK7 |

PCINT numbers and dedicated external interrupt lines are different resources.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf).
