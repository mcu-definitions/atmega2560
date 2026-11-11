# QTouch.h

**Purpose:** Capacitive touch software support metadata.

Namespace: `atmega2560::qtouch`.

The datasheet lists QTouch and QMatrix library support for up to 64 sense channels. Acquisition is provided by software; the device does not contain a dedicated QTouch peripheral block.

```cpp
#include <atmega2560/QTouch.h>

namespace mcu = atmega2560;

static_assert(mcu::qtouch::has_dedicated_hardware == 0, "ATmega2560 QTouch definition");
static_assert(mcu::qtouch::max_sense_channel_count == 64, "ATmega2560 QTouch channel limit");
```

These are hardware and library support definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf), Features.
