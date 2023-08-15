#include "combo.h"
#include "quantum.h"
// symbols that likely wont change.
#if defined STABLE_COMBO_DEFS || defined ALL_COMBO_DEFS
const uint16_t PROGMEM tab_combo[] = {LI0, LM0, COMBO_END}; //KC_TAB
const uint16_t PROGMEM ent_combo[] = {RI0, RM0, COMBO_END}; // KC_ENT
const uint16_t PROGMEM lprn_combo[] = {LM0, LR0, COMBO_END}; // ( KC_LPRN
const uint16_t PROGMEM rprn_combo[] = {RM0, RR0, COMBO_END}; // ) KC_RPRN
const uint16_t PROGMEM lcbr_combo[] = {LI0, LR0, COMBO_END}; // { KC_LCBR
const uint16_t PROGMEM rcbr_combo[] = {RI0, RR0, COMBO_END}; // } KC_RCBR
const uint16_t PROGMEM quot_combo[] = {LI1, LM1, COMBO_END}; // ' KC_QUOT
const uint16_t PROGMEM dqt_combo[] = {RI1, RM1, COMBO_END}; // " KC_DQT
const uint16_t PROGMEM lbrc_combo[] = {LM1, LR1, COMBO_END}; // [ KC_LBRC
const uint16_t PROGMEM rbrc_combo[] = {RM1, RR1, COMBO_END}; // ] KC_RBRC
const uint16_t PROGMEM circ_combo[] = {LI1, LR1, COMBO_END}; // ^ KC_CIRC
const uint16_t PROGMEM dlr_combo[] = {RI1, RR1, COMBO_END}; // $ KC_DLR 
const uint16_t PROGMEM eql_combo[] = {LI5, LM0, COMBO_END}; // = KC_EQL
const uint16_t PROGMEM unds_combo[] = {RI5, RM0, COMBO_END}; // _ KC_UNDS
const uint16_t PROGMEM scln_combo[] = {LI5, LR0, COMBO_END}; // ; KC_SCLN
const uint16_t PROGMEM coln_combo[] = {RI5, RR0, COMBO_END}; // : KC_COLN
const uint16_t PROGMEM mins_combo[] = {LI5, LM5, COMBO_END}; // - KC_MINS
const uint16_t PROGMEM astr_combo[] = {RI5, RM5, COMBO_END}; // * KC_ASTR
const uint16_t PROGMEM labk_combo[] = {LM5, LR5, COMBO_END}; // < KC_LABK
const uint16_t PROGMEM rabk_combo[] = {RM5, RR5, COMBO_END}; // > KC_RABK
//const uint16_t PROGMEM del_combo[] = {}; // KC_DEL
//const uint16_t PROGMEM bspc_combo[] = {}; // KC_BSPC
//const uint16_t PROGMEM bsls_combo[] = {}; // \ KC_BSLS
//const uint16_t PROGMEM slsh_combo[] = {}; // / KC_SLSH
#endif
// experimental symbols that may change, generally medium to low usage symbols.
#if defined EXP_COMBO_DEFS || defined ALL_COMBO_DEFS
const uint16_t PROGMEM exlm_combo[] = {LI5, LR5, COMBO_END}; // ! KC_EXLM 
const uint16_t PROGMEM at_combo[] = {RI5, RR5, COMBO_END}; // @ KC_AT
const uint16_t PROGMEM ques_combo[] = {LI0, LM1, COMBO_END}; // ? KC_QUES
const uint16_t PROGMEM plus_combo[] = {RI0, RM1, COMBO_END}; // + KC_PLUS
const uint16_t PROGMEM ampr_combo[] = {LI0, LM5, COMBO_END}; // & KC_AMPR
const uint16_t PROGMEM pipe_combo[] = {RI0, RM5, COMBO_END}; // | KC_PIPE
//LI0, LR1, COMBO_END
//RI0, RR1, COMBO_END
//const uint16_t PROGMEM hash_combo[] = {LI1, LR0, COMBO_END}; // # KC_HASH
//const uint16_t PROGMEM perc_combo[] = {RI1, RR0, COMBO_END}; // % KC_PERC
//LI0, LR5, COMBO_END
//RI0, RR5, COMBO_END
const uint16_t PROGMEM tild_combo[] = {LI1, LM0, COMBO_END}; //  KC_TILD
const uint16_t PROGMEM grv_combo[] = {RI1, RM0, COMBO_END}; // ` KC_GRV
#endif
//    [DEL_COMBO]=COMBO(del_combo, KC_DEL),
 //   [BSPC_COMBO]=COMBO(bspc_combo, KC_BSPC),
 //    [BSLS_COMBO]=COMBO(bsls_combo, KC_BSLS),
 //   [SLSH_COMBO]=COMBO(slsh_combo, KC_SLSH),
//    [HASH_COMBO]=COMBO(hash_combo, KC_HASH),
    
 //   [PERC_COMBO]=COMBO(perc_combo, KC_PERC),

#ifdef ALL_COMBOS
combo_t key_combos[] = {
    [TAB_COMBO]=COMBO(tab_combo, KC_TAB),
    [ENT_COMBO]=COMBO(ent_combo, KC_ENT),   
    [LPRN_COMBO]=COMBO(lprn_combo, KC_LPRN),
    [RPRN_COMBO]=COMBO(rprn_combo, KC_RPRN),
    [LCBR_COMBO]=COMBO(lcbr_combo, KC_LCBR),
    [RCBR_COMBO]=COMBO(rcbr_combo, KC_RCBR),
    [QUOT_COMBO]=COMBO(quot_combo, KC_QUOT),
    [DQT_COMBO]=COMBO(dqt_combo, KC_DQT),    
    [LBRC_COMBO]=COMBO(lbrc_combo, KC_LBRC),
    [RBRC_COMBO]=COMBO(rbrc_combo, KC_RBRC),  
    [CIRC_COMBO]=COMBO(circ_combo, KC_CIRC),
    [DLR_COMBO]=COMBO(dlr_combo, KC_DLR),
    [EQL_COMBO]=COMBO(eql_combo, KC_EQL),
    [UNDS_COMBO]=COMBO(unds_combo, KC_UNDS),    
    [SCLN_COMBO]=COMBO(scln_combo, KC_SCLN),
    [COLN_COMBO]=COMBO(coln_combo, KC_COLN),
    [MINS_COMBO]=COMBO(mins_combo, KC_MINS),
    [ASTR_COMBO]=COMBO(astr_combo, KC_ASTR),    
    [LABK_COMBO]=COMBO(labk_combo, KC_LABK),
    [RABK_COMBO]=COMBO(rabk_combo, KC_RABK),
    [EXLM_COMBO]=COMBO(exlm_combo, KC_EXLM),
    [AT_COMBO]=COMBO(at_combo, KC_AT),
    [QUES_COMBO]=COMBO(ques_combo, KC_QUES),
    [PLUS_COMBO]=COMBO(plus_combo, KC_PLUS),    
    [AMPR_COMBO]=COMBO(ampr_combo, KC_AMPR),
    [PIPE_COMBO]=COMBO(pipe_combo, KC_PIPE), 
    [TILD_COMBO]=COMBO(tild_combo, KC_TILD),
    [GRV_COMBO]=COMBO(grv_combo, KC_GRV),
};
#endif

