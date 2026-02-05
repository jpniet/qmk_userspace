#include QMK_KEYBOARD_H
#include "version.h"
#include "keycode_aliases.c"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ORYX_SL_TOGG,
  ORYX_SL_TRIGG,
  HSV_129_255_255,
  HSV_99_169_190,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  MAC_MISSION_CONTROL,
  MAC_SIRI,
  MAC_DND,
  MAC_LOCK,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
};

#define DUAL_FUNC_0 LT(1, KC_H)
#define DUAL_FUNC_1 LT(11, KC_K)
#define DUAL_FUNC_2 LT(11, KC_S)
#define DUAL_FUNC_3 LT(3, KC_M)
#define DUAL_FUNC_4 LT(3, KC_S)
#define DUAL_FUNC_5 LT(11, KC_F8)
#define DUAL_FUNC_6 LT(8, KC_F9)
#define DUAL_FUNC_7 LT(13, KC_F24)
#define DUAL_FUNC_8 LT(14, KC_F22)
#define DUAL_FUNC_9 LT(10, KC_B)
#define DUAL_FUNC_10 LT(10, KC_X)
#define DUAL_FUNC_11 LT(1, KC_N)
#define DUAL_FUNC_12 LT(9, KC_B)
#define DUAL_FUNC_13 LT(1, KC_I)
#define DUAL_FUNC_14 LT(8, KC_0)
#define DUAL_FUNC_15 LT(14, KC_1)
#define DUAL_FUNC_16 LT(1, KC_F4)
#define DUAL_FUNC_17 LT(15, KC_V)
#define DUAL_FUNC_18 LT(10, KC_F15)
#define DUAL_FUNC_19 LT(11, KC_F13)
#define DUAL_FUNC_20 LT(10, KC_F16)
#define DUAL_FUNC_21 LT(8, KC_V)
#define DUAL_FUNC_22 LT(13, KC_F12)
#define DUAL_FUNC_23 LT(9, KC_K)
#define DUAL_FUNC_24 LT(4, KC_C)
#define DUAL_FUNC_25 LT(3, KC_F24)
#define DUAL_FUNC_26 LT(13, KC_F2)
#define DUAL_FUNC_27 LT(8, KC_K)
#define DUAL_FUNC_28 LT(3, KC_7)
#define DUAL_FUNC_29 LT(2, KC_J)
#define DUAL_FUNC_30 LT(1, KC_F23)
#define DUAL_FUNC_31 LT(11, KC_F5)
#define DUAL_FUNC_32 LT(11, KC_F11)
#define DUAL_FUNC_33 LT(15, KC_F9)
#define DUAL_FUNC_34 LT(6, KC_O)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Layers
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /** This keymap uses Colemak-DH layout for the base layer.
   * While it is optimized for macOS functions, it also has a layer to swap the base
   * layer for a Windows optimized home row mods and shortcuts.
   */
  [0] = LAYOUT_LR( // macOS base layer: Colemak-DH
      MAC_ESC,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,
      MAC_CAP,  KC_Q   ,  KC_W   ,  KC_F   ,  KC_P   ,  KC_B   ,
      OS_LSFT,  HRM_A  ,  HRM_R  ,  HRM_S  ,  HRM_T  ,  HRM_G  ,
      MAC_CLP,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_D   ,  KC_V   ,
                                                        KC_TAB ,  OSL(2) ,

                          KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  MAC_DEL,
                          KC_J   ,  KC_L   ,  KC_U   ,  KC_Y   ,  KC_SCLN,  MAC_BSP,
                          HRM_M  ,  HRM_N  ,  HRM_E  ,  HRM_I  ,  HRM_O  ,  MAC_ENT,
                          KC_K   ,  KC_H   ,  KC_COMM,  KC_DOT ,  KC_SLSH,  SL_TRIG,
                TT(3)  ,  KC_SPC 
    ),

  [1] = LAYOUT_LR( // Windows transparent layer: Colemak-DH
      WIN_ESC,  _______,  _______,  _______,  _______,  _______,
      WIN_CAP,  _______,  _______,  _______,  _______,  _______,
      _______,  WIN_A  ,  _______,  _______,  WIN_T  ,  _______,
      WIN_CLP,  _______,  _______,  _______,  _______,  _______,
                                                        _______,  _______,

                          _______,  _______,  _______,  _______,  _______,  WIN_DEL,
                          _______,  _______,  _______,  _______,  _______,  WIN_BSP,
                          _______,  WIN_N  ,  _______,  _______,  WIN_O  ,  WIN_ENT,
                          _______,  _______,  _______,  _______,  _______,  _______,
                _______,  _______ 
    ),

  [2] = LAYOUT_LR( // Symbol layer
      DFUN_0 ,  PLS_MNS,  LESSEQL,  MOREEQL,  NOT_EQL,  ELLIPS ,
      DOCSTR ,  KC_DQUO,  KC_LABK,  KC_RABK,  KC_QUOT,  KC_GRV ,
      CW_TOGG,  DFUN_1 ,  DFUN_2 ,  KC_PLUS,  KC_EQL ,  KC_HASH,
      DFUN_3 ,  KC_CIRC,  KC_SLSH,  KC_ASTR,  KC_BSLS,  C_BLOCK,
                                                        UP_DIR ,  HOMEROW,

                          ALM_EQL,  BULLET ,  DFUN_4 ,  DFUN_5 ,  DFUN_6 ,  ERS_FWD,
                          KC_AMPR,  END_FNC,  KC_LBRC,  KC_RBRC,  DFUN_7 ,  ERS_BWD,
                          KC_PIPE,  KC_COLN,  KC_LPRN,  KC_RPRN,  DFUN_8 ,  LINEBRK,
                          KC_TILD,  DFUN_9 ,  KC_LCBR,  KC_RCBR,  KC_AT  ,  DFUN_10,
                QK_LLCK,  KC_UNDS 
    ),

  [3] = LAYOUT_LR( // Left side: Navigation; Right side: Numpad
      SPT_FIL,  PRV_DSK,  APP_WIN,  KC_MCTL,  NXT_DSK,  NOTIFS ,
      KC_LPAD,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END ,  _1PASSW,
      MH_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP  ,  KC_RGHT,  TERMINL,
      SPT_CLP,  DFUN_11,  NXT_GRP,  PRV_GRP,  DFUN_12,  MC_TABS,
                                                        _______,  DFUN_13,

                          KC_EXCL,  DFUN_14,  KC_COLN,  KC_LPRN,  KC_RPRN,  _______,
                          KC_KP_7,  KC_KP_8,  KC_KP_9,  DFUN_15,  DFUN_16,  _______,
                          HRM_4  ,  HRM_5  ,  HRM_6  ,  HRM_PLS,  HRM_AST,  _______,
                          KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_PDOT,  KC_COMM,  NUM_EQL,
                _______,  KC_KP_0 
    ),

  [4] = LAYOUT_LR( // System layer with Fn keys on right side
      RGB_TOG,  TGGl_LC,  RGB_FWD,  RGB_SLD,  RGB_VAD,  RGB_VAI,
      SL_TOGG,  MAC_SRI,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_SAI,
      MAC_LCK,  HRM_PVT,  HRM_NXT,  HRM_STP,  HRM_PLY,  RGB_SAD,
      HSV_BFZ,  HSV_IDG,  HSV_ICW,  LED_LVL,  RGB_HUD,  RGB_HUI,
                                                        OS_MEH ,  MAC_DND,

                          KC_F20 ,  KC_F13 ,  KC_F14 ,  KC_F15 ,  KC_F16 ,  TO(7)  ,
                          KC_F19 ,  KC_F9  ,  KC_F10 ,  KC_F11 ,  KC_F12 ,  TO(6)  ,
                          KC_F17 ,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  TO(9)  ,
                          KC_F18 ,  KC_F5  ,  KC_F6  ,  KC_F7  ,  KC_F8  ,  TO(8)  ,
                TO(0)  ,  OS_HYPR 
    ),

  [5] = LAYOUT_LR( // Mouse layer: ZSA Navigator
      _______,  DEC_CPI,  INC_CPI,  XXXXXXX,  XXXXXXX,  XXXXXXX,
      XXXXXXX,  MS_BTN8,  MS_BTN7,  MS_BTN3,  MS_DCLK,  GST_HLD,
      MS_BTN6,  MS_BTN5,  MS_BTN4,  MS_BTN2,  MS_BTN1,  DRG_SCR,
      XXXXXXX,  CTL_BT1,  ALT_BT1,  SFT_BT1,  GUI_BT1,  TURBO  ,
                                                        N_AIM  ,  N_TURBO,

                          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          MS_BTN3,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          MS_BTN1,  MS_BTN2,  MS_JIGG,  XXXXXXX,  XXXXXXX,  DFUN_17,
                TGL_SCR,  QK_LLCK 
    ),

  [6] = LAYOUT_LR( // Things 3 shortcuts
      _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
      XXXXXXX,  XXXXXXX,  XXXXXXX,  TH_MVIT,  TH_REPT,  XXXXXXX,
      XXXXXXX,  DFUN_18,  TH_DOWN,  TH_UP  ,  TH_DLNE,  DFUN_19,
      TH_CLIP,  XXXXXXX,  XXXXXXX,  DFUN_20,  DFUN_21,  XXXXXXX,
                                                        TH_NEW ,  DFUN_22,

                          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          XXXXXXX,  DFUN_23,  TH_LOGB,  XXXXXXX,  XXXXXXX,  _______,
                          TH_NAVI,  DFUN_24,  DFUN_25,  DFUN_26,  DFUN_27,  _______,
                          XXXXXXX,  DFUN_28,  DFUN_29,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                TO(0)  ,  QK_LLCK 
    ),

  [7] = LAYOUT_LR( // Slack shortcuts
      _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
      KC_UP  ,  SK_PWKS,  SK_PTAB,  SK_NTAB,  SK_NWKS,  XXXXXXX,
      KC_DOWN,  SK_FILE,  SK_ACT ,  SK_DMS ,  SK_HOME,  SK_SRCH,
      XXXXXXX,  SK_PUNR,  SK_PSCT,  SK_NSCT,  SK_NUNR,  XXXXXXX,
                                                        DFUN_30,  SK_MUTE,

                          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          XXXXXXX,  SK_STAT,  SK_ATCH,  SK_CANV,  SK_MORE,  SK_BACK,
                          SK_SCNV,  SK_AUNR,  SK_THRD,  SK_CHNL,  SK_CONV,  SK_FRWD,
                          XXXXXXX,  SK_SDBR,  SK_CONF,  SK_INFO,  SK_DIR ,  XXXXXXX,
                TO(0)  ,  QK_LLCK 
    ),

  [8] = LAYOUT_LR( // QWERTY layer optimized for gaming 
      KC_GESC,  _______,  DFUN_31,  DFUN_32,  _______,  _______,
      KC_TAB ,  _______,  _______,  KC_E   ,  KC_R   ,  DFUN_33,
      _______,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,
      OS_LALT,  _______,  _______,  _______,  DFUN_34,  KC_B   ,
                                                        KC_SPC ,  OS_LCTL,

                          KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  KC_F5  ,  KC_DEL ,
                          KC_Y   ,  _______,  KC_UP  ,  KC_O   ,  KC_P   ,  KC_BSPC,
                          KC_M   ,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_SCLN,  KC_ENT ,
                          _______,  _______,  _______,  _______,  _______,  OS_LGUI,
                TO(0)  ,  _______ 
    ),

  [9] = LAYOUT_LR( // Chess notation layer
      XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP  ,  KC_RGHT,  XXXXXXX,
      XXXXXXX,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_PLUS,
      XXXXXXX,  _______,  KC_B   ,  KC_C   ,  KC_D   ,  Q_CASTL,
      OS_LCTL,  OS_LALT,  OS_LSFT,  CHESS_N,  CHESS_B,  CHESS_Q,
                                                        MS_BTN1,  KC_Z   ,

                          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
                          KC_HASH,  KC_5   ,  KC_6   ,  KC_7   ,  KC_8   ,  _______,
                          K_CASTL,  KC_E   ,  KC_F   ,  KC_G   ,  KC_H   ,  _______,
                          CHESS_K,  CHESS_R,  KC_X   ,  _______,  _______,  _______,
                TO(0)  ,  _______ 
    ),
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Chordal Hold
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef CHORDAL_HOLD
// Handedness for Chordal Hold.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
  LAYOUT_LR(
  'L'    , 'L'    , 'L'    , 'L'    , 'L'    , 'L'    ,
  'L'    , 'L'    , 'L'    , 'L'    , 'L'    , 'L'    ,
  'L'    , 'L'    , 'L'    , 'L'    , 'L'    , 'L'    ,
  'L'    , 'L'    , 'L'    , 'L'    , 'L'    , 'L'    ,
                                               '*'    , '*'    ,

                    'R'    , 'R'    , 'R'    , 'R'    , 'R'    , 'R'    ,
                    'R'    , 'R'    , 'R'    , 'R'    , 'R'    , 'R'    ,
                    'R'    , 'R'    , 'R'    , 'R'    , 'R'    , 'R'    ,
                    'R'    , 'R'    , 'R'    , 'R'    , 'R'    , 'R'    ,
           '*'    , '*'
);
#endif  // CHORDAL_HOLD


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Combos
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const uint16_t PROGMEM combo0[] = { OSL(2), TT(3), COMBO_END};
const uint16_t PROGMEM combo1[] = { TT(3), HRM_S, COMBO_END};
const uint16_t PROGMEM combo2[] = { TT(3), HRM_T, COMBO_END};
const uint16_t PROGMEM combo3[] = { TT(3), HRM_G, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_W, OSL(2), TT(3), COMBO_END};
const uint16_t PROGMEM combo5[] = { OSL(2), HRM_A, COMBO_END};
const uint16_t PROGMEM combo6[] = { OSL(2), HRM_E, COMBO_END};
const uint16_t PROGMEM combo7[] = { OSL(2), HRM_I, COMBO_END};
const uint16_t PROGMEM combo8[] = { HRM_O, OSL(2), COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_U, OSL(2), COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_Y, OSL(2), COMBO_END};
const uint16_t PROGMEM combo11[] = { HRM_N, OSL(2), COMBO_END};
const uint16_t PROGMEM combo12[] = { OSL(2), WIN_A, COMBO_END};
const uint16_t PROGMEM combo13[] = { WIN_O, OSL(2), COMBO_END};
const uint16_t PROGMEM combo14[] = { WIN_N, OSL(2), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TT(4)),             // Symbol and NavPad       => System layer
    COMBO(combo1, OSL(7)),            // S and NavPad            => Slack layer for one key press       
    COMBO(combo2, OSL(6)),            // T and NavPad            => Things 3 layer for one key press
    COMBO(combo3, TO(8)),             // G and NavPad            => Gaming layer
    COMBO(combo4, TG(1)),             // W, Symbol and NavPad    => Windows layer toggle
    COMBO(combo5, ST_MACRO_10),       // Symbol and A (Base)     => á
    COMBO(combo6, ST_MACRO_11),       // Symbol and E            => é
    COMBO(combo7, ST_MACRO_12),       // Symbol and I            => í
    COMBO(combo8, ST_MACRO_13),       // Symbol and O (Base)     => ó
    COMBO(combo9, ST_MACRO_14),       // Symbol and U            => ú
    COMBO(combo10, ST_MACRO_15),      // Symbol and Y            => ü
    COMBO(combo11, ST_MACRO_16),      // Symbol and N (Base)     => ñ
    COMBO(combo12, ST_MACRO_10),      // Symbol and A (Windows)  => á
    COMBO(combo13, ST_MACRO_13),      // Symbol and O (Windows)  => ó
    COMBO(combo14, ST_MACRO_16),      // Symbol and N (Windows)  => ñ
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tap-hold configuration
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_2):
            return TAPPING_TERM -50;
        case TD(DANCE_3):
            return TAPPING_TERM -150;
        case TD(DANCE_4):
            return TAPPING_TERM -150;
        case TD(DANCE_5):
            return TAPPING_TERM -150;
        case TD(DANCE_8):
            return TAPPING_TERM -50;
        case TD(DANCE_9):
            return TAPPING_TERM -150;
        case TD(DANCE_10):
            return TAPPING_TERM -150;
        case TD(DANCE_11):
            return TAPPING_TERM -150;
        case DUAL_FUNC_1:
            return TAPPING_TERM -200;
        case DUAL_FUNC_2:
            return TAPPING_TERM -200;
        case DUAL_FUNC_8:
            return TAPPING_TERM -200;
        case DUAL_FUNC_9:
            return TAPPING_TERM -200;
        case TD(DANCE_13):
            return TAPPING_TERM -150;
        case DUAL_FUNC_14:
            return TAPPING_TERM -200;
        case DUAL_FUNC_15:
            return TAPPING_TERM -200;
        case DUAL_FUNC_16:
            return TAPPING_TERM -200;
        case TD(DANCE_14):
            return TAPPING_TERM -200;
        case KC_KP_0:
            return TAPPING_TERM -200;
        case LCTL(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LALT(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LSFT(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LGUI(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case DUAL_FUNC_17:
            return TAPPING_TERM -100;
        case DUAL_FUNC_30:
            return TAPPING_TERM + 150;
        case TD(DANCE_18):
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Caps/Num Lock configuration
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool capslock_active = false;
bool numlock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  numlock_active = led_state.num_lock;
  return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Caps Word
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case TD(DANCE_3):
        case TD(DANCE_4):
        case KC_UNDS:
        case KC_AMPR:
        case KC_SLSH:
        case KC_COLN:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
#endif // CAPS_WORD_ENABLE


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// RGB Matrix
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { // Symbol layer
      {31,218,204} , {86,255,255} , {215,255,255}, {215,255,255}, {215,255,255}, {41,255,255} , 
      {41,255,255} , {41,255,255} , {215,255,255}, {215,255,255}, {41,255,255} , {41,255,255} , 
      {131,255,255}, {215,255,255}, {86,255,255} , {86,255,255} , {215,255,255}, {41,255,255} , 
      {14,255,255} , {41,255,255} , {86,255,255} , {86,255,255} , {41,255,255} , {41,255,255} , 
                                                                                 {118,227,195}, {118,227,195}, 

                                    {151,255,255}, {41,255,255} , {21,255,255} , {21,255,255} , {41,255,255} , {131,255,255}, 
                                    {151,255,255}, {41,255,255} , {21,255,255} , {21,255,255} , {41,255,255} , {131,255,255}, 
                                    {151,255,255}, {41,255,255} , {21,255,255} , {21,255,255} , {41,255,255} , {131,255,255}, 
                                    {151,255,255}, {41,255,255} , {21,255,255} , {21,255,255} , {41,255,255} , {14,255,255} , 
                     {135,253,128}, {131,255,255} 
    },

    [3] = { // Navigation + Numpad
      {173,255,242}, {31,218,204} , {31,218,204} , {31,218,204} , {31,218,204} , {31,218,204} , 
      {31,218,204} , {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {131,255,255}, 
      {131,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,238}    , 
      {43,255,255} , {43,255,255} , {43,255,255} , {43,255,255} , {43,255,255} , {21,255,255} , 
                                                                                 {0,255,255}  , {173,255,242}, 

                                    {215,255,255}, {21,255,255} , {21,255,255} , {21,255,255} , {21,255,255} , {0,255,255}  , 
                                    {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255} , {86,255,255} , {0,255,255}  , 
                                    {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255} , {86,255,255} , {0,255,255}  , 
                                    {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255} , {21,255,255} , {215,255,255}, 
                     {135,253,128}, {131,255,255} 
    },

    [4] = { // System layer
      {31,218,204} , {31,218,204} , {31,218,204} , {31,218,204} , {31,218,204} , {31,218,204} , 
      {158,169,190}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {31,218,204} , 
      {195,218,204}, {0,0,238}    , {0,0,238}    , {0,0,238}    , {0,0,238}    , {31,218,204} , 
      {131,255,255}, {99,169,190} , {169,255,255}, {31,218,204} , {31,218,204} , {31,218,204} , 
                                                                                 {0,0,255}    , {195,218,204}, 

                                    {0,0,0}      , {195,134,255}, {31,218,204} , {31,218,204} , {86,255,255} , {215,255,255}, 
                                    {0,0,238}    , {131,255,255}, {15,255,255} , {0,255,255}  , {0,0,0}      , {172,255,255}, 
                                    {169,255,255}, {131,255,255}, {169,255,255}, {215,255,255}, {0,255,255}  , {188,255,255}, 
                                    {135,253,128}, {15,49,208}  , {0,0,0}      , {0,0,0}      , {0,0,0}      , {131,255,255}, 
                     {135,253,128}, {0,0,255} 
    },

    [5] = { // Mouse layer
      {0,0,0}      , {215,255,255}, {126,255,255}, {0,0,0}      , {0,0,0}      , {0,0,0}      , 
      {0,0,0}      , {21,255,255} , {21,255,255} , {0,255,255}  , {0,255,255}  , {182,160,252}, 
      {21,255,255} , {21,255,255} , {21,255,255} , {0,255,255}  , {0,255,255}  , {43,255,255} , 
      {0,0,0}      , {99,169,190} , {99,169,190} , {99,169,190} , {99,169,190} , {86,255,255} ,
                                                                                 {172,255,255}, {86,255,255} , 

                                    {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
                                    {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
                                    {0,255,255}  , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
                                    {0,255,255}  , {0,255,255}  , {182,160,252}, {0,0,0}      , {0,0,0}      , {179,255,255}, 
                     {21,255,255} , {126,255,255} 
    },

    [6] = { // Things 3 layer
      {0,255,255}  , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
      {0,0,0}      , {0,0,0}      , {0,0,0}      , {195,218,204}, {99,169,190} , {0,0,0}      , 
      {0,0,0}      , {25,255,255} , {0,0,255}    , {0,0,255}    , {0,255,255}  , {0,0,255}    , 
      {0,0,255}    , {0,0,0}      , {0,0,0}      , {43,255,255} , {151,255,255}, {0,0,0}      , 
                                                                                 {151,255,255}, {151,255,255}, 

                                    {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,255,255}  , 
                                    {0,0,0}      , {33,96,200}  , {99,169,190} , {0,0,0}      , {0,0,0}      , {0,255,255}  , 
                                    {0,0,255}    , {169,255,255}, {34,217,255} , {0,255,255}  , {126,210,165}, {0,255,255}  , 
                                    {0,0,0}      , {151,255,255}, {43,255,255} , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
                     {135,253,128}, {126,255,255} 
    },

    [7] = { // Slack layer
      {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
      {0,0,255}    , {43,255,255} , {43,255,255} , {169,255,255}, {169,255,255}, {0,0,0}      , 
      {0,0,255}    , {25,255,255} , {25,255,255} , {25,255,255} , {25,255,255} , {0,0,255}    , 
      {0,0,0}      , {43,255,255} , {43,255,255} , {169,255,255}, {169,255,255}, {0,0,0}      , 
                                                                                 {215,255,255}, {0,255,255}  , 

                                    {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , 
                                    {0,0,0}      , {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,255}    , 
                                    {0,0,255}    , {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,255}    , 
                                    {0,0,0}      , {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,0}      , 
                     {135,253,128}, {126,255,255} 
    },

    [8] = { // Gaming layer
      {0,0,255}    , {40,255,255} , {40,255,255} , {40,255,255} , {21,255,255} , {40,255,255} , 
      {0,0,255}    , {0,255,255}  , {0,255,255}  , {0,255,255}  , {0,255,255}  , {131,255,255}, 
      {0,0,255}    , {21,255,255} , {86,255,255} , {21,255,255} , {21,255,255} , {131,255,255}, 
      {0,0,255}    , {195,218,204}, {21,255,255} , {0,0,238}    , {131,255,255}, {86,255,255} , 
                                                                                 {169,255,255}, {0,0,255}    , 

                                    {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}      , 
                                    {169,255,255}, {0,0,255}    , {169,255,255}, {0,0,255}    , {0,0,255}    , {131,255,255}, 
                                    {0,0,255}    , {169,255,255}, {169,255,255}, {169,255,255}, {131,255,255}, {195,218,204}, 
                                    {0,0,255}    , {86,255,255} , {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}    , 
                     {135,253,128}, {169,255,255} 
    },

    [9] = { // Chess layer
      {0,0,0}      , {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}      , 
      {0,0,0}      , {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255} , 
      {0,0,0}      , {86,255,255} , {86,255,255} , {86,255,255} , {86,255,255} , {215,255,255}, 
      {43,255,255} , {43,255,255} , {43,255,255} , {21,255,255} , {21,255,255} , {21,255,255} , 
                                                                                 {0,0,255}    , {0,0,255}    , 

                                    {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,0,0}      , {0,255,255} , 
                                    {21,255,255} , {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,255,255} , 
                                    {215,255,255}, {86,255,255} , {86,255,255} , {86,255,255} , {86,255,255} , {0,255,255} , 
                                    {21,255,255} , {21,255,255} , {0,255,255}  , {0,0,255}    , {0,0,255}    , {21,255,255}, 
                     {135,253,128}, {0,255,255} 
    },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 86, 255, 255 });
    rgb_matrix_set_color( 12, rgb.r, rgb.g, rgb.b );
  } 
  if (numlock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 86, 255, 255 });
    rgb_matrix_set_color( 49, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Status LEDs
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #ifdef STATUS_LED_2
// LED 2 indicates when Windows layer is active
layer_state_t layer_state_set_user(layer_state_t state) {
  STATUS_LED_2(get_highest_layer(layer_state) = 1);
  return state;
}
#endif  // STATUS_LED_2
*/

#ifdef STATUS_LED_4
// LED 4 indicates when One Shot Shift (sticky caps), Caps Word or Caps Lock is active
void oneshot_mods_changed_user(uint8_t mods) {
  STATUS_LED_4((mods & MOD_MASK_SHIFT) != 0);
}

void caps_word_set_user(bool active) {
    if (active) {
        STATUS_LED_4(true);
    } else {
        STATUS_LED_4(false);
    }
}
#endif  // STATUS_LED_4


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Navigator
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;
void pointing_device_init_user(void) {
  set_auto_mouse_enable(true);
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
  // All keys are not mouse keys when one shot auto mouse is enabled.
  return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Mouse Gestures (https://github.com/drashna/qmk_modules/tree/main/pointing_device_gestures)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const uint16_t PROGMEM pointing_device_gestures[NUM_GESTURE_DIRECTIONS] =
    GESTURES_CARDINAL_AND_ORDINAL_DIRECTIONS(
      HYPR(KC_UP),                    // N  => Move window to U32J59x
      MEH(KC_N),                      // NE => Notification Center
      RCTL(KC_RIGHT),                 // E  => Next desktop
      RGUI(RCTL(KC_Q)),               // SE => Lock screen
      HYPR(KC_DOWN),                  // S  => Move window to MB16AHG
      KC_LPAD,                        // SW => Launchpad
      RCTL(KC_LEFT),                  // W  => Previous desktopv
      KC_MCTL                         // NW => Mission Control
    );


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tap dance
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[19];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_Q)); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_Q)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_5)));
        tap_code16(LGUI(LSFT(KC_5)));
        tap_code16(LGUI(LSFT(KC_5)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_5)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_5))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_5))); register_code16(LGUI(LSFT(KC_5)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_5))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_5))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(LSFT(KC_V)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(LSFT(KC_V)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_ENTER)); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_ENTER)); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_T));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_T)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_N))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_W)); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_T)); register_code16(LGUI(KC_T));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_N))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_K));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_K)); register_code16(LSFT(KC_K));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_EQUAL);
        tap_code16(KC_KP_EQUAL);
        tap_code16(KC_KP_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_EQUAL);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_KP_EQUAL); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: register_code16(KC_KP_EQUAL); register_code16(KC_KP_EQUAL); break;
        case DOUBLE_HOLD: register_code16(KC_NUM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_EQUAL); register_code16(KC_KP_EQUAL);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: unregister_code16(KC_KP_EQUAL); break;
        case DOUBLE_HOLD: unregister_code16(KC_NUM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_EQUAL); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_DOWN)); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RGUI(KC_DOWN)))); break;
        case DOUBLE_HOLD: register_code16(RALT(RGUI(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RGUI(KC_DOWN)))); break;
        case DOUBLE_HOLD: unregister_code16(RALT(RGUI(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_UP)); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RGUI(KC_UP)))); break;
        case DOUBLE_HOLD: register_code16(RALT(RGUI(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_UP)); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RGUI(KC_UP)))); break;
        case DOUBLE_HOLD: unregister_code16(RALT(RGUI(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_N));
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_N)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_N))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_N)); register_code16(RGUI(KC_N));
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_N))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[18].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_RSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_RSFT(SS_TAP(X_QUOTE))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_END))SS_DELAY(100)  SS_TAP(X_DELETE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_HOME))SS_DELAY(100)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE))SS_DELAY(100)  SS_LGUI(SS_TAP(X_2)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE))SS_DELAY(100)  SS_LGUI(SS_TAP(X_4)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_U))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_N))SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ORYX_SL_TOGG:
      if (record->event.pressed) {
        wait_ms(10);
        toggle_smart_layer();
      }
      break;
    case ORYX_SL_TRIGG:
      if (record->event.pressed) {
        wait_ms(10);
        trigger_smart_layer();
      }
      break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_DND:
      HSS(0x9B);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_H));
        } else {
          unregister_code16(LGUI(KC_H));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_M));
        } else {
          unregister_code16(LGUI(KC_M));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_1));
        } else {
          unregister_code16(LALT(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_MINUS)));
        } else {
          unregister_code16(LALT(LSFT(KC_MINUS)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_Z));
        } else {
          unregister_code16(LGUI(KC_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Z));
        } else {
          unregister_code16(LCTL(KC_Z));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_3)));
        } else {
          unregister_code16(RALT(RSFT(KC_3)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_BSLS));
        } else {
          unregister_code16(LALT(KC_BSLS));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_4)));
        } else {
          unregister_code16(RALT(RSFT(KC_4)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_BSLS)));
        } else {
          unregister_code16(LALT(LSFT(KC_BSLS)));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_8)));
        } else {
          unregister_code16(LALT(LSFT(KC_8)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_0));
        } else {
          unregister_code16(LALT(KC_0));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_R)));
        } else {
          unregister_code16(LALT(LSFT(KC_R)));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_SLASH)));
        } else {
          unregister_code16(LALT(LSFT(KC_SLASH)));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_2)));
        } else {
          unregister_code16(RALT(RSFT(KC_2)));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_A));
        } else {
          unregister_code16(LGUI(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_A));
        } else {
          unregister_code16(LCTL(KC_A));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_TAB)));
        } else {
          unregister_code16(LCTL(LSFT(KC_TAB)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_LBRC));
        } else {
          unregister_code16(LGUI(KC_LBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_TAB));
        } else {
          unregister_code16(LCTL(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_RBRC));
        } else {
          unregister_code16(LGUI(KC_RBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_SPACE))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_SPACE))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_TAB))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_TAB))));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SPACE);
        } else {
          unregister_code16(KC_SPACE);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_MINUS);
        } else {
          unregister_code16(KC_KP_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_MINUS));
        } else {
          unregister_code16(LALT(KC_MINUS));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_SLASH);
        } else {
          unregister_code16(KC_KP_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_1)));
        } else {
          unregister_code16(LALT(LSFT(KC_1)));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          layer_move(1);
        } else {
          layer_move(1);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(RCTL(KC_T)));
        } else {
          unregister_code16(RGUI(RCTL(KC_T)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RGUI(RSFT(KC_T)));
        } else {
          unregister_code16(RGUI(RSFT(KC_T)));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_F)));
        } else {
          unregister_code16(LGUI(LSFT(KC_F)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LSFT(KC_F))));
        } else {
          unregister_code16(LALT(LGUI(LSFT(KC_F))));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_COMMA));
        } else {
          unregister_code16(RCTL(KC_COMMA));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_COMMA)));
        } else {
          unregister_code16(LCTL(LSFT(KC_COMMA)));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_DOT));
        } else {
          unregister_code16(RCTL(KC_DOT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_DOT)));
        } else {
          unregister_code16(LCTL(LSFT(KC_DOT)));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(KC_K));
        } else {
          unregister_code16(RGUI(KC_K));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_K)));
        } else {
          unregister_code16(LALT(LGUI(KC_K)));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_O));
        } else {
          unregister_code16(LGUI(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_1));
        } else {
          unregister_code16(LGUI(KC_1));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_E));
        } else {
          unregister_code16(LGUI(KC_E));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_2));
        } else {
          unregister_code16(LGUI(KC_2));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_T));
        } else {
          unregister_code16(LGUI(KC_T));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_3));
        } else {
          unregister_code16(LGUI(KC_3));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_S));
        } else {
          unregister_code16(LGUI(KC_S));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_4));
        } else {
          unregister_code16(LGUI(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_R));
        } else {
          unregister_code16(LGUI(KC_R));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_RBRC));
        } else {
          unregister_code16(RCTL(KC_RBRC));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_RBRC)));
        } else {
          unregister_code16(LCTL(LSFT(KC_RBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_LBRC));
        } else {
          unregister_code16(RCTL(KC_LBRC));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_LBRC)));
        } else {
          unregister_code16(LCTL(LSFT(KC_LBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(KC_N));
        } else {
          unregister_code16(RGUI(KC_N));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_H)));
        } else {
          unregister_code16(LGUI(LSFT(KC_H)));
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_J);
        } else {
          unregister_code16(KC_J);
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_129_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,255);
      }
      return false;
    case HSV_99_169_190:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(99,169,190);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}
