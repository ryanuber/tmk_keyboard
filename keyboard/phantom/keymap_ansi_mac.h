// Phantom ANSI
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(\
        ESC,     MACSCD,MACSCU,MACEXP,MACLAU,MACKBD,MACKBU,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,      PSCR, SLCK, BRK,  \
        GRV,  1, 2,     3,     4,     5,     6,     7,     8,   9,   0,   MINS,EQL, BSPC,      INS, HOME,PGUP,   \
        TAB,  Q, W,     E,     R,     T,     Y,     U,     I,   O,   P,   LBRC,RBRC,BSLS,      DEL, END, PGDN,   \
        CAPS, A, S,     D,     F,     G,     H,     J,     K,   L,   SCLN,QUOT,     ENT,                         \
        LSFT,    Z,     X,     C,     V,     B,     N,     M,   COMM,DOT, SLSH,     RSFT,            UP,         \
        LCTL,LGUI,LALT,                      SPC,                    RALT,RGUI,FN0, RCTL,       LEFT,DOWN,RGHT),
    /* 1: media keys */
    KEYMAP_ANSI(\
        TRNS,     F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,       TRNS,TRNS,SLEP, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MSTP,MPLY,MPRV,MNXT,MSEL,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                      \
        TRNS,     TRNS,TRNS,CALC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     CAPS,           TRNS,      \
        TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS)
};
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
