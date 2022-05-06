/* Copyright 2021 meletrix
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

// macOS Shortcut
#define KC_SLP LGUI(LALT(KC_EJCT)) // Sleep
#define KC_RELD LGUI(KC_R) // Reload
#define KC_MSCTL LCTL(KC_UP) // Mission Control
#define KC_SPTLT LCTL(KC_SPC) // Spotlight
#define KC_SCST LGUI(LSFT(KC_4)) // Screen Shot
#define KC_REC LGUI(LSFT(KC_5)) // Record
#define KC_ZMIN LGUI(LSFT(KC_EQL)) // zoom in
#define KC_ZMOUT LGUI(LSFT(KC_MINS)) // zoom out

// Rider Shortcut
#define KC_DBRN LALT(KC_F5) // Debugger Attach
#define KC_DBTN LSFT(KC_F5) // Debugger Terminate
#define KC_STPO KC_F10 // Step Over
#define KC_STPI LGUI(KC_F11) // Step Into
#define KC_STOT LSFT(KC_F11) // Step Out
#define KC_MTBP LALT(LSFT(LGUI(KC_F10))) // Mute Break Point
#define KC_VWBP LALT(LGUI(KC_B)) // View Break Points
#define KC_RESM KC_F5 // Resume Program

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker_split_bs(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, KC_RELD,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,  KC_MSCTL,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_SPTLT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),   KC_SCST,
        MO(2), KC_LALT, KC_LGUI,                            KC_SPC,                    KC_RGUI, KC_RALT,            KC_ZMOUT, KC_ZMIN, KC_REC
    ),
    [1] = LAYOUT_65_ansi_blocker_split_bs(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_SLP,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_RGHT,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DOWN, _______, _______, RESET,
        _______, _______, _______,                            _______,                   _______, _______,          _______, _______, _______
    ),
    [2] = LAYOUT_65_ansi_blocker_split_bs(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MTBP, _______, _______, KC_DBRN, KC_DBTN, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_STPI, KC_STPO, KC_STOT, KC_RESM, _______, _______,          _______, _______,
        _______,          _______, _______, _______, KC_VWBP, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______,          _______, _______, _______
    ),
};
