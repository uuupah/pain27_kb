#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28 } \
}

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING

#endif