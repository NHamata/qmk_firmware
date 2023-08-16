/* Copyright 2022 Boardsource
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
// qmk compile -kb boardsource/technik_s -km nhamata
#define QWERTY_LABELS
#define ALL_COMBO_DEFS
#define NAV_STAGGER_COMBO_DEFS
#define ALL_COMBOS
#include QMK_KEYBOARD_H
#include "combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    _______,             KC_Q,             KC_W,             KC_E,             KC_R,             KC_T,             KC_Y,             KC_U,             KC_I,             KC_O,             KC_P,             _______,
    _______,             KC_A,             KC_S,             KC_D,             KC_F,             KC_G,             KC_H,             KC_J,             KC_K,             KC_L,             KC_SCLN,
    _______,             KC_BSPC,          LALT_T(KC_Z),     LGUI_T(KC_X),     LCTL_T(KC_C),     KC_V,             KC_B,             KC_N,             RCTL_T(KC_M),     RGUI_T(KC_COMMA), RALT_T(KC_DOT),   KC_DEL,
    _______,             _______,          _______,                            KC_ESC,           MO(1),                              RSFT_T(KC_SPC),   MO(2),            _______,          _______,          _______
  ),
  [1] = LAYOUT(
    _______,             KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F6,            KC_F8,            KC_F9,            KC_F10,            KC_F11,          KC_F12,           _______,
    _______,             KC_6,             KC_4,             KC_2,             KC_0,             KC_F5,            KC_F7,            KC_1,             KC_3,              KC_5,            KC_7,
    _______,             KC_8,             KC_LALT,          LGUI_T(KC_ESC),   LCTL_T(KC_BSLS),  KC_CAPS,          _______,          KC_BSPC,          RCTL_T(KC_SLSH),   RGUI_T(KC_BSPC), KC_RALT,          KC_9,          
    _______,             _______,          _______,                            _______,          MO(1),                              OSM(KC_RSFT),     OSM(KC_RGUI),      _______,         _______,          _______
  ),
  [2] = LAYOUT(
    _______,             _______,          RGB_HUD,          RGB_VAD,          RGB_TOG,          _______,          _______,          RGB_MOD,          RGB_VAI,           RGB_HUI,         _______,          _______,
    _______,             RGB_SAD,          KC_PGDN,          KC_LEFT,          KC_RIGHT,         _______,          _______,          KC_DOWN,          KC_UP,             KC_PGUP,         RGB_SAI,
    _______,             KC_LALT,          KC_LALT,          KC_LGUI,          LCTL_T(KC_HOME),  _______,          _______,          _______,          RCTL_T(KC_END),    KC_RGUI,         KC_RALT,          KC_RALT,          
    _______,             _______,          _______,                            OSM(KC_LGUI),     OSM(KC_LSFT),                       _______,          MO(2),             _______,         _______,          _______
  ),
};
