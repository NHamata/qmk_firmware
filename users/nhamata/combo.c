const uint16_t PROGMEM dot_combo[] = {LI0, LM0, COMBO_END};
const uint16_t PROGMEM comma_combo[] = {RI0, RM0, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {LM0, LR0, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {RM0, RR0, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {LI0, LR0, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {RI0, RR0, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {LI5, LM0, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {RI5, RM0, COMBO_END};
const uint16_t PROGMEM labk_combo[] = {LI5, LM5, COMBO_END};
const uint16_t PROGMEM rabk_combo[] = {RI5, RM5, COMBO_END};
const uint16_t PROGMEM sqt_combo[] = {RI1, RM1, COMBO_END};
const uint16_t PROGMEM dqt_combo[] = {RI1, RM1, COMBO_END};
const uint16_t PROGMEM coln_combo[] = {LI5, LR0, COMBO_END};
const uint16_t PROGMEM scln_combo[] = {RI5, RR0, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {LI3, LM3, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {RI7, RM7, COMBO_END};


combo_t key_combos[] = {
    [COMMA_C]=COMBO(comma_combo, KC_COMMA),
    [DOT_C]=COMBO(dot_combo, KC_DOT),
    [LPRN_C]=COMBO(lprn_combo, KC_LPRN),
    [RPRN_C]=COMBO(rprn_combo, KC_RPRN),
    [LCBR_C]=COMBO(lcbr_combo, KC_LCBR),
    [RCBR_C]=COMBO(rcbr_combo, KC_RCBR),
    [LBRC_C]=COMBO(lbrc_combo, KC_LBRC),
    [RBRC_C]=COMBO(rbrc_combo, KC_RBRC),
    [LABK_C]=COMBO(labk_combo, KC_LABK),
    [RABK_C]=COMBO(rabk_combo, KC_RABK),
    [SQT_C]=COMBO(sqt_combo, KC_QUOT),
    [DQT_C]=COMBO(dqt_combo, KC_DQT),
    [COLN_C]=COMBO(coln_combo, KC_COLN),
    [SCLN_C]=COMBO(scln_combo, KC_SCLN),
    [TAB_C]=COMBO(tab_combo, KC_TAB),
    [ENT_C]=COMBO(ent_combo, KC_ENT),
};

