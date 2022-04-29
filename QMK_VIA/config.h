#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x1337
#define DEVICE_VER   0x2022
#define MANUFACTURER Uuupah
#define PRODUCT      Pain27
#define DESCRIPTION  Supported by Pepega1568

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, E6, B4 }
#define MATRIX_COL_PINS { D7, C6 , D4 , D1 , B3 , F4 , F5 , B1 , F6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B5
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

#define LED_NUM_LOCK_PIN B6
#define LED_CAPS_LOCK_PIN D0

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 4


#define LED_PIN B5

#define RGB_DI_PIN B2
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 9
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/

/*== or choose animations ==*/
#    define RGBLIGHT_EFFECT_BREATHING

#endif

#define FORCE_NKRO

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS