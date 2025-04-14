
#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _NUM,
  _FKEY,
  _MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [_QWERTY] = LAYOUT(
  QK_GESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,                                    KC_6,  KC_7,  KC_8,     KC_9,    KC_0,     KC_EQL,
  KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                                    KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     KC_MINS,
  KC_LSFT,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                                    KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
  KC_LCTL,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, KC_LBRC,                  KC_RBRC, KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RCTL,
   MO(_NUM), LT(_MOUSE, KC_LGUI), KC_LALT, KC_SPC, KC_DEL,           KC_BSPC, KC_ENT,  KC_RALT,  KC_GRV,  LT(_FKEY, KC_BSLS)
 ),


//num
[_NUM] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             KC_NUM,  KC_P7,  KC_P8,  KC_P9,   KC_PAST, _______,
  _______, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, KC_P4,  KC_P5,  KC_P6,   KC_PMNS, _______,
  KC_CAPS, KC_LEFT, KC_DOWN, KC_RGH,  XXXXXXX, XXXXXXX,                             XXXXXXX, KC_P1,  KC_P2,  KC_P3,   KC_PPLS, _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP,           KC_PGDN, XXXXXXX, KC_P0, XXXXXXX, KC_PCMM, KC_PEQL, _______,
                _______, _______, _______, KC_INS, KC_HOME,                  KC_END, KC_PSCR, _______, _______, MO(_MOUSE)
),

//fkey
[_FKEY] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                              KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  XXXXXXX,
  _______, KC_F21,  KC_F22,  KC_F23,  KC_F24,  XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,           _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
             MO(_MOUSE), _______, _______, _______, _______,                 _______, _______, _______, _______, _______
),

//mouse
[_MOUSE] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             MS_BTN1, MS_UP,   MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           _______, MS_WHLL, XXXXXXX, MS_WHLR, XXXXXXX, XXXXXXX, XXXXXXX,
                _______, _______, _______, _______, _______,                  MS_WHLD, MS_WHLU, _______, _______, _______
)
};


// #ifdef OLED_ENABLE
//qmk logo for test 
//static void render_logo(void) {
//    static const char PROGMEM logo[] = {
// INSERT LOGO HERE
//    };
//oled_write_P(logo, sizeof(logo));
//}


//oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//  if (!is_keyboard_left()){
//    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
//  }
//    return rotation;
//}

//bool oled_task_user() {
  // Set cursor position
//  if (is_keyboard_master()) {
  // Switch on current active layer
//  switch (get_highest_layer(layer_state)) {
//      case _QWERTY :
//          oled_write("QWERTY\n", false);
//          break;
//      case _NUM :
//          oled_write("NUM Layer\n", false);
//          break;
//      case _FKEY : 
//          oled_write("FKEY Layer\n", false);
//          break;
//      case _MOUSE :
//          oled_write("MOUSE Layer\n", false);
//          break;
//      }
        // Host Keyboard LED Status
//    led_t led_state = host_keyboard_led_state();
//    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
//    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
//    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
//  } else {
    
//render_logo();  // Renders a static logo
     //   oled_scroll_left();  // Turns on scrolling
//  }
//  return false;
//}

//#endif
