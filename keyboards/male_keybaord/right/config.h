#pragma once

#include "../config.h"

/*LEFT*/  
/*#define DIRECT_PINS { \
    { GP0, GP1, GP2, GP3, GP4 }, \
    { GP5, GP6, GP7, GP8,  GP9 }, \
    { GP12, GP13, GP14, GP15, GP16 }, \
    { GP21, GP23, GP20, NO_PIN, NO_PIN } \
}*/

/*RIGHT*/
#define DIRECT_PINS {  \
    { GP0, GP1, GP2, GP3, GP29 }, \
    { GP28, GP27, GP26, GP22, GP20 }, \
    { GP23, GP21, GP16, GP15, GP14 }, \
    { GP9, GP12, GP13, NO_PIN, NO_PIN } \
}
