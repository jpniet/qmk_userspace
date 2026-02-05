enum keycode_aliases {
  // Home row mod keys
  HRM_A = LCTL_T(KC_A),
  HRM_R = LALT_T(KC_R),
  HRM_S = LSFT_T(KC_S),
  HRM_T = LGUI_T(KC_T),
  HRM_G = MEH_T(KC_G),

  HRM_M = ALL_T(KC_M),
  HRM_N = RGUI_T(KC_N),
  HRM_E = RSFT_T(KC_E),
  HRM_I = RALT_T(KC_I),
  HRM_O = RCTL_T(KC_O),

  HRM_4 = ALL_T(KC_KP_4),
  HRM_5 = RGUI_T(KC_KP_5),
  HRM_6 = RSFT_T(KC_KP_6),
  HRM_PLS = RALT_T(KC_PPLS),
  HRM_AST = RCTL_T(KC_PAST),

  HRM_PVT = LCTL_T(KC_MPRV),
  HRM_NXT = LALT_T(KC_MNXT),
  HRM_STP = LSFT_T(KC_MSTP),
  HRM_PLY = LGUI_T(KC_MPLY),

  // Windows layer home row keys
  WIN_A = LGUI_T(KC_A),
  WIN_T = LCTL_T(KC_T),

  WIN_N = RCTL_T(KC_N),
  WIN_O = RGUI_T(KC_O),

  // One Shot Modifiers
  OS_LGUI = OSM(MOD_LGUI),
  OS_LSFT = OSM(MOD_LSFT),
  OS_LALT = OSM(MOD_LALT),
  OS_LCTL = OSM(MOD_LCTL),
  OS_MEH = OSM(MOD_MEH),
  OS_HYPR = OSM(MOD_HYPR),

  // Main Layer
  MAC_ESC = TD(DANCE_0),              // Escape (macOS)
  MAC_CAP = TD(DANCE_1),              // Capture (macOS)
  MAC_CLP = TD(DANCE_2),              // Clipboard (macOS)
  MAC_DEL = TD(DANCE_3),              // Delete (macOS)
  MAC_BSP = TD(DANCE_4),              // Backspace (macOS)
  MAC_ENT = TD(DANCE_5),              // Enter (macOS)

  // Windows Layer
  WIN_ESC = TD(DANCE_6),              // Escape (Windows)
  WIN_CAP = TD(DANCE_7),              // Capture (Windows)
  WIN_CLP = TD(DANCE_8),              // Clipboard (Windows)
  WIN_DEL = TD(DANCE_9),              // Delete (Windows)
  WIN_BSP = TD(DANCE_10),             // Backspace (Windows)
  WIN_ENT = TD(DANCE_11),             // Enter (Windows)

  // Symbol Layer
  PLS_MNS = LALT(LSFT(KC_EQL)),       // ±
  LESSEQL = LALT(KC_COMM),            // ≤
  MOREEQL = LALT(KC_DOT),             // ≥
  NOT_EQL = LALT(KC_EQL),             // ≠
  ELLIPS = LALT(KC_SCLN),             // …
  DOCSTR = ST_MACRO_0,                // """ + Enter
  C_BLOCK = ST_MACRO_1,               // ``` + Enter
  UP_DIR = ST_MACRO_2,                // ../
  HOMEROW = HYPR(KC_TAB),             // Homerow click shortcut
  ALM_EQL = LALT(KC_X),               // ≈
  BULLET = LALT(KC_8),                // •
  ERS_FWD = ST_MACRO_3,               // Erase forward: Shift + End, Delete
  END_FNC = ST_MACRO_4,               // ): + Enter
  ERS_BWD = ST_MACRO_5,               // Erase backward: Shift + Home, Delete
  LINEBRK = LSFT(KC_ENT),             // Line break: Shift + Enter

  // NavPad Layer
  SPT_FIL = ST_MACRO_6,               // Files spotlight (macOS): GUI + Space, GUI + 2
  PRV_DSK = LCTL(KC_LEFT),            // Previous desktop (macOS)
  APP_WIN = LCTL(KC_DOWN),            // App windows (macOS)
  NXT_DSK = LCTL(KC_RGHT),            // Next desktop (macOS)
  NOTIFS = MEH(KC_N),                 // Show notification center (macOS)
  _1PASSW = HYPR(KC_SPC),             // 1Password quick access shortcut
  MH_CAPS = MEH_T(KC_CAPS),           // Caps lock with Meh mod
  TERMINL = LALT(LGUI(LSFT(KC_SPC))), // New Terminal at folder (macOS)
  SPT_CLP = ST_MACRO_7,               // Clipboard spotlight (macOS): GUI + Space, GUI + 4
  NXT_GRP = LGUI(LSFT(KC_DOWN)),      // Next Safari tab group (macOS)
  PRV_GRP = LGUI(LSFT(KC_UP)),        // Previous Safari tab group (macOS)
  MC_TABS = TD(DANCE_12),             // Tabs management (macOS)
  KC_EXCL = TD(DANCE_13),             // Currency & quantitative abbr. 
  NUM_EQL = TD(DANCE_14),             // = / ± / Numlock

  // System Layer
  TGGl_LC = TOGGLE_LAYER_COLOR,       // Toggle layer colors
  RGB_FWD = RGB_MODE_FORWARD,         // Switch animation
  LED_LVL = LED_LEVEL,                // Toggle LEDs on/off

  // Mouse Layer
  CTL_BT1 = LCTL(MS_BTN1),            // Ctrl + Left Click
  ALT_BT1 = LALT(MS_BTN1),            // Alt + Left Click
  SFT_BT1 = LSFT(MS_BTN1),            // Shift + Left Click
  GUI_BT1 = LGUI(MS_BTN1),            // GUI + Left Click
  MS_DCLK = KC_MS_DBL_CLICK,          // Mouse Button 1 double click
  MS_JIGG = KC_MS_JIGGLER_TOGGLE,     // Mouse jiggler

  // Things 3 shortcuts
  TH_MVIT = LGUI(LSFT(KC_M)),         // Move item to another list
  TH_REPT = LGUI(LSFT(KC_R)),         // Add repetition schedule
  TH_DOWN = TD(DANCE_15),             // Arrow down
  TH_UP = TD(DANCE_16),               // Arrow up
  TH_DLNE = LGUI(LSFT(KC_D)),         // Add a deadline
  TH_CLIP = LALT(LGUI(KC_V)),         // Move copied item
  TH_NEW = TD(DANCE_17),              // New to-do/checklist/project
  TH_LOGB = LGUI(KC_6),               // Go to Logbook
  TH_NAVI = LGUI(LSFT(KC_0)),         // Show navigation popover

  // Slack shortcuts
  SK_PWKS = LCTL(LSFT(KC_TAB)),       // Previous workspace
  SK_PTAB = LCTL(KC_PGUP),            // Previous tab
  SK_NTAB = LCTL(KC_PGDN),            // Next tab
  SK_NWKS = LCTL(KC_TAB),             // Next workspace
  SK_FILE = LCTL(KC_4),               // Files
  SK_ACT = LGUI(LSFT(KC_M)),          // Activity
  SK_DMS = LGUI(LSFT(KC_K)),          // All direct messages
  SK_HOME = LCTL(KC_1),               // Home
  SK_SRCH = LGUI(KC_G),               // Search
  SK_PUNR = LALT(LSFT(KC_UP)),        // Previous unread channel or DM
  SK_PSCT = LGUI(LCTL(KC_LEFT)),      // Move focus to previous section
  SK_NSCT = LGUI(LCTL(KC_RGHT)),      // Move focus to next section
  SK_NUNR = LALT(LSFT(KC_DOWN)),      // Next unread channel or DM
  SK_MUTE = LGUI(LSFT(KC_SPC)),       // Toggle huddles mute/unmute
  SK_STAT = LGUI(LSFT(KC_Y)),         // Set a status
  SK_ATCH = LGUI(KC_U),               // Attach a file
  SK_CANV = LALT(LGUI(KC_DOT)),       // Open channel canvas
  SK_MORE = LCTL(KC_0),               // Open the "More" menu
  SK_BACK = LGUI(KC_LBRC),            // Back in history
  SK_SCNV = LGUI(KC_F),               // Search current conversation
  SK_AUNR = LGUI(LSFT(KC_A)),         // All unreads
  SK_THRD = LGUI(LSFT(KC_T)),         // Threads
  SK_CHNL = LGUI(LSFT(KC_L)),         // Browse channels
  SK_CONV = LGUI(KC_K),               // Jump to a conversation
  SK_FRWD = LGUI(KC_RBRC),            // Forward in history
  SK_SDBR = LGUI(LSFT(KC_D)),         // Show/hide sidebar
  SK_CONF = LGUI(KC_COMM),            // Settings
  SK_INFO = LGUI(LSFT(KC_I)),         // Channel info
  SK_DIR = LGUI(LSFT(KC_E)),          // Directory

  // Gaming Layer
  KC_GESC = TD(DANCE_18),             // Grave Escape

  // Chess Layer
  CHESS_N = LSFT(KC_N),               // Knight
  CHESS_B = LSFT(KC_B),               // Bishop
  CHESS_Q = LSFT(KC_Q),               // Queen
  CHESS_K = LSFT(KC_K),               // King
  CHESS_R = LSFT(KC_R),               // Rook
  Q_CASTL = ST_MACRO_8,               // Chess Queen Castling O-O-O
  K_CASTL = ST_MACRO_9,               // Chess King Castling O-O

  // Spanish Characters
  ES_AC_A = ST_MACRO_10,              // á
  ES_AC_E = ST_MACRO_11,              // é
  ES_AC_I = ST_MACRO_12,              // í
  ES_AC_O = ST_MACRO_13,              // ó
  ES_AC_U = ST_MACRO_14,              // ú
  ES_DI_U = ST_MACRO_15,              // ü
  ES_TL_N = ST_MACRO_16,              // ñ

  // ZSA keycodes
  SL_TOGG = ORYX_SL_TOGG,             // Oryx smart layer toggle
  SL_TRIG = ORYX_SL_TRIGG,            // Oryx smart layer trigger
  HSV_BFZ = HSV_129_255_255,          // Set color to Brain Freeze      #00EEFF (HSV_BFZ)
  HSV_IDG = HSV_99_169_190,           // Set color to Iridescent Green  #40BE68 (HSV_IDG)
  HSV_ICW = HSV_169_255_255,          // Set color to Icelandic Water   #000EFF (HSV_ICW)
  MAC_SRI = MAC_SIRI,                 // MacOS Siri
  MAC_LCK = MAC_LOCK,                 // MacOS Lock
  DRG_SCR = DRAG_SCROLL,              // Navigator drag scroll
  TGL_SCR = TOGGLE_SCROLL,            // Navigator toggle scroll
  INC_CPI = NAVIGATOR_INC_CPI,        // Navigator CPI +
  DEC_CPI = NAVIGATOR_DEC_CPI,        // Navigator CPI -
  N_TURBO = NAVIGATOR_TURBO,          // Navigator Turbo
  N_AIM = NAVIGATOR_AIM,              // Navigator Aim

  // Dual Function keys
  DFUN_0 = DUAL_FUNC_0,               // Tap => Hide app (macOS)      Hold => Minimize all              (Windows)
  DFUN_1 = DUAL_FUNC_1,               // Tap => !                     Hold => ¡
  DFUN_2 = DUAL_FUNC_2,               // Tap => -                     Hold => em dash
  DFUN_3 = DUAL_FUNC_3,               // Tap => Undo (macOS)          Hold => Undo                      (Windows)
  DFUN_4 = DUAL_FUNC_4,               // Tap => ‹                     Hold => «
  DFUN_5 = DUAL_FUNC_5,               // Tap => ›                     Hold => »
  DFUN_6 = DUAL_FUNC_6,               // Tap => °                     Hold => º
  DFUN_7 = DUAL_FUNC_7,               // Tap => %                     Hold => ‰
  DFUN_8 = DUAL_FUNC_8,               // Tap => ?                     Hold => ¿
  DFUN_9 = DUAL_FUNC_9,               // Tap => $                     Hold => €
  DFUN_10 = DUAL_FUNC_10,             // Tap => Select all (macOS)    Hold => Select all                (Windows)
  DFUN_11 = DUAL_FUNC_11,             // Tap => Previous tab;         Hold => Back
  DFUN_12 = DUAL_FUNC_12,             // Tap => Next tab;             Hold => Forward
  DFUN_13 = DUAL_FUNC_13,             // Tap => Quick entry;          Hold => Quick entry autofill      (Things 3)
  DFUN_14 = DUAL_FUNC_14,             // Tap => _;                    Hold => Space
  DFUN_15 = DUAL_FUNC_15,             // Tap => Keypad -              Hold => en dash
  DFUN_16 = DUAL_FUNC_16,             // Tap => Keypad /              Hold => ⁄
  DFUN_17 = DUAL_FUNC_17,             // Tap => Base layer            Hold => Windows layer
  DFUN_18 = DUAL_FUNC_18,             // Tap => Open tag window       Hold => Edit tags (Things 3)
  DFUN_19 = DUAL_FUNC_19,             // Tap => Find in text          Hold => Find & replace in text  (Things 3)
  DFUN_20 = DUAL_FUNC_20,             // Tap => Deadline -1 day       Hold => Deadline -1 week        (Things 3)
  DFUN_21 = DUAL_FUNC_21,             // Tap => Deadline +1 day       Hold => Deadline +1 week        (Things 3)
  DFUN_22 = DUAL_FUNC_22,             // Tap => Complete item         Hold => Cancel item             (Things 3)
  DFUN_23 = DUAL_FUNC_23,             // Tap => Go to Someday         Hold => Start Someday           (Things 3)
  DFUN_24 = DUAL_FUNC_24,             // Tap => Go to Inbox           Hold => Start This Evening      (Things 3)
  DFUN_25 = DUAL_FUNC_25,             // Tap => Go to Today           Hold => Start Today             (Things 3)
  DFUN_26 = DUAL_FUNC_26,             // Tap => Go to Upcoming        Hold => Show When               (Things 3)
  DFUN_27 = DUAL_FUNC_27,             // Tap => Go to Anytime         Hold => Start Anytime           (Things 3)
  DFUN_28 = DUAL_FUNC_28,             // Tap => Start date +1 day     Hold => Start date +1 week      (Things 3)
  DFUN_29 = DUAL_FUNC_29,             // Tap => Start date -1 day     Hold => Start date -1 week      (Things 3)
  DFUN_30 = DUAL_FUNC_30,             // Tap => New message           Hold => Toggle Huddles          (Slack)
  DFUN_31 = DUAL_FUNC_31,             // Tap => 2                     Hold => 6
  DFUN_32 = DUAL_FUNC_32,             // Tap => 3                     Hold => 7
  DFUN_33 = DUAL_FUNC_33,             // Tap => T                     Hold => U
  DFUN_34 = DUAL_FUNC_34,             // Tap => V                     Hold => J
};