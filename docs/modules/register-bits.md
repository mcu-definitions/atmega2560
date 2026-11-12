# RegisterBits.h

**Purpose:** Register bit positions and field masks.

Namespace: `atmega2560::register_bits`.

Reserved bit positions are intentionally excluded. Every declared bit is a named constant with its hardware position.

```cpp
#include <atmega2560/RegisterBits.h>

namespace mcu = atmega2560;

static_assert(mcu::register_bits::eimsk::int7 == 7, "ATmega2560 RegisterBits definition");
static_assert(mcu::register_bits::smcr::se == 0, "ATmega2560 SMCR definition");
static_assert(mcu::register_bits::xmcrb::xmm2 == 2, "ATmega2560 XMCRB definition");
```

## Register bit identifiers

Bit names are nested under their lowercase register name, for example `register_bits::tccr5a::com5a1`, `register_bits::ucsr3a::rxc3` and `register_bits::eimsk::int7`.

The ATmega2560-specific definitions also include `OCDR`, `EIND`, `SPL` and `SPH`. Only `EIND0` and the implemented `RAMPZ` bits are exposed; unimplemented high bits are not defined.

`SMCR` uses `SM2 = 3`, `SM1 = 2`, `SM0 = 1`, and `SE = 0`. `XMCRB` uses `XMBK = 7` and `XMM2:0 = 2:0`.

Numbers are bit **positions**, not pre-shifted masks. Reserved positions are not exposed as public bit constants.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/ATmega640-1280-1281-2560-2561-Datasheet-DS40002211A.pdf), Section 33 and register descriptions.
