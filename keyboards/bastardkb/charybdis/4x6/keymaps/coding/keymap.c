#include QMK_KEYBOARD_H
#include <stdint.h>
#include "quantum.h"
#include <string.h>  // for memchr


enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_RAISE,
    LAYER_LOWER,
    LAYER_POINTER,
};

#define LOWER MO(LAYER_LOWER)
#define RAISE MO(LAYER_RAISE)
#define POINTER MO(LAYER_POINTER)

#define CHARYBDIS_AUTO_SNIPING_ON_LAYER LAYER_POINTER
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE

#ifdef CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
static uint16_t auto_pointer_layer_timer = 0;

#    ifndef CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS
#        define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 1000
#    endif // CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS

#    ifndef CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD
#        define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 8
#    endif // CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD
#endif     // CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────╮ ╭────────────────────────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
       KC_LALT,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_LCTL,
  // ╰────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────╯
                                             KC_LGUI,   KC_SPC,   LT(LAYER_POINTER, KC_BSPC),      RAISE,  LT(LAYER_POINTER, KC_ENT),
                                                            KC_LCTL, KC_LSFT,     LOWER
  //                                           ╰──────────────────────────────────────╯ ╰────────────────────────╯
  ),

  [LAYER_RAISE] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────╮ ╭────────────────────────────────────────────────────────────────────────╮
       KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC,    KC_AMPR, KC_ASTR, KC_UNDS, KC_PLUS, KC_PIPE,  KC_DEL,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
       KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN,      KC_LT,   KC_GT,   KC_EQL, KC_BSLS,  KC_GRV, KC_BSPC,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
       KC_SCLN, KC_COLN, KC_DQUO, KC_QUOT, KC_SLSH, KC_QUES,    KC_TILD, KC_GRV, KC_BSLS, KC_PIPE, KC_UNDS, KC_PLUS,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────╯
                                              XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                                           XXXXXXX, _______,    XXXXXXX
  //                                           ╰──────────────────────────────────────╯ ╰────────────────────────╯
  ),

  [LAYER_LOWER] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────╮ ╭────────────────── ──────────────────────────────────────────────────────╮
          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX,   XXXXXXX,  KC_END, KC_HOME, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, KC_UP, XXXXXXX,    XXXXXXX, KC_LEFT, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
        XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────╯
                                               XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                                            XXXXXXX, XXXXXXX,    XXXXXXX
  //                                           ╰──────────────────────────────────────╯ ╰────────────────────────╯
  ),

  [LAYER_POINTER] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────╮ ╭────────────────────────────────────────────────────────────────────────╮
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
 XXXXXXX, XXXXXXX, XXXXXXX, LGUI(KC_LBRC), LGUI(KC_RBRC), XXXXXXX,    XXXXXXX, LCTL(KC_LEFT), LCTL(KC_RGHT), XXXXXXX, XXXXXXX, XXXXXXX,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
XXXXXXX, DRGSCRL , KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_LEFT_GUI, XXXXXXX,    XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX, SNIPING, XXXXXXX,
  // ├────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────┤
        KC_LEFT_SHIFT, SNP_TOG, XXXXXXX, LCTL(KC_DOWN), LCTL(KC_UP), XXXXXXX,    XXXXXXX, LGUI(KC_LBRC), LGUI(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────╯
                                               XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                                            XXXXXXX, XXXXXXX,    XXXXXXX
  //                                           ╰──────────────────────────────────────╯ ╰────────────────────────╯
  ),
};
// clang-format on


#ifdef RGB_MATRIX_ENABLE
// Forward-declare this helper function since it is defined in rgb_matrix.c.
void rgb_matrix_update_pwm_buffers(void);
#endif

// // Fancy simple layer colors
// layer_state_t layer_state_set_user(layer_state_t state) {
//     uint8_t layer      = get_highest_layer(state); // layer ID
//     uint8_t saturation = rgblight_get_sat();       // Current saturated color
//     uint8_t value      = rgblight_get_val();       // Current brightness value

//     if (layer == 1) {
//         rgblight_sethsv_noeeprom(180, saturation, value); // violet
//     } else if (layer == 2) {
//         rgblight_sethsv_noeeprom(0, saturation, value); // red
//     } else if (layer == 3) {
//         rgblight_sethsv_noeeprom(240, saturation, value); // pink
//     } else if (layer == 4) {
//         rgblight_sethsv_noeeprom(60, saturation, value); // green
//     } else {
//         // default layer
//         rgblight_sethsv_noeeprom(120, saturation, value); // aqua
//     }

//     return state;
// }

void keyboard_post_init_user(void) {
    // rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_base_effect);

  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(100, 100, 100);
  rgblight_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state); // layer ID
    #ifdef CHARYBDIS_AUTO_SNIPING_ON_LAYER
    charybdis_set_pointer_sniping_enabled(layer_state_cmp(state, CHARYBDIS_AUTO_SNIPING_ON_LAYER));
    #endif // CHARYBDIS_AUTO_SNIPING_ON_LAYER

    if (layer == 1) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_1_effect);
    } else if (layer == 2) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_2_effect);
    } else if (layer == 3) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_layer_3_effect);
    } else {
        // default layer
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_base_effect);
    }
    return state;
}

#ifdef POINTING_DEVICE_ENABLE
#    ifdef CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (abs(mouse_report.x) > CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD || abs(mouse_report.y) > CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD) {
        if (auto_pointer_layer_timer == 0) {
            layer_on(LAYER_POINTER);
        }
        auto_pointer_layer_timer = timer_read();
    }
    return mouse_report;
}

void matrix_scan_user(void) {
    if (auto_pointer_layer_timer != 0 && TIMER_DIFF_16(timer_read(), auto_pointer_layer_timer) >= CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS) {
        auto_pointer_layer_timer = 0;
        layer_off(LAYER_POINTER);
    }
}

#    endif // CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE
