#include QMK_KEYBOARD_H
#include <stdint.h>
#include "quantum.h"
#include <string.h>  // for memchr


enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_RAISE,
    LAYER_LOWER,
    LAYER_MOUSE,
};

#define LOWER MO(LAYER_LOWER)
#define RAISE MO(LAYER_RAISE)

#define HM_GUI   MT(MOD_LGUI, KC_A)
#define HM_CTL   MT(MOD_LCTL, KC_S)
#define HM_ALT   MT(MOD_LALT, KC_D)
#define HM_SFT   MT(MOD_LSFT, KC_F)
#define HM_SFT_R MT(MOD_RSFT, KC_J)
#define HM_ALT_R MT(MOD_RALT, KC_K)
#define HM_CTL_R MT(MOD_RCTL, KC_L)
#define HM_GUI_R MT(MOD_RGUI, KC_SCLN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,   HM_GUI,  HM_CTL,  HM_ALT,  HM_SFT,    KC_G,       KC_H, HM_SFT_R, HM_ALT_R, HM_CTL_R, HM_GUI_R, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_LCTL,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   KC_LGUI, KC_SPC,   LOWER,      RAISE,  KC_ENT,
                                           KC_LCTL, KC_BSPC,     KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_RAISE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC,    KC_AMPR, KC_ASTR, KC_UNDS, KC_PLUS, KC_PIPE,  KC_DEL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN,      KC_LT,   KC_GT,   KC_EQL, KC_BSLS,  KC_GRV, KC_BSPC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_SCLN, KC_COLN, KC_DQUO, KC_QUOT, KC_SLSH, KC_QUES,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                           XXXXXXX, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_LOWER] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        XXXXXXX, KC_HOME,   KC_UP,  KC_END, XXXXXXX, XXXXXXX,    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        XXXXXXX, KC_PGUP, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                            XXXXXXX, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_MOUSE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        LCTL(KC_LEFT), LCTL(KC_RGHT), LGUI(KC_LBRC), LGUI(KC_RBRC), KC_WH_U, KC_WH_D,    XXXXXXX, KC_BTN2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_R, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                            XXXXXXX, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};

/* ────── Tap-hold timing tweaks ──────────────────────────────────── */
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HM_GUI:
    case HM_CTL:
    case HM_ALT:
    case HM_SFT:
    case HM_GUI_R:
    case HM_CTL_R:
    case HM_ALT_R:
    case HM_SFT_R:
      return TAPPING_TERM + 50;
  }
  return TAPPING_TERM;
}

#ifdef RGB_MATRIX_ENABLE
// Forward-declare this helper function since it is defined in rgb_matrix.c.
void rgb_matrix_update_pwm_buffers(void);

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_base_effect);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer      = get_highest_layer(state); // layer ID
    //uint8_t saturation = rgblight_get_sat();       // Current saturated color
    //uint8_t value      = rgblight_get_val();       // Current brightness value

    if (layer == 1) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_1_effect);
    } else if (layer == 2) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_2_effect);
    } else if (layer == 3) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_3_effect);
    } else if (layer == 4) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_4_effect);
    } else {
        // default layer
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_base_effect);
    }
    return state;
}
#endif
