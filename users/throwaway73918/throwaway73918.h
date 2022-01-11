#pragma once
#include QMK_KEYBOARD_H
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

   // clang-format off
#define LAYOUT_gergoplex_wrapper(...)   LAYOUT_gergoplex(__VA_ARGS__)
#define LAYOUT_ferris_wrapper(...)   LAYOUT(__VA_ARGS__)


#define RAISE LT(_RAISE, KC_ENT)
#define LOWER LT(_LOWER, KC_TAB)
#define SPC_RAISE LT(_RAISE, KC_SPC)
#define BSPC_LOWER LT(_LOWER, KC_BSPC)
#define MOUSE TG(_MOUSE)

#define LHOME_0 LT(_RAISE, KC_G)
#define LHOME_1 ALT_T(KC_A)
#define LHOME_2 CTL_T(KC_S)
#define LHOME_3 GUI_T(KC_D)
#define LHOME_4 SFT_T(KC_F)

#define RHOME_0 LT(_LOWER, KC_H)
#define RHOME_1 SFT_T(KC_J)
#define RHOME_2 GUI_T(KC_K)
#define RHOME_3	CTL_T(KC_L)
#define RHOME_4 ALT_T(KC_SCLN)
enum layers{
    _ALPHA = 0,   // default
    _LOWER,
    _RAISE,
    _ADJUST,
    _MOUSE,
};

typedef enum {
    ENDW  = SAFE_RANGE,
    SAVEI
}custom_keycodes;


// stolen from drashna
#define _________________MAINLAYER_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________MAINLAYER_L2_________________        LHOME_1, LHOME_2, LHOME_3, LHOME_4, LHOME_0
#define _________________MAINLAYER_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________MAINLAYER_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________MAINLAYER_R2_________________        RHOME_0,    RHOME_1, RHOME_2, RHOME_3, RHOME_4
#define _________________MAINLAYER_R3_________________        KC_N,    KC_M, KC_COMM, KC_DOT, KC_BSLASH

#define ____THUMB_L____ LOWER,   SPC_RAISE
#define ____THUMB_R____ BSPC_LOWER, RAISE


/* Lower layer
 *
 * ,-----------------------------.        ,-----------------------------.
 * |  1  |  2  |  3  |  4  |  5  |        |  6  |  7  |  8  |  9  |  0  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  $  |  +  |  (  |  )  |  @  |        |  |  |  -  |  =  |  _  |  *  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  !  |  #  |  {  |  }  |  ~  |        |  &  |  [  |  ]  |  %  |  ^  |
 * `-----------------------------'        `-----------------------------'
 */
#define _________________SYMBOL_L1_________________         KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________SYMBOL_L2_________________         KC_DLR,  KC_PLUS, KC_LPRN, KC_RPRN, KC_AT
#define _________________SYMBOL_L3_________________         KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_TILD

#define _________________SYMBOL_R1_________________         KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________SYMBOL_R2_________________         KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, KC_ASTR
#define _________________SYMBOL_R3_________________         KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC


#define _________________NAV_L1____________________         _______, _______, G(S(KC_4)), G(S(C(KC_4))), G(KC_GRV)
#define _________________NAV_L2____________________         _______, KC_SLSH, KC_QUOT   , S(KC_QUOT)   ,  KC_GRV
#define _________________NAV_L3____________________         _______, _______, _______   , KC_BSPC      , _______

#define _________________NAV_R1____________________         _______, _______,   _______, _______, _______
#define _________________NAV_R2____________________         KC_LEFT, KC_DOWN,   KC_UP,  KC_RIGHT, _______
#define _________________NAV_R3____________________         _______, C(KC_GRV), _______, _______, _______

/* Adjust/whatever
 * ,-----------------------------.          ,-----------------------------.
 * | F1  | F2  | F3  | F4  | F5  |          | F6  | F7  | F8  | F9  | F10 |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | F11 |     |     |     |     |          |     |     |     |     | F12 |
 * |-----+-----+-----+-----+-----|	    |-----+-----+-----+-----+-----|
 * |     |     |     | Wrk | Gm  |          |     |     |     |     |     |
 * `-----------------------------'	    `-----------------------------'
 */

#define _________________ADJUST_L1_________________         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________ADJUST_L2_________________         KC_F11,  _______, _______, _______, _______
#define _________________ADJUST_L3_________________         _______, _______, _______, _______, _______

#define _________________ADJUST_R1_________________         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________ADJUST_R2_________________         _______, _______, _______, _______, KC_F12
#define _________________ADJUST_R3_________________         _______, _______, _______, _______, _______

/* Mouse cluster
 *  ,-----------------.
 *  | LMB |  ^  | RMB |
 *  |-----+-----+-----|
 *  |  <  |  v  |  >  |
 *  `-----------------'
 */
#define _________MOUSE_1_________    KC_BTN1, KC_MS_U, KC_BTN2
#define _________MOUSE_2_________    KC_MS_L, KC_MS_D, KC_MS_R

