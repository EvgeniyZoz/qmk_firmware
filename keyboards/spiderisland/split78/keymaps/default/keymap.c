/* Copyright 2020 unrelenting.technology
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        QK_GESC,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_BSLS,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_TAB,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_HOME,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SCLN,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT, KC_UP,   KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT, TT(_FN),          KC_SPC,           KC_SPC,           KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT(
        QK_BOOT,          KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, BL_DOWN, BL_UP,   KC_DEL,
        KC_NUM,  XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        BL_TOGG, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        KC_SCRL,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   XXXXXXX, KC_SLSH, KC_PGUP, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,          KC_P0,            KC_PDOT, KC_PENT, KC_HOME, KC_PGDN, KC_END
    )
};
