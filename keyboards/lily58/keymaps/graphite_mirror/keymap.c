#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY (MIRRORED)
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |  `   |   0  |   9  |   8  |   7  |   6  |                    |   5  |   4  |   3  |   2  |   1  | ESC  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |  ;   |   J  |   U  |   O  |   F  |   -  |                    |   Z  |   W  |   D  |   L  |   B  | Tab  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |  ,   |   I  |   E  |   A  |   H  |   Y  |-------.    ,-------|   G  |   S  |   T  |   R  |   N  |LCTRL|
    * |------+------+------+------+------+------|   ]   |    |    [  |------+------+------+------+------+------|
    * |RShift|   /  |   -  |   .  |   P  |   K  |-------|    |-------|   V  |   C  |   M  |   X  |   Q  |LShift|
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   | RGUI |BackSP|RAISE | /Enter  /       \Space \  |LOWER | LGUI | LAlt |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */

[_QWERTY] = LAYOUT(
    KC_GRV,  KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                     KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_ESC,
    KC_SCLN, KC_J,    KC_U,    KC_O,    KC_F,    KC_QUOT,                  KC_Z,    KC_W,    KC_D,    KC_L,    KC_B,    KC_TAB,
    KC_COMM, KC_I,    KC_E,    KC_A,    KC_H,    KC_Y,                     KC_G,    KC_S,    KC_T,    KC_R,    KC_N,    KC_LCTL,
    KC_RSFT, KC_SLSH, KC_MINS, KC_DOT,  KC_P,    KC_K, KC_RBRC,  KC_LBRC,  KC_V,    KC_C,    KC_M,    KC_X,    KC_Q,    KC_LSFT,
    KC_RGUI, KC_BSPC, MO(_RAISE), KC_ENT, KC_SPC, MO(_LOWER), KC_LGUI, KC_LALT
),

/* LOWER (MIRRORED)
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | F12  | F11  | F10  |  F9  |  F8  |  F7  |                    |  F6  |  F5  |  F4  |  F3  |  F2  |  F1  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |  ~   |   )  |   (  |   *  |   &  |   ^  |-------.    ,-------|   %  |   $  |   #  |   @  |   !  |   `  |
    * |------+------+------+------+------+------|   ]   |    |    [  |------+------+------+------+------+------|
    * |  |   |   }  |   {  |   +  |   _  |      |-------|    |-------|      |      |      |      |      |      |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   | RGUI |BackSP|RAISE | /Enter  /       \Space \  |LOWER | LGUI | LAlt |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */
[_LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,                     KC_F6,   KC_F5,   KC_F4,   KC_F3,   KC_F2,   KC_F1,
    KC_TILD, KC_RPRN, KC_LPRN, KC_ASTR, KC_AMPR, KC_CIRC,                   KC_PERC, KC_DLR,  KC_HASH, KC_AT,   KC_EXLM, KC_GRV,
    KC_PIPE, KC_RCBR, KC_LCBR, KC_PLUS, KC_UNDS, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______
),

/* RAISE (MIRRORED)
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |   0  |   9  |   8  |   7  |   6  |                    |   5  |   4  |   3  |   2  |   1  |   `  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |Right |  Up  | Down | Left |      |-------.    ,-------|  F6  |  F5  |  F4  |  F3  |  F2  |  F1  |
    * |------+------+------+------+------+------|   ]   |    |    [  |------+------+------+------+------+------|
    * |   \  |   ]  |   [  |   =  |   -  |   +  |-------|    |-------| F12  | F11  | F10  |  F9  |  F8  |  F7  |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   | RGUI |BackSP|RAISE | /Enter  /       \Space \  |LOWER | LGUI | LAlt |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */

[_RAISE] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
    _______, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                        KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_GRV,
    XXXXXXX, KC_RGHT, KC_UP,   KC_DOWN, KC_LEFT, XXXXXXX,                   KC_F6,   KC_F5,   KC_F4,   KC_F3,   KC_F2,   KC_F1,
    KC_BSLS, KC_RBRC, KC_LBRC, KC_EQL,  KC_MINS, KC_PLUS, _______, _______,  KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,
    _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_ADJUST] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______,  _______, _______, _______
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
