// Copyright 2023 j6nca (@j6nca)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#undef I2C_DRIVER
#define I2C_DRIVER I2CD1

#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP25

#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP24

// // activated by default
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader
