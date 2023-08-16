/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// qmk compile -kb crkbd/rev1 -km nhamata
#define DHE_LABELS
#define ALL_COMBO_DEFS
#define NAV_ORTHO_COMBO_DEFS
#define ALL_COMBOS
#include QMK_KEYBOARD_H  
#include "combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
        _______,           KC_Q,            KC_W,           KC_F,           KC_P,         KC_B,                                             _______,         KC_J,           KC_U,           KC_Y,          _______,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,           KC_A,            KC_R,           KC_S,           KC_T,         KC_G,                                              KC_M,           KC_N,           KC_L,           KC_I,           KC_O,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,           KC_Z,      LALT_T(KC_X),   LGUI_T(KC_C),   LCTL_T(KC_D),       KC_V,                                              KC_K,      RCTL_T(KC_H),  RGUI_T(KC_COMMA), RALT_T(KC_DOT),    KC_DEL,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                         KC_ESC,          MO(1),      RSFT_T(KC_E),      LSFT_T(KC_SPC),      MO(2),         KC_BSPC
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
        _______,          KC_F1,           KC_F2,          KC_F3,         KC_F4,         KC_F6,                                               KC_F8,         KC_F9,         KC_F10,         KC_F11,          KC_F12,       _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,          KC_6,            KC_4,           KC_2,          KC_0,           KC_F5,                                              KC_F7,         KC_1,           KC_3,           KC_5,          KC_7,          _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,          KC_8,          KC_LALT,    LGUI_T(KC_ESC), LCTL_T(KC_BSLS),    KC_CAPS,                                            KC_BSPC,   RCTL_T(KC_SLSH), RGUI_T(KC_BSPC),   KC_RALT,         KC_9,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                        _______,          MO(1),         _______,         OSM(KC_RSFT),  OSM(KC_RGUI),   OSM(KC_RCTL)
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
         _______,        _______,        RGB_HUD,        RGB_VAD,        RGB_TOG,       _______,                                            _______,        RGB_MOD,        RGB_VAI,        RGB_HUI,       _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         _______,        RGB_SAD,        KC_PGDN,       KC_LEFT,        KC_RIGHT,       _______,                                            _______,        KC_DOWN,         KC_UP,         KC_PGUP,       RGB_SAI,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         _______,        KC_LALT,        KC_LALT,        KC_LGUI,    LCTL_T(KC_HOME),   _______,                                            _______,    RCTL_T(KC_END),     KC_RGUI,        KC_RALT,       KC_RALT,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                      OSM(KC_LCTL),   OSM(KC_LGUI),   OSM(KC_LSFT),           _______,        MO(2),         _______
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),


    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
