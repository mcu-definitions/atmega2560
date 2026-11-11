#include <atmega2560/PackagePins.h>

namespace mcu = atmega2560;

static_assert(mcu::package::tqfp100::PB0 == 19 && mcu::package::cbga100::PB0 == 54, "ATmega2560 PackagePins definition");
