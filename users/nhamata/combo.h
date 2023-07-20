#pragma once 
#include QMK_KEYBOARD_H
#include "quantum.h"


/*
This file defines all combos that may be used in a keymap. The intent is that it is abstract and general enough, such that multiple keymaps, regardless of layout or key alignment, can reuse these combos. This also keeps combos consistent, so that there is no need to relearn new combos for a new keyboard. This also avoid defining the same sets of combos for many keymaps (avoiding duplicates).

It is inteneded that a user define all the combos that will be utilized for a given keyboard, layout and keymap by defining the "combo_t key_combos[]" in the corresponding "keymap.c" file, utilizing the combos defined here to fill the array. If all the combos here are desired and nothing more, than simply define "ALL_COMBOS" which negates the need to define "combo_t key_combos[]" for that "keymap.c" file.

-----ALIAS LABELS-----
All combo's use aliases to more abstractly label and represent finger positions in relation to its resting position instead of using the keycodes. This allows combos to easily be ported to multiple different keymaps and layouts. 

The following are labels for each hand, HAND-LABELS:
L - left hand
R- right hand

The following are labels for each finger, FINGER-LABELS:

T - the thumb
I - the index finger
M - the middle finger
R - the ring finger
P - the pinky finger

Each combo is always defined in the order listed above top down.

The position of where the finger must press for a given combo is relative to where its resting position is. 
The following diagram are POSITION-LABELS:

|---+---+---+
| 8 | 1 | 2 |
|---+---+---+
| 7 | 0 | 3 |
|---+---+---+
| 6 | 5 | 4 |
|---+---+---+

The number zero represents the resting position of a finger, such as homerow or on one of the thumb keys of the thumb cluster, if one exist. 
Every other number shows where the finger must press a key in relation to its resting position. As an example position 1 is the key immediately above the resting position of a given finger. If there is a horizontal stagger the 1 position represents the key above the resting position of a given finger that is also the easiest to depress.



To denote a keypress in a combo the following must be listed in order consecutively (no sepearator or delimiter between):
HAND-LABEL, FINGER-LABEL, POSITION-LABEL
for example:
LT7, This combo occurs when the left hand thumb is to the left of the resting position
RM1, This combo occurs when the right hand middle finger is one key above homerow.
*/


//Labels for colemak DHE layout, a layout that is a modification of the popular colemak mod-dh, where the letter 'e' is put on a thumb key. A few keyswaps were required to accomodate this.
#ifdef DHE_LABELS
    #define LI0   KC_T
    #define LM0   KC_S
    #define LR0   KC_R
    #define LP0   KC_A
    #define LI1   KC_P
    #define LM1   KC_F
    #define LR1   KC_W
    #define LI3   KC_G
    #define LM3   KC_T
    #define LI2   KC_B
    #define LM2   KC_P
    #define RI0   KC_N
    #define RM0   KC_L
    #define RR0   KC_I
    #define RP0   KC_O
    #define RI1   KC_J
    #define RM1   KC_U
    #define RR1   KC_Y
    #define RI7   KC_M
    #define RM7   KC_N
    #define LI8   KC_BSPC
    #define LM8   KC_J
    #define LT0    LSFT_T(KC_SPC)
    #define LI5    LCTL_T(KC_D)
    #define LM5    LGUI_T(KC_C)
    #define LR5    LALT_T(KC_X)
    #define RT0    RSFT_T(KC_E)
    #define RI5    RCTL_T(KC_H)
    #define RM5    RGUI_T(KC_COMMA)
    #define RR5    RALT_T(KC_DOT)
//Labels for basic QWERTY layout. Keycodes choosen based on ease of usage.
#elif QWERTY_LABELS
    #define LI0   KC_F
    #define LM0   KC_D
    #define LR0   KC_S
    #define LP0   KC_A
    #define LI1   KC_R
    #define LM1   KC_E
    #define LR1   KC_W
    #define LI3   KC_G
    #define LM3   KC_F
    #define LI2   KC_T
    #define LM2   KC_R
    #define RI0   KC_J
    #define RM0   KC_K
    #define RR0   KC_L
    #define RP0   KC_COLON
    #define RI1   KC_I
    #define RM1   KC_O
    #define RR1   KC_P
    #define RI7   KC_H
    #define RM7   KC_J
    #define LI8   KC_U
    #define LM8   KC_I
    #define LT0   LSFT_T(KC_SPC)
    #define LI5   LCTL_T(KC_C)
    #define LR5   LGUI_T(KC_Z)
    #define LM5   LALT_T(KC_X)    
    #define RT0   RSFT_T(KC_E)
    #define RI5   RCTL_T(KC_M)
    #define RR5   RGUI_T(KC_COMMA)    
    #define RM5   RALT_T(KC_DOT)
#endif

enum combos {
    LPRN_COMBO,
    RPRN_COMBO,
    LCBR_COMBO,
    RCBR_COMBO,
    LABK_COMBO,
    RABK_COMBO,
    EQL_COMBO,
    UNDS_COMBO,
    LBRC_COMBO,
    RBRC_COMBO,
    SCLN_COMBO,
    MINS_COMBO,
    DEL_COMBO,
    BSPC_COMBO,
    QUOT_COMBO,
    DQT_COMBO,
    TAB_COMBO,
    ENT_COMBO,
    SLSH_COMBO,
    ASTR_COMBO,
    HASH_COMBO,
    DLR_COMBO,   
    AMPR_COMBO,
    BSLS_COMBO,
    EXLM_COMBO,
    AT_COMBO,  
    PERC_COMBO,
    CIRC_COMBO,
    GRV_COMBO,
    TILD_COMBO,
    ESC_COMBO,
    CAPS_COMBO,
    PGUP_COMBO,
    PGDN_COMBO,
    PGUP_HJKL_COMBO,
    PGDN_HJKL_COMBO,
};

#if defined FIRM_COMBO_DEFS || defined ALL_COMBO_DEFS
extern const uint16_t PROGMEM lprn_combo[]; // ( KC_LPRN
extern const uint16_t PROGMEM rprn_combo[]; // ) KC_RPRN
extern const uint16_t PROGMEM lcbr_combo[]; // { KC_LCBR
extern const uint16_t PROGMEM rcbr_combo[]; // } KC_RCBR
extern const uint16_t PROGMEM labk_combo[]; // < KC_LABK
extern const uint16_t PROGMEM rabk_combo[]; // > KC_RABK
extern const uint16_t PROGMEM eql_combo[]; // = KC_EQL
extern const uint16_t PROGMEM rbrc_combo[]; // _ KC_UNDS
extern const uint16_t PROGMEM lbrc_combo[]; // [ KC_LBRC
extern const uint16_t PROGMEM rbrc_combo[]; // ] KC_RBRC
extern const uint16_t PROGMEM scln_combo[]; // ; KC_SCLN
extern const uint16_t PROGMEM mins_combo[]; // - KC_MINS 
extern const uint16_t PROGMEM del_combo[]; // KC_DEL
extern const uint16_t PROGMEM bspc_combo[]; // KC_BSPC
extern const uint16_t PROGMEM quot_combo[]; // ' KC_QUOT
extern const uint16_t PROGMEM dqt_combo[]; // " KC_DQT
extern const uint16_t PROGMEM tab_combo[]; //KC_TAB
extern const uint16_t PROGMEM ent_combo[]; // KC_ENT
#endif
// symbols that may change, generally medium usage symbols.
#if defined FLEXIBLE_COMBO_DEFS || defined ALL_COMBO_DEFS
extern const uint16_t PROGMEM slsh_combo[]; // / KC_SLSH
extern const uint16_t PROGMEM astr_combo[]; // * KC_ASTR
extern const uint16_t PROGMEM hash_combo[]; // # KC_HASH
extern const uint16_t PROGMEM dlr_combo[]; // $ KC_DLR 

extern const uint16_t PROGMEM ampr_combo[]; // & KC_AMPR
extern const uint16_t PROGMEM bsls_combo[];  // \ KC_BSLS

extern const uint16_t PROGMEM exlm_combo[]; // ! KC_EXLM 
extern const uint16_t PROGMEM at_combo[]; // @ KC_AT

extern const uint16_t PROGMEM perc_combo[]; // % KC_PERC
extern const uint16_t PROGMEM circ_combo[]; // ^ KC_CIRC
#endif
// Symbols that use the pinky for their combos. This should be reserved for least used symbols,
#if defined PINKY_COMBO_DEFS || defined ALL_COMBO_DEFS
extern const uint16_t PROGMEM grv_combo[]; // ` KC_GRV
extern const uint16_t PROGMEM tild_combo[]; // ~ KC_TILD
extern const uint16_t PROGMEM esc_combo[]; // KC_ESC
extern const uint16_t PROGMEM caps_combo[]; // KC_CAPS
#endif
// combos related to nav
#if defined NAV_COMBO_DEFS || defined ALL_COMBO_DEFS
extern const uint16_t PROGMEM pgup_combo[]; // KC_PGUP
extern const uint16_t PROGMEM pgdn_combo[]; // KC_PGDN
extern const uint16_t PROGMEM pgup_hjkl_combo[]; // KC_PGUP
extern const uint16_t PROGMEM pgdn_hjkl_combo[]; // KC_PGDN
#endif