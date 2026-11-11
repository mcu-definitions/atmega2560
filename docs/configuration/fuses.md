# Fuse bytes

`fuse::low`, `fuse::high` and `fuse::extended` list documented fuse bit positions. Fuses are active-low: zero means programmed.

High fuse bits include JTAGEN (6), SPIEN (5), WDTON (4), EESAVE (3), BOOTSZ1 (2), BOOTSZ0 (1) and BOOTRST (0). Low fuse bits include CKDIV8, CKOUT, SUT and CKSEL.

Fuse bytes must be chosen for the exact ATmega2560 part, clock, programmer, and bootloader. The library does not set default fuse byte values.
