// Copyright 2022 Clement Loy (@cactushydroxide)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K18, K08, \
    K10, K11, K12, K13, K14, K15, K16, K17, K28, \
    K20, K21, K22, K23, K25, K26, K27, \
    K24  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28 }, \
}


