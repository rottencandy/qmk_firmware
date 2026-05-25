/*
Copyright 2026 saud <hi@saud.wtf>

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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5(
  //,----------------------------------------.  ,-----------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+----|  |--------+--------+--------+--------+------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  //|--------+--------+--------+--------+----'  `--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+-----.  ,--------+--------+--------+--------+--------|
                      KC_LGUI, TL_LOWR,  KC_SPC,   KC_ENT, TL_UPPR, KC_RGUI
                 //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x5(
  //,----------------------------------------------.  ,-----------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX,XXXXXXX, KC_LALT,    KC_RALT, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT,
  //|--------+--------+--------+---------+--------'  `--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                       KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                    //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x5(
  //,-------------------------------------------.  ,--------------------------------------------.
       KC_TAB, KC_EXLM, KC_AT, KC_HASH,  KC_DLR,     KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_RALT, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC,
  //|--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                        KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                    //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x5(
  //,---------------------------------------------.  ,--------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------|
      _______, _______, _______, _______, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------|
                         KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                    //`--------------------------'  `--------------------------'
  )
};


