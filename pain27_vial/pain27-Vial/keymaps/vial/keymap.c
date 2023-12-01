#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_O, 
		KC_Z, KC_X, KC_C, KC_V, KC_SPC, KC_B, KC_N, KC_M, KC_L),

	KEYMAP(
		KC_LCTL, KC_1, KC_2, KC_3, KC_EQL, KC_TRNS, KC_TRNS, KC_UP, KC_BSPC, 
		KC_TRNS, KC_4, KC_5, KC_6, KC_MINS, KC_SLSH, KC_LEFT, KC_RGHT, KC_TRNS, 
		KC_TRNS, KC_7, KC_8, KC_9, KC_TRNS, KC_PLUS, KC_ASTR, KC_DOWN, KC_ENT),

	KEYMAP(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_PGUP, KC_DEL, 
		KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_TRNS, 
		KC_DOT, KC_TRNS, KC_QUOT, KC_DQUO, KC_TRNS, KC_LPRN, KC_RPRN, KC_PGDN, KC_TRNS),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
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