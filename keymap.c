/* Copyright 2021 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

// clang-format off

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_67(
        KC_GRV,           KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,   KC_EQL,    KC_BSPC,            KC_MUTE,
        KC_TAB,           KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,   KC_RBRC,   KC_BSLS,            KC_DEL,
        LT(_FN1, KC_ESC), KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
        SC_LSPO,                    KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,              SC_RSPC, KC_UP,
        KC_LCTL,          KC_LOPTN, KC_LCMMD,                             SFT_T(KC_SPC),                    KC_RCMMD,  MO(_FN1),  MO(_FN3),  KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_67(
        KC_GRV,            KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,  KC_9,    KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,             KC_MUTE,
        KC_TAB,            KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,  KC_O,    KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,             KC_DEL,
        LT(_FN2, KC_ESC),  KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,  KC_L,    KC_SCLN,  KC_QUOT,              KC_ENT,              KC_HOME,
        SC_LSPO,                     KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,              SC_RSPC,   KC_UP,
        KC_LCTL,           KC_LGUI,  KC_LALT,                              SFT_T(KC_SPC),                   KC_RALT,  MO(_FN2),  MO(_FN3),  KC_LEFT,  KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT_ansi_67(
        KC_ESC,     KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,    RGB_VAD,    RGB_VAI,  KC_MPRV,    KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,     KC_VOLU,  _______,                XXXXXXX,
        KC_CAPS,    XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_RBRC,    KC_TILD,    XXXXXXX,  KC_PGUP,    KC_HOME,  KC_END,   KC_PGDN,    XXXXXXX,     _______,  _______,                XXXXXXX,
        _______,    XXXXXXX,  XXXXXXX,  KC_LPRN,  KC_RPRN,    KC_GRV,     KC_LEFT,  KC_DOWN,    KC_UP,    KC_RGHT,  KC_EXLM,    KC_EQL,                _______,                KC_END,
        _______,              XXXXXXX,  XXXXXXX,  S(KC_LBRC), S(KC_RBRC), XXXXXXX,  A(KC_BSPC), KC_BSPC,  KC_DEL,   A(KC_DEL),  G(KC_SLSH),            _______,    G(KC_UP),
        _______,    _______,  _______,                                           _______,                           _______,    _______,     _______,  G(KC_LEFT), G(KC_DOWN), G(KC_RGHT)),

    [_FN2] = LAYOUT_ansi_67(
        KC_CAPS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,    RGB_VAD,    RGB_VAI, KC_MPRV,    KC_MPLY,  KC_MNXT,   KC_MUTE,    KC_VOLD,     KC_VOLU,  _______,                XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_RBRC,    XXXXXXX,    XXXXXXX, KC_PGUP,    KC_HOME,  KC_END,    KC_PGDN,    XXXXXXX,     _______,  _______,                XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  KC_LPRN,  KC_RPRN,    XXXXXXX,    KC_LEFT, KC_DOWN,    KC_UP,    KC_RGHT,   KC_EXLM,    KC_EQL,                _______,                KC_END,
        _______,            XXXXXXX,  XXXXXXX,  S(KC_LBRC), S(KC_RBRC), XXXXXXX, C(KC_BSPC), KC_BSPC,  KC_DEL,    C(KC_DEL),  C(KC_SLSH),            _______,    G(KC_UP),
        _______,    _______,  _______,                                           _______,                           _______,    _______,   _______,  G(KC_LEFT), G(KC_DOWN), G(KC_RGHT)),

    [_FN3] = LAYOUT_ansi_67(
        _______, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,                RGB_TOG,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                KC_SLEP,
        QK_RBT,  RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,            _______,                XXXXXXX,
        EE_CLR,            XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,            _______,    A(KC_UP),
        QK_BOOT, _______,  _______,                             _______,                            _______,  _______,  _______,  A(KC_LEFT), A(KC_DOWN), A(KC_RGHT))
};

// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = { ENCODER_CCW_CW(KC_BRID, KC_BRIU)},
    [_FN2]   = { ENCODER_CCW_CW(KC_BRID, KC_BRIU)},
    [_FN3]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }
    return true;
}
