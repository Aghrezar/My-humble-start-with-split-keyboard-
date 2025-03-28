
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [0] = LAYOUT(
  KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7   KC_8,     KC_9,    KC_0,     KC_BSPC,
  KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,  KC_I,     KC_O,    KC_P,     KC_MINS,
  KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
  KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,          KC_RBRC, KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RCTL,
                        MO_(1), KC_LGUI, KC_LALT, KC_SPC,                        KC_ENT, KC_RALT, KC_GRV, MO_(2)
 ),


//num
[1] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             KC_PSCR,   KC_DEL,   KC_P7,  KC_P8,  KC_P9,   KC_PAST,
  _______, XXXXXXX, XXXXXXX, XXXXXXX,  KC_UP,  XXXXXXX,                             KC_INSERT, KC_HOME,  KC_P4,  KC_P5,  KC_P6,   KC_PMNS,
  _______, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,                             KC_COPY,   KC_END,   KC_P1,  KC_P2,  KC_P3,   KC_PPLS,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WBAK,           KC_WFWD, KC_PSTE,   KC_EXEC,  KC_P0, _______, KC_PCMM, KC_PEQL,
                          _______, _______, _______, _______,                   _______, _______, _______, MO_(3)
),

//fkey
[2] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, _______,
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                              KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20, _______,
  _______, KC_F21,  KC_F22,  KC_F23,  KC_F24, _______,                             _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
                         MO_(3), _______, _______, _______,                  _______, _______, _______, _______
),

//mouse
[3] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, _______, _______,                  _______, _______, _______, _______
)
};
