// Copyright 2022 grooovebob (@grooovebob)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS { \
    { GP0, GP1, GP2, GP3, GP4 }, \
    { GP5, GP6, GP7, GP8,  GP9 }, \
    { GP12, GP13, GP14, GP15, GP16 }, \
    { GP21, GP23, GP20, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT {  \
    { GP0, GP1, GP2, GP3, GP29 }, \
    { GP28, GP27, GP26, GP22, GP20 }, \
    { GP23, GP21, GP16, GP15, GP14 }, \
    { GP9, GP12, GP13, NO_PIN, NO_PIN } \
}


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial Config */
#define USE_SERIAL
#define SERIAL_USART_TX_PIN GP8
#define MASTER_LEFT

/* I2C Pin mapping */
//#define I2C1_SDA_PIN GP7
//#define I2C1_SCL_PIN GP6
//#define I2C1_CLOCK_SPEED 400000
//#define I2C_DRIVER I2CD2

// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 40
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define USB_VBUS_PIN 19
