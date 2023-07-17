#include "combo.h"
// symbols that likely wont change.
const uint16_t PROGMEM comma_combo[] = {LI0, LM0, COMBO_END}; // , KC_COMMA
const uint16_t PROGMEM dot_combo[] = {RI0, RM0, COMBO_END}; // . KC_DOT
const uint16_t PROGMEM lprn_combo[] = {LM0, LR0, COMBO_END}; // ( KC_LPRN
const uint16_t PROGMEM rprn_combo[] = {RM0, RR0, COMBO_END}; // ) KC_RPRN
const uint16_t PROGMEM lbrc_combo[] = {LI0, LR0, COMBO_END}; // [ KC_LBRC
const uint16_t PROGMEM rbrc_combo[] = {RI0, RR0, COMBO_END}; // ] KC_RBRC
const uint16_t PROGMEM lcbr_combo[] = {LI5, LM0, COMBO_END}; // { KC_LCBR
const uint16_t PROGMEM rcbr_combo[] = {RI5, RM0, COMBO_END}; // } KC_RCBR
const uint16_t PROGMEM labk_combo[] = {LI5, LM5, COMBO_END}; // < KC_LABK
const uint16_t PROGMEM rabk_combo[] = {RI5, RM5, COMBO_END}; // > KC_RABK
const uint16_t PROGMEM del_combo[] = {LI1, LM1, COMBO_END}; // KC_DEL
const uint16_t PROGMEM bspc_combo[] = {RI1, RM1, COMBO_END}; // KC_BSPC
const uint16_t PROGMEM quot_combo[] = {LM1, LR1, COMBO_END}; // ' KC_QUOT
const uint16_t PROGMEM dqt_combo[] = {RM1, RR1 COMBO_END}; // " KC_DQT
const uint16_t PROGMEM mins_combo[] = {LI5, LR0, COMBO_END}; // - KC_MINS 
const uint16_t PROGMEM scln_combo[] = {RI5, RR0, COMBO_END}; // ; KC_SCLN
const uint16_t PROGMEM tab_combo[] = {LI3, LM3, COMBO_END}; //KC_TAB
const uint16_t PROGMEM ent_combo[] = {RI7, RM7, COMBO_END}; // KC_ENT
// symbols that are prone to update.
const uint16_t PROGMEM astr_combo[] = {LM5, LR5, COMBO_END}; // * KC_ASTR
const uint16_t PROGMEM slsh_combo[] = {RM5, RR5, COMBO_END}; // /
const uint16_t PROGMEM hash_combo[] = {LI5, LR5, COMBO_END}; // # KC_HASH
const uint16_t PROGMEM dlr_combo[] = {RI5, RR5, COMBO_END}; // $ KC_DLR 
const uint16_t PROGMEM ampr_combo[] = {LI1, LR1, COMBO_END}; // & KC_AMPR
const uint16_t PROGMEM bsls_combo[] = {RI1, RR1, COMBO_END}; 
// should be med-low use
const uint16_t PROGMEM exlm_combo[] = {LI0, LM1, COMBO_END}; // ! KC_EXLM 
const uint16_t PROGMEM at_combo[] = {RI0, RM1, COMBO_END}; // @ KC_AT
const uint16_t PROGMEM perc_combo[] = {LI0, LR1, COMBO_END}; // % KC_PERC
const uint16_t PROGMEM circ_combo[] = {RI0, RR1, COMBO_END}; // ^ KC_CIRC
// Combos with pinky, extremely low use
const uint16_t PROGMEM grv_combo[] = {LI0, LP0, COMBO_END}; // ` KC_GRV
const uint16_t PROGMEM tild_combo[] = {RI0, RP0, COMBO_END}; // ~ KC_TILD
const uint16_t PROGMEM esc_combo[] = {LR0, LP0, COMBO_END}; // KC_ESC
const uint16_t PROGMEM caps_combo[] = {RR0, RP0, COMBO_END}; // KC_CAPS
//nav cluster, generally on another layer
const uint16_t PROGMEM pgup_combo[] = {RI1, RM1, COMBO_END}; // KC_PGUP
const uint16_t PROGMEM pgdn_combo[] = {RM1, RR1, COMBO_END}; // KC_PGDN
#ifdef BOTTOM_RIGHT_NAV
const uint16_t PROGMEM bottom_right_pgup_combo[] = {RI4, RM4, COMBO_END}; // KC_PGUP
const uint16_t PROGMEM bottom_right_pgdn_combo[] = {RM4, RR4, COMBO_END}; // KC_PGDN
#endif



// This is here for now for MVP, but it is inteded for a keymap for a particular keyboard to define "key_combos"
#ifdef ALL_COMBOS
combo_t key_combos[] = {
    [COMMA_COMBO]=COMBO(comma_combo, KC_COMMA),
    [DOT_COMBO]=COMBO(dot_combo, KC_DOT),
    [LPRN_COMBO]=COMBO(lprn_combo, KC_LPRN),
    [RPRN_COMBO]=COMBO(rprn_combo, KC_RPRN),
    [LBRC_COMBO]=COMBO(lbrc_combo, KC_LBRC),
    [RBRC_COMBO]=COMBO(rbrc_combo, KC_RBRC),
    [LCBR_COMBO]=COMBO(lcbr_combo, KC_LCBR),
    [RCBR_COMBO]=COMBO(rcbr_combo, KC_RCBR),
    [LABK_COMBO]=COMBO(labk_combo, KC_LABK),
    [RABK_COMBO]=COMBO(rabk_combo, KC_RABK),
    [DEL_COMBO]=COMBO(del_combo, KC_DEL),
    [BSPC_COMBO]=COMBO(bspc_combo, KC_BSPC),
    [QUOT_COMBO]=COMBO(quot_combo, KC_QUOT),
    [DQT_COMBO]=COMBO(dqt_combo, KC_DQT),
    [MINS_COMBO]=COMBO(mins_combo, KC_MINS),
    [SCLN_COMBO]=COMBO(scln_combo, KC_SCLN),
    [TAB_COMBO]=COMBO(tab_combo, KC_TAB),
    [ENT_COMBO]=COMBO(ent_combo, KC_ENT),
    [ASTR_COMBO]=COMBO(astr_combo, KC_ASTR),
    [SLSH_COMBO]=COMBO(slsh_combo, KC_SLSH),
    [HASH_COMBO]=COMBO(hash_combo, KC_HASH),
    [DLR_COMBO]=COMBO(dlr_combo, KC_DLR),   
    [AMPR_COMBO]=COMBO(ampr_combo, KC_AMPR),
    [BSLS_COMBO]=COMBO(bsls_combo, KC_BSLS),
    [EXLM_COMBO]=COMBO(exlm_combo, KC_EXLM),
    [AT_COMBO]=COMBO(at_combo, KC_AT),
    [PERC_COMBO]=COMBO(perc_combo, KC_PERC),
    [CIRC_COMBO]=COMBO(circ_combo, KC_CIRC),
    [GRV_COMBO]=COMBO(grv_combo, KC_GRV),
    [TILD_COMBO]=COMBO(tild_combo, KC_TILD),
    [ESC_COMBO]=COMBO(grv_combo, KC_ESC),
    [CAPS_COMBO]=COMBO(tild_combo, KC_CAPS),
    [PGUP_COMBO]=COMBO(pgup_combo, KC_PGUP),
    [PGDN_COMBO]=COMBO(pgdn_combo, KC_PGDN),
    #ifdef BOTTOM_RIGHT_NAV
        [BOTTOM_RIGHT_PGUP_COMBO]=COMBO(bottom_right_pgup_combo, KC_PGUP),
        [BOTTOM_RIGHT_PGDN_COMBO]=COMBO(bottom_right_pgdn_combo, KC_PGDN),
    #endif
};
#endif
