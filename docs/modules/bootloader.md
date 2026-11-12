# Bootloader.h

**Purpose:** Boot section sizes and Flash address ranges.

Namespace: `atmega2560::bootloader`.

The ATmega2560 provides four boot section sizes: 512, 1,024, 2,048, or 4,096 words. The `BOOTSZ1:0` fuse bits select the active partition.

```cpp
#include <atmega2560/Bootloader.h>

namespace mcu = atmega2560;

static_assert(mcu::bootloader::SectionSizeWords::Words512 == static_cast<mcu::bootloader::SectionSizeWords>(512), "ATmega2560 boot size");
static_assert(static_cast<unsigned>(mcu::bootloader::BootSizeCode::Words512) == 0x03, "ATmega2560 BOOTSZ code");
static_assert(mcu::bootloader::smallest_boot_start_word_address == 0x1FE00UL, "ATmega2560 smallest boot section");
static_assert(mcu::bootloader::largest_boot_start_word_address == 0x1F000UL, "ATmega2560 largest boot section");
```

## Boot partition

Addresses below are **Flash word addresses**, not byte addresses. Each Flash page contains 128 words.

| BOOTSZ1:0 | Boot size | Pages | Application end | Boot start | Boot end |
|---:|---:|---:|---:|---:|---:|
| `11` | 512 words | 4 | `0x1FDFF` | `0x1FE00` | `0x1FFFF` |
| `10` | 1,024 words | 8 | `0x1FBFF` | `0x1FC00` | `0x1FFFF` |
| `01` | 2,048 words | 16 | `0x1F7FF` | `0x1F800` | `0x1FFFF` |
| `00` | 4,096 words | 32 | `0x1EFFF` | `0x1F000` | `0x1FFFF` |

The boot section size and start address are selected by `BOOTSZ1:0`; the library does not configure the fuses.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf), Table 29-13.
