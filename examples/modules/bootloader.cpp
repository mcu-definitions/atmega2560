#include <atmega2560/Bootloader.h>

namespace mcu = atmega2560;

static_assert(mcu::bootloader::flash_page_size_words == 128, "ATmega2560 Bootloader definition");
static_assert(mcu::bootloader::SectionSizeWords::Words512 == static_cast<mcu::bootloader::SectionSizeWords>(512), "Smallest boot section");
static_assert(mcu::bootloader::smallest_boot_start_word_address == 0x1FE00UL, "Smallest boot section address");
static_assert(mcu::bootloader::largest_boot_start_word_address == 0x1F000UL, "Largest boot section address");
