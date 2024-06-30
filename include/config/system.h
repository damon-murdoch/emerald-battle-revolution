#ifndef GUARD_CONFIG_SYSTEM_H
#define GUARD_CONFIG_SYSTEM_H

// [Hiram Anderson] Extra save space with two lines of code
// Each 4 KiB flash sector contains 3968 bytes of 
// actual data followed by a 128 byte footer.
// Only 12 bytes of the footer are used.

// Comment out this line to use the original save structure
#define SYS_EXPANDED_SECTOR_DATA

// [voloved] Add Sleep Mode
// If this is set to true, sleep mode will be enabled
// Works on flash carts and original hardware, no emulator 
// support (Keys are defined in include/gba/io_reg.h)

// Comment out this line to disable sleep mode
#define SYS_ENABLE_SLEEP_MODE

#endif // GUARD_CONFIG_SYSTEM_H
