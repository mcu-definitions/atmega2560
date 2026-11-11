#include <atmega2560/Errata.h>

namespace mcu = atmega2560;

static_assert(mcu::errata::errata_document_available == 1, "ATmega2560 Errata definition");
