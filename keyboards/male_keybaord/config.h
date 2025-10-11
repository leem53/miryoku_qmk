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
#define MASTER_LEFT

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD