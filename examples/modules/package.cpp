#include <atmega2560/Package.h>

namespace mcu = atmega2560;

static_assert(mcu::package::supported_package_count == 2, "ATmega2560 Package definition");
