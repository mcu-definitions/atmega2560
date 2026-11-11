# Clock configuration

ATmega2560 (non-V): 0–16 MHz at 4.5–5.5 V. ATmega2560V: up to 2 MHz at 1.8 V and 8 MHz at 2.7 V (and within the associated allowed voltage ranges). Consult the speed-grade curves for intermediate supplies.

A consumer can declare `MCU_CLOCK_HZ`; the definitions library does not infer or set it. CKSEL, SUT and CKDIV8 are fuse-based, not runtime initialization performed by this library.

The 8 MHz calibrated RC oscillator with CKDIV8 can yield a default 1 MHz CPU clock. Board-level external crystal configurations may be different.


`clock::CKSELCode` exposes all 16 CKSEL3:0 encodings. Codes `0x0`–`0x3` select external clock, reserved, calibrated internal RC, and internal 128 kHz RC. Codes `0x4`–`0x5` select low-frequency crystal options, `0x6`–`0x7` full-swing crystal options, and `0x8`–`0xF` low-power crystal options. The option code must be selected with the corresponding oscillator frequency and SUT startup-time tables in the datasheet.
