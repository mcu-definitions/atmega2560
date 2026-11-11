#include <atmega2560/QTouch.h>

namespace mcu = atmega2560;

static_assert(mcu::qtouch::has_dedicated_hardware == 0, "ATmega2560 QTouch definition");
static_assert(mcu::qtouch::max_sense_channel_count == 64, "ATmega2560 QTouch channel limit");
