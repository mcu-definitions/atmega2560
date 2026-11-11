# Interrupts.h

**Purpose:** Interrupt vector sources, slot numbers and word addresses.

Namespace: `atmega2560::interrupts`.

The ATmega2560 has 57 vector entries including Reset. Word-address spacing is two words per vector; the last USART3 TX vector is at word `0x70`.

```cpp
#include <atmega2560/Interrupts.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::interrupts::Vector::USART3TransmitComplete) == 57, "ATmega2560 Interrupts definition");
```

## Vectors

The vector table contains 57 entries including reset. Slot numbers start at 1; word addresses start at `0x0000` and increase by two words per slot.

A vector's program address is a **word address** and can be relocated by boot/interrupt-vector configuration. Consult Table 14-1 before writing a startup routine.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
