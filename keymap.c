
#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _NUM,
  _FKEY,
  _MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [_QWERTY] = LAYOUT(
  KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             KC_6,    KC_7   KC_8,     KC_9,    KC_0,     KC_BSPC,
  KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,  KC_I,     KC_O,    KC_P,     KC_MINS,
  KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
  KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,           KC_RBRC, KC_N,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RCTL,
                        TG_(_NUM), KC_LGUI, KC_LALT, KC_SPC,                         KC_ENT, KC_RALT, KC_GRV, MO_(_FKEY)
 ),


//num
[_NUM] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             KC_PSCR,   KC_DEL,   KC_P7,  KC_P8,  KC_P9,   KC_PAST,
  _______, XXXXXXX, XXXXXXX, XXXXXXX,  KC_UP,  XXXXXXX,                             KC_INSERT, KC_HOME,  KC_P4,  KC_P5,  KC_P6,   KC_PMNS,
  _______, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,                             KC_COPY,   KC_END,   KC_P1,  KC_P2,  KC_P3,   KC_PPLS,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WBAK,           KC_WFWD, KC_PSTE,   KC_EXEC,  KC_P0, XXXXXXX, KC_PCMM, KC_PEQL,
                        _______, _______, _______, _______,                   _______, _______, _______, MO_(_MOUSE)
),

//fkey
[_FKEY] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                              KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  XXXXXXX,
  _______, KC_F21,  KC_F22,  KC_F23,  KC_F24,  XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC,           KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                     MO_(_MOUSE), _______, _______, _______,                  _______, _______, _______, _______
),

//mouse
[_MOUSE] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             MS_BTN1, MS_UP,   MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             MS_WHLL, XXXXXXX, MS_WHLR, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           MS_WHLD, MS_WHLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                         _______, _______, _______, _______,                  _______, _______, _______, _______
)
};


#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

bool olde_task_user(){
  oled_set_cursor(0, 1);
switch (get_highest_layer(layer_state)) {
case _QWERTY :
oled_write("QWERTY", FALSE);
break;
case _NUM :
oled_write("Numpad mode", FALSE);
break;
case _FKEY :
oled_write("F keys", FALSE);
break;
case _MOUSE :
oled_write("Mouse mode", FALSE);
break;
}
return false;
  
}

#endif
