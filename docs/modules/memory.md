# Memory.h

**Purpose:** Flash, EEPROM, SRAM, and external-memory geometry.

Namespace: `atmega2560::memory`.

The 8 KB internal SRAM occupies `0x0200..0x21FF`. External SRAM can be mapped above it through XMEM, subject to bus configuration.

```cpp
#include <atmega2560/Memory.h>

namespace mcu = atmega2560;

static_assert(mcu::memory::sram_start_address == 0x0200, "ATmega2560 Memory definition");
```

## Memory map

| Region | Range / capacity |
|---|---|
| General register file | `0x0000–0x001F` |
| I/O registers | `0x0020–0x01FF` |
| Internal SRAM | `0x0200–0x21FF` (8 KB) |
| External mapped memory | `0x2200–0xFFFF` when XMEM enabled |
| Program Flash | 256 KB (1024 pages × 256 B) |
| EEPROM | 4 KB (512 pages × 8 B) |

SRAM and Flash use different address spaces. Never use a Flash word address as a data-space register address.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf).
