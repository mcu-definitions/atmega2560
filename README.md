# ATmega2560

Hardware definitions for the ATmega2560 microcontroller.

Header-only C++11 library describing registers, memory, GPIO, peripherals, package pins, clock sources, interrupts, fuses, electrical characteristics and errata.

No hardware access, drivers or initialization code is included.

## Usage

```cpp
#define MCU_PACKAGE_TQFP100
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 16000000UL

#include <atmega2560/ATmega2560.h>

namespace mcu = atmega2560;
```

For smaller includes, import the required module directly:

```cpp
#include <atmega2560/Pin.h>
#include <atmega2560/GPIO.h>
#include <atmega2560/RegisterMap.h>
```

The project selects its package, operating grade and clock. Clock and fuse settings must match the physical board.

## Structure

- `include/atmega2560/` — hardware definitions.
- `docs/` — technical reference and module documentation.
- `examples/` — usage examples.
- `Doxyfile` — API documentation configuration.

## Documentation

[Getting started](docs/getting-started.md) · [Module reference](docs/index.md) · [Technical references](docs/references.md)

## License

See [LICENSE](LICENSE).
