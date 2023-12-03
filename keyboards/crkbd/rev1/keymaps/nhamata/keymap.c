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
        _______,           KC_Q,            KC_W,           KC_F,           KC_P,         KC_B,                                            RGUI(KC_P),       KC_J,           KC_U,           KC_Y,          _______,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,           KC_A,            KC_R,           KC_S,           KC_T,         KC_G,                                              KC_M,           KC_N,           KC_L,           KC_I,           KC_O,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,           KC_Z,      LALT_T(KC_X),   LGUI_T(KC_C),         KC_D,       KC_V,                                                KC_K,           KC_H,     RGUI_T(KC_COMMA), RALT_T(KC_DOT),    KC_DEL,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                         _______,     KC_LCTL,      LT(1, KC_E),          LT(2, KC_SPC) ,     KC_RSFT,    _______
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
        _______,          KC_F1,           KC_F2,          KC_F3,         KC_F4,         KC_F6,                                              KC_F7,          KC_F8,          KC_F9,         KC_F10,         KC_F11,        KC_F12,       
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,          KC_6,            KC_4,           KC_2,          KC_0,           KC_F5,                                         RGUI(KC_RSFT),      KC_1,           KC_3,           KC_5,           KC_7,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        _______,          KC_8,          KC_LALT,        KC_LGUI,    LCTL_T(KC_ESC),    KC_CAPS,                                            KC_BSPC,    RCTL_T(KC_BSPC),    KC_RGUI,        KC_RALT,         KC_9,         _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                        _______,          _______,         MO(1),           KC_RGUI,        KC_RSFT,        _______
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
         _______,        KC_PSCR,        RGB_TOG,          KC_H,           KC_L,        RGB_HUD,                                            RGB_HUI,        KC_LEFT,        KC_RIGHT,       KC_PGUP,        _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         _______,        KC_INS,         RGB_MOD,          KC_K,           KC_J,        RGB_VAD,                                            RGB_VAI,        KC_DOWN,         KC_UP,         KC_PGDN,        _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         _______,        _______,        KC_LALT,        KC_LGUI,        KC_LCTL,       RGB_SAD,                                            RGB_SAI,    RCTL_T(KC_HOME), RGUI_T(KC_END),    KC_RALT,        KC_RALT,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                         KC_LCTL,        KC_LGUI,        KC_LSFT,           MO(2),        _______,         _______
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
