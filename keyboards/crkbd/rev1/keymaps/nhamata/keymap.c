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
#define DHE_LABELS
#define ALL_COMBO_DEFS
#define ALL_COMBOS
#include QMK_KEYBOARD_H  
#include "combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
        XXXXXXX,           KC_Q,            KC_W,           KC_F,           KC_P,           KC_B,                                              KC_Y,           KC_J,           KC_U,           KC_Y,           KC_P,         XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        XXXXXXX,          KC_A,            KC_R,           KC_S,           KC_T,           KC_G,                                              KC_M,           KC_N,           KC_L,           KC_I,           KC_O,         XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        XXXXXXX,          KC_Z,       LALT_T(KC_X),   LGUI_T(KC_C),   LCTL_T(KC_D),        KC_V,                                              KC_K,      RCTL_T(KC_H),  RGUI_T(KC_COMMA), RALT_T(KC_DOT),    KC_SLSH,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                        KC_LGUI,     LSFT_T(KC_SPC),      MO(1),              MO(2),     RSFT_T(KC_E),      KC_RALT
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
        XXXXXXX,           KC_F1,           KC_F2,          KC_F3,         KC_F4,          KC_F5,                                             KC_F8,          KC_F9,         KC_F10,         KC_F11,         KC_F12,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        XXXXXXX,          KC_6,            KC_4,           KC_2,          KC_0,           KC_F6,                                              KC_F7,          KC_1,           KC_3,           KC_5,           KC_7,         XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
        XXXXXXX,           KC_Z,         KC_LALT,        KC_LGUI,     LCTL_T(KC_8),       KC_V,                                               KC_K,      RCTL_T(KC_9),      KC_RGUI,        KC_RALT,        KC_SLSH,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                         KC_LGUI,     LSFT_T(KC_SPC),     MO(1),              MO(2),     RSFT_T(KC_E),      KC_RALT
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------------------------------.                                  ,-----------------------------------------------------------------------------------------------.
         XXXXXXX,        XXXXXXX,        KC_HOME,          KC_K,         KC_END,         XXXXXXX,                                            XXXXXXX,       KC_HOME,         KC_UP,          KC_END,       XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         XXXXXXX,        XXXXXXX,         KC_H,            KC_J,          KC_L,          XXXXXXX,                                            XXXXXXX,       KC_LEFT,        KC_DOWN,        KC_RIGHT,      XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                                  |---------------+---------------+---------------+---------------+---------------+---------------|
         XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                            XXXXXXX,       XXXXXXX,         XXXXXXX,        XXXXXXX,      XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------+---------------|  |---------------+---------------+---------------+---------------+---------------+---------------+---------------|
                                                                        KC_LGUI,     LSFT_T(KC_SPC),      MO(1),              MO(2),     RSFT_T(KC_E),      KC_RALT
                                                                  //`-----------------------------------------------'  `-----------------------------------------------'
  ),


    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
