#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: QWERTZ Layout */
    KEYMAP_EXT_ISO(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,          PSCR,SLCK,PAUS,                   MUTE,
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,    INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,                            P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,         UP,           P1,  P2,  P3,
    LCTL,LALT,FN0,          SPC,                               RALT,RALT,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    /* Layer 1: */
    KEYMAP_EXT_ISO(
    TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,                  TRNS,
    TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,  F11,F12, DEL,     TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,   TRNS,  TRNS,  TRNS,  TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,TRNS,TRNS,                          TRNS,  TRNS,  TRNS,  TRNS,
    TRNS,RALT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,TRNS,TRNS,             VOLU,        TRNS,  TRNS,  TRNS,
    TRNS,TRNS,TRNS,          TRNS,                           TRNS,TRNS,        TRNS,VOLD,MUTE,   TRNS,    TRNS,TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
     /* QWERTZ Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn over
};


