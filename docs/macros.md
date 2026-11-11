# Macros

The `MCU_*` macros identify the target device and allow conditional inclusion and configuration. Metadata constants and enums are otherwise preferred.

- `MCU_ATMEGA2560` — target identifier.
- `MCU_HAS_*` — peripheral feature flags; see `Config.h` for the complete list.
- `MCU_PACKAGE_TQFP100`, `MCU_PACKAGE_CBGA100` — select one.
- `MCU_GRADE_INDUSTRIAL_85C`, `MCU_GRADE_LOW_VOLTAGE` — select one.
- `MCU_REQUIRE_PACKAGE`, `MCU_REQUIRE_GRADE` — require explicit package and grade selection at compile time.
- `MCU_CLOCK_HZ` — project-defined clock value, not a device header default.

A package or grade is never silently selected by this library.
