#include "pain27.h"

enum layer_names {
    _BASE,
    _FN,
    _ADJ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_P, 
		MT(MOD_LCTL, KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_O, 
		MT(MOD_LSFT, KC_Z), KC_X, KC_C, KC_V, LT(1, KC_SPC), KC_B, KC_N, MT(MOD_LSFT, KC_M), LT(2, KC_L)),

	[_ADJ] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_EQL, KC_TRNS, KC_TRNS, KC_UP, KC_BSPC, 
		KC_TRNS, KC_4, KC_5, KC_6, KC_MINS, KC_SLSH, KC_LEFT, KC_RGHT, KC_TRNS, 
		MT(MOD_LSFT, KC_0), KC_7, KC_8, KC_9, KC_TRNS, KC_PLUS, KC_ASTR, KC_DOWN, KC_ENT),

	[_FN] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_PGUP, KC_DEL, 
		KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_TRNS, 
		KC_DOT, KC_COMM, KC_QUOT, KC_DQUO, KC_TRNS, KC_LPRN, KC_RPRN, KC_PGDN, KC_TRNS)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		DDRB |= (1 << 6); PORTB &= ~(1 << 6);
	} else {
		DDRB &= ~(1 << 6); PORTB &= ~(1 << 6);
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRD |= (1 << 0); PORTD &= ~(1 << 0);
	} else {
		DDRD &= ~(1 << 0); PORTD &= ~(1 << 0);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}