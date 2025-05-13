// !!! DO NOT ADD #pragma once !!! //

// RGB Matrix effect declarations
RGB_MATRIX_EFFECT(base_effect)
RGB_MATRIX_EFFECT(layer_1_effect)
RGB_MATRIX_EFFECT(layer_2_effect)
RGB_MATRIX_EFFECT(layer_3_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// // Select effect based on layer
// uint8_t rgb_matrix_get_effect(void) {
//     switch (get_highest_layer(layer_state)) {
//         case LAYER_BASE:
//             return 0; // base_effect
//         case LAYER_RAISE:
//             return 1; // layer_1_effect
//         case LAYER_LOWER:
//             return 2; // layer_2_effect
//         case LAYER_MOUSE:
//             return 3; // layer_3_effect
//         default:
//             return 0; // base_effect
//     }
// }

/* shorthand RGB colors */
#define RED       0xFF, 0x00, 0x00 // Red
#define ORA       0xFF, 0x7F, 0x00 // Orange
#define YEL       0xFF, 0xFF, 0x00 // Yellow
#define LIM       0x7F, 0xFF, 0x00 // Lime
#define GRN       0x00, 0xFF, 0x00 // Green
#define SPR       0x00, 0xFF, 0x7F // Spring Green
#define CYA       0x00, 0xFF, 0xFF // Cyan
#define AZU       0x00, 0x7F, 0xFF // Azure
#define BLU       0x00, 0x00, 0xFF // Blue
#define IND       0x7F, 0x00, 0xFF // Indigo
#define MAG       0xFF, 0x00, 0xFF // Magenta
#define PIN       0xFF, 0x00, 0x7F // Pink
#define WHI       0xFF, 0xFF, 0xFF // White
#define BLK       0x00, 0x00, 0x00 // Black

// New color scheme
#define LETTER_COLOR    CYA  // Letters (A-Z)
#define NUMBER_COLOR    YEL  // Numbers (1-0)
#define MODIFI_COLOR    MAG  // Modifier keys (Ctrl, Alt, Shift, etc)
#define SYMBOL_COLOR    GRN  // Symbols and special keys
#define THUMB__COLOR    BLU  // Thumb cluster keys
#define NO_____COLOR    BLK  // No color
#define MOUSE__COLOR    PIN  // Mouse keys
#define COMBO__COLOR    RED  // Combo keys

struct RGB_key {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

// Base layer colors
// clang-format off
struct RGB_key base_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
          [0]={SYMBOL_COLOR},    [7]={NUMBER_COLOR},    [8]={NUMBER_COLOR},    [15]={NUMBER_COLOR},   [16]={NUMBER_COLOR},   [20]={NUMBER_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [1]={MODIFI_COLOR},    [6]={LETTER_COLOR},    [9]={LETTER_COLOR},    [14]={LETTER_COLOR},   [17]={LETTER_COLOR},   [21]={LETTER_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [2]={MODIFI_COLOR},    [5]={COMBO__COLOR},   [10]={COMBO__COLOR},    [13]={COMBO__COLOR},   [18]={COMBO__COLOR},   [22]={LETTER_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [3]={MODIFI_COLOR},    [4]={LETTER_COLOR},   [11]={LETTER_COLOR},    [12]={LETTER_COLOR},   [19]={LETTER_COLOR},   [23]={LETTER_COLOR},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
         [49]={SYMBOL_COLOR},   [45]={NUMBER_COLOR},   [44]={NUMBER_COLOR},   [37]={NUMBER_COLOR},   [36]={NUMBER_COLOR},   [29]={NUMBER_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [50]={LETTER_COLOR},   [46]={LETTER_COLOR},   [43]={LETTER_COLOR},   [38]={LETTER_COLOR},   [35]={LETTER_COLOR},   [30]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [51]={LETTER_COLOR},   [47]={COMBO__COLOR},   [42]={COMBO__COLOR},   [39]={COMBO__COLOR},   [34]={COMBO__COLOR},   [31]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [52]={LETTER_COLOR},   [48]={LETTER_COLOR},   [41]={SYMBOL_COLOR},   [40]={SYMBOL_COLOR},   [33]={SYMBOL_COLOR},   [32]={SYMBOL_COLOR},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
         [26]={MODIFI_COLOR},   [27]={SYMBOL_COLOR},   [28]={THUMB__COLOR},/**/[53]={THUMB__COLOR},   [54]={SYMBOL_COLOR},
                                [25]={MODIFI_COLOR},   [24]={SYMBOL_COLOR},/**/[55]={SYMBOL_COLOR},
};

// Raise layer colors (symbols layer)
struct RGB_key layer_1_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
          [0]={SYMBOL_COLOR},    [7]={SYMBOL_COLOR},    [8]={SYMBOL_COLOR},    [15]={SYMBOL_COLOR},   [16]={SYMBOL_COLOR},   [20]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [1]={SYMBOL_COLOR},    [6]={SYMBOL_COLOR},    [9]={SYMBOL_COLOR},    [14]={SYMBOL_COLOR},   [17]={SYMBOL_COLOR},   [21]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [2]={SYMBOL_COLOR},    [5]={SYMBOL_COLOR},   [10]={SYMBOL_COLOR},    [13]={SYMBOL_COLOR},   [18]={SYMBOL_COLOR},   [22]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [3]={NO_____COLOR},    [4]={NO_____COLOR},   [11]={NO_____COLOR},    [12]={NO_____COLOR},   [19]={NO_____COLOR},   [23]={NO_____COLOR},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
         [49]={SYMBOL_COLOR},   [45]={SYMBOL_COLOR},   [44]={SYMBOL_COLOR},   [37]={SYMBOL_COLOR},   [36]={SYMBOL_COLOR},   [29]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [50]={SYMBOL_COLOR},   [46]={SYMBOL_COLOR},   [43]={SYMBOL_COLOR},   [38]={SYMBOL_COLOR},   [35]={SYMBOL_COLOR},   [30]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [51]={NO_____COLOR},   [47]={NO_____COLOR},   [42]={NO_____COLOR},   [39]={NO_____COLOR},   [34]={NO_____COLOR},   [31]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [52]={NO_____COLOR},   [48]={NO_____COLOR},   [41]={NO_____COLOR},   [40]={NO_____COLOR},   [33]={NO_____COLOR},   [32]={NO_____COLOR},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
         [26]={NO_____COLOR},   [27]={NO_____COLOR},   [28]={NO_____COLOR},/**/[53]={NO_____COLOR},   [54]={NO_____COLOR},
                                [25]={NO_____COLOR},   [24]={NO_____COLOR},/**/[55]={NO_____COLOR},
};

// Lower layer colors (function keys layer)
struct RGB_key layer_2_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
          [0]={SYMBOL_COLOR},    [7]={SYMBOL_COLOR},    [8]={SYMBOL_COLOR},    [15]={SYMBOL_COLOR},   [16]={SYMBOL_COLOR},   [20]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [1]={NO_____COLOR},    [6]={NO_____COLOR},    [9]={NO_____COLOR},    [14]={SYMBOL_COLOR},   [17]={SYMBOL_COLOR},   [21]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [2]={NO_____COLOR},    [5]={NO_____COLOR},   [10]={NO_____COLOR},    [13]={SYMBOL_COLOR},   [18]={SYMBOL_COLOR},   [22]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [3]={NO_____COLOR},    [4]={NO_____COLOR},   [11]={NO_____COLOR},    [12]={SYMBOL_COLOR},   [19]={SYMBOL_COLOR},   [23]={NO_____COLOR},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
         [49]={SYMBOL_COLOR},   [45]={SYMBOL_COLOR},   [44]={SYMBOL_COLOR},   [37]={SYMBOL_COLOR},   [36]={SYMBOL_COLOR},   [29]={SYMBOL_COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [50]={NO_____COLOR},   [46]={NO_____COLOR},   [43]={NO_____COLOR},   [38]={NO_____COLOR},   [35]={NO_____COLOR},   [30]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [51]={NO_____COLOR},   [47]={SYMBOL_COLOR},   [42]={SYMBOL_COLOR},   [39]={NO_____COLOR},   [34]={NO_____COLOR},   [31]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [52]={NO_____COLOR},   [48]={NO_____COLOR},   [41]={NO_____COLOR},   [40]={NO_____COLOR},   [33]={NO_____COLOR},   [32]={NO_____COLOR},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
         [26]={NO_____COLOR},   [27]={NO_____COLOR},   [28]={NO_____COLOR},/**/[53]={NO_____COLOR},   [54]={NO_____COLOR},
                                [25]={NO_____COLOR},   [24]={NO_____COLOR},/**/[55]={NO_____COLOR},
};

// Mouse layer colors
struct RGB_key layer_3_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
          [0]={NO_____COLOR},    [7]={NO_____COLOR},    [8]={NO_____COLOR},    [15]={NO_____COLOR},   [16]={NO_____COLOR},   [20]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [1]={NO_____COLOR},    [6]={NO_____COLOR},    [9]={NO_____COLOR},    [14]={COMBO__COLOR},   [17]={COMBO__COLOR},   [21]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [2]={NO_____COLOR},    [5]={NO_____COLOR},   [10]={MODIFI_COLOR},    [13]={MODIFI_COLOR},   [18]={MODIFI_COLOR},   [22]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
          [3]={NO_____COLOR},    [4]={NO_____COLOR},   [11]={NO_____COLOR},    [12]={NO_____COLOR},   [19]={NO_____COLOR},   [23]={NO_____COLOR},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
         [49]={NO_____COLOR},   [45]={NO_____COLOR},   [44]={NO_____COLOR},   [37]={NO_____COLOR},   [36]={NO_____COLOR},   [29]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [50]={NO_____COLOR},   [46]={COMBO__COLOR},   [43]={COMBO__COLOR},   [38]={NO_____COLOR},   [35]={NO_____COLOR},   [30]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [51]={NO_____COLOR},   [47]={MOUSE__COLOR},   [42]={MOUSE__COLOR},   [39]={NO_____COLOR},   [34]={NO_____COLOR},   [31]={NO_____COLOR},
    // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
         [52]={NO_____COLOR},   [48]={COMBO__COLOR},   [41]={COMBO__COLOR},   [40]={NO_____COLOR},   [33]={NO_____COLOR},   [32]={NO_____COLOR},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
         [26]={NO_____COLOR},   [27]={NO_____COLOR},   [28]={NO_____COLOR},/**/[53]={NO_____COLOR},   [54]={NO_____COLOR},
                                [25]={NO_____COLOR},   [24]={NO_____COLOR},/**/[55]={NO_____COLOR},
};
// clang-format on

static bool base_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, base_rgb[i].r*scale, base_rgb[i].g*scale, base_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_1_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, layer_1_rgb[i].r*scale, layer_1_rgb[i].g*scale, layer_1_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_2_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, layer_2_rgb[i].r*scale, layer_2_rgb[i].g*scale, layer_2_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_3_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, layer_3_rgb[i].r*scale, layer_3_rgb[i].g*scale, layer_3_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
