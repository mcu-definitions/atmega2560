#include <atmega2560/EEPROM.h>

namespace mcu = atmega2560;

static_assert(mcu::eeprom::page_size_bytes == 8, "ATmega2560 EEPROM definition");
