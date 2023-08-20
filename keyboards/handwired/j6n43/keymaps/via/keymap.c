// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
  _DEFAULT,
  _FUNCTION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_DEFAULT] = LAYOUT_ortho_43_j6nca(
        KC_ESC,     KC_Q,       KC_W,       KC_E,           KC_R,           KC_T,   KC_Y,   KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
        KC_TAB,     KC_A,       KC_S,       KC_D,           KC_F,           KC_G,   KC_H,   KC_J,           KC_K,           KC_L,           KC_ENTER,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,           KC_V,           KC_B,   KC_N,   KC_M,           KC_SLSH,        KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,    MO(_FUNCTION),  KC_SPC,                 KC_SPC, MO(_FUNCTION),   MO(_FUNCTION),  MO(_FUNCTION),  MO(_FUNCTION)
    ),

    [_FUNCTION] = LAYOUT_ortho_43_j6nca(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
    )
};
