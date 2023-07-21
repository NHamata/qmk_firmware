#include "combo.h"
#include "quantum.h"
// symbols that likely wont change.
#if defined FIRM_COMBO_DEFS || defined ALL_COMBO_DEFS
const uint16_t PROGMEM lprn_combo[] = {LI0, LM0, COMBO_END}; // ( KC_LPRN
const uint16_t PROGMEM rprn_combo[] = {RI0, RM0, COMBO_END}; // ) KC_RPRN
const uint16_t PROGMEM lcbr_combo[] = {LM0, LR0, COMBO_END}; // { KC_LCBR
const uint16_t PROGMEM rcbr_combo[] = {RM0, RR0, COMBO_END}; // } KC_RCBR
const uint16_t PROGMEM labk_combo[] = {LI0, LR0, COMBO_END}; // < KC_LABK
const uint16_t PROGMEM rabk_combo[] = {RI0, RR0, COMBO_END}; // > KC_RABK
const uint16_t PROGMEM eql_combo[] = {LI5, LM0, COMBO_END}; // = KC_EQL
const uint16_t PROGMEM unds_combo[] = {RI5, RM0, COMBO_END}; // _ KC_UNDS
const uint16_t PROGMEM lbrc_combo[] = {LI5, LR0, COMBO_END}; // [ KC_LBRC
const uint16_t PROGMEM rbrc_combo[] = {RI5, RR0, COMBO_END}; // ] KC_RBRC
const uint16_t PROGMEM scln_combo[] = {LI5, LM5, COMBO_END}; // ; KC_SCLN
const uint16_t PROGMEM mins_combo[] = {RI5, RM5, COMBO_END}; // - KC_MINS 
const uint16_t PROGMEM del_combo[] = {LI1, LM1, COMBO_END}; // KC_DEL
const uint16_t PROGMEM bspc_combo[] = {RI1, RM1, COMBO_END}; // KC_BSPC
const uint16_t PROGMEM quot_combo[] = {LM1, LR1, COMBO_END}; // ' KC_QUOT
const uint16_t PROGMEM dqt_combo[] = {RM1, RR1, COMBO_END}; // " KC_DQT
const uint16_t PROGMEM tab_combo[] = {LI3, LM3, COMBO_END}; //KC_TAB
const uint16_t PROGMEM ent_combo[] = {RI7, RM7, COMBO_END}; // KC_ENT
#endif
// symbols that may change, generally medium usage symbols.
#if defined FLEXIBLE_COMBO_DEFS || defined ALL_COMBO_DEFS
const uint16_t PROGMEM slsh_combo[] = {LM5, LR5, COMBO_END}; // / KC_SLSH
const uint16_t PROGMEM astr_combo[] = {RM5, RR5, COMBO_END}; // * KC_ASTR
const uint16_t PROGMEM hash_combo[] = {LI5, LR5, COMBO_END}; // # KC_HASH
const uint16_t PROGMEM dlr_combo[] = {RI5, RR5, COMBO_END}; // $ KC_DLR 

const uint16_t PROGMEM ampr_combo[] = {LI1, LR1, COMBO_END}; // & KC_AMPR
const uint16_t PROGMEM bsls_combo[] = {RI1, RR1, COMBO_END};  // \ KC_BSLS

const uint16_t PROGMEM exlm_combo[] = {LI0, LM1, COMBO_END}; // ! KC_EXLM 
const uint16_t PROGMEM at_combo[] = {RI0, RM1, COMBO_END}; // @ KC_AT

const uint16_t PROGMEM perc_combo[] = {LI0, LR1, COMBO_END}; // % KC_PERC
const uint16_t PROGMEM circ_combo[] = {RI0, RR1, COMBO_END}; // ^ KC_CIRC
#endif
// Symbols that use the pinky for their combos. This should be reserved for least used symbols,
#if defined PINKY_COMBO_DEFS || defined ALL_COMBO_DEFS
const uint16_t PROGMEM grv_combo[] = {LI0, LP0, COMBO_END}; // ` KC_GRV
const uint16_t PROGMEM tild_combo[] = {RI0, RP0, COMBO_END}; // ~ KC_TILD
const uint16_t PROGMEM esc_combo[] = {LR0, LP0, COMBO_END}; // KC_ESC
const uint16_t PROGMEM caps_combo[] = {RR0, RP0, COMBO_END}; // KC_CAPS
#endif
// combos related to nav
#if defined NAV_ORTHO_COMBO_DEFS
const uint16_t PROGMEM pgup_combo[] = {KC_HOME, KC_UP, COMBO_END}; // KC_PGUP
const uint16_t PROGMEM pgdn_combo[] = {KC_UP, KC_END, COMBO_END}; // KC_PGDN
const uint16_t PROGMEM pgup_hjkl_combo[] = {KC_HOME, KC_K, COMBO_END}; // KC_PGUP
const uint16_t PROGMEM pgdn_hjkl_combo[] = {KC_K, KC_END, COMBO_END}; // KC_PGDN
#elif defined NAV_STAGGER_COMBO_DEFS
const uint16_t PROGMEM pgup_combo[] = {KC_LEFT, KC_UP, COMBO_END}; // KC_PGUP
const uint16_t PROGMEM pgdn_combo[] = {KC_UP, KC_RIGHT, COMBO_END}; // KC_PGDN
// const uint16_t PROGMEM pgup_hjkl_combo[] = {KC_H, KC_K, COMBO_END}; // KC_PGUP
// const uint16_t PROGMEM pgdn_hjkl_combo[] = {KC_K, KC_L, COMBO_END}; // KC_PGDN
#endif


#ifdef ALL_COMBOS
combo_t key_combos[] = {
    [LPRN_COMBO]=COMBO(lprn_combo, KC_LPRN),
    [RPRN_COMBO]=COMBO(rprn_combo, KC_RPRN),
    [LCBR_COMBO]=COMBO(lcbr_combo, KC_LCBR),
    [RCBR_COMBO]=COMBO(rcbr_combo, KC_RCBR),
    [LABK_COMBO]=COMBO(labk_combo, KC_LABK),
    [RABK_COMBO]=COMBO(rabk_combo, KC_RABK),
    [EQL_COMBO]=COMBO(eql_combo, KC_EQL),
    [UNDS_COMBO]=COMBO(unds_combo, KC_UNDS),
    [LBRC_COMBO]=COMBO(lbrc_combo, KC_LBRC),
    [RBRC_COMBO]=COMBO(rbrc_combo, KC_RBRC),
    [SCLN_COMBO]=COMBO(scln_combo, KC_SCLN),
    [MINS_COMBO]=COMBO(mins_combo, KC_MINS),
    [DEL_COMBO]=COMBO(del_combo, KC_DEL),
    [BSPC_COMBO]=COMBO(bspc_combo, KC_BSPC),
    [QUOT_COMBO]=COMBO(quot_combo, KC_QUOT),
    [DQT_COMBO]=COMBO(dqt_combo, KC_DQT),
    [TAB_COMBO]=COMBO(tab_combo, KC_TAB),
    [ENT_COMBO]=COMBO(ent_combo, KC_ENT),
    [SLSH_COMBO]=COMBO(slsh_combo, KC_SLSH),
    [ASTR_COMBO]=COMBO(astr_combo, KC_ASTR),
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
    [ESC_COMBO]=COMBO(esc_combo, KC_ESC),
    [CAPS_COMBO]=COMBO(caps_combo, KC_CAPS),
    [PGUP_COMBO]=COMBO(pgup_combo, KC_PGUP),
    [PGDN_COMBO]=COMBO(pgdn_combo, KC_PGDN),
    #if defined NAV_ORTHO_COMBO_DEFS
        [PGUP_HJKL_COMBO]=COMBO(pgup_hjkl_combo, KC_PGUP),
        [PGDN_HJKL_COMBO]=COMBO(pgdn_hjkl_combo, KC_PGDN),
    #endif
};
#endif

