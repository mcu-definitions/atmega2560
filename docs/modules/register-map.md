# RegisterMap.h

**Purpose:** Data-space addresses of ATmega2560 peripheral registers.

Namespace: `atmega2560::register_map`.

These are **data-space addresses** (for LDS/STS), not the shorter `IN`/`OUT` instruction operands. The register table extends through `0x136`.

```cpp
#include <atmega2560/RegisterMap.h>

namespace mcu = atmega2560;

static_assert(mcu::register_map::UDR3 == 0x136, "ATmega2560 RegisterMap definition");
static_assert(mcu::register_map::SPMCSR == 0x57, "ATmega2560 SPMCSR address");
static_assert(mcu::register_map::TIMSK5 == 0x73, "ATmega2560 TIMSK5 address");
```

## Corrected addresses

| Register | Data-space address |
|---|---:|
| `SPMCSR` | `0x57` |
| `PCMSK0` | `0x6B` |
| `PCMSK1` | `0x6C` |
| `PCMSK2` | `0x6D` |
| `TIMSK0` | `0x6E` |
| `TIMSK1` | `0x6F` |
| `TIMSK2` | `0x70` |
| `TIMSK3` | `0x71` |
| `TIMSK4` | `0x72` |
| `TIMSK5` | `0x73` |
| `XMCRA` | `0x74` |
| `XMCRB` | `0x75` |

## Addressing rules

These values use the **data-space address** from datasheet Section 33. For example, `PORTB` is `0x25` and `UDR3` is `0x136`.

The `IN` and `OUT` opcodes use I/O addresses; add `0x20` to the I/O address when referring to the corresponding data-space address. Extended peripheral registers require load/store instructions. This library does not issue either instruction.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf), Section 33.
