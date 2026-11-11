#include <atmega2560/Fuse.h>

namespace mcu = atmega2560;

static_assert(mcu::fuse::high::JTAGEN == 6, "ATmega2560 Fuse definition");
