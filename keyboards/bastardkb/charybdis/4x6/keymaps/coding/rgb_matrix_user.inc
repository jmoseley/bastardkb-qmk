// !!! DO NOT ADD #pragma once !!! //

// RGB Matrix effect declarations
RGB_MATRIX_EFFECT(base_effect)
RGB_MATRIX_EFFECT(layer_1_effect)
RGB_MATRIX_EFFECT(layer_2_effect)
RGB_MATRIX_EFFECT(layer_3_effect)
RGB_MATRIX_EFFECT(layer_4_effect)

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

struct RGB_key {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

// Base layer colors
// clang-format off
struct RGB_key base_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
          [0]={WHI},    [7]={WHI},    [8]={WHI},    [15]={WHI},   [16]={WHI},   [20]={WHI},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [1]={BLU},    [6]={BLU},    [9]={BLU},    [14]={BLU},   [17]={BLU},   [21]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [2]={BLU},    [5]={BLU},   [10]={BLU},    [13]={BLU},   [18]={BLU},   [22]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [3]={BLU},    [4]={BLU},   [11]={BLU},    [12]={BLU},   [19]={BLU},   [23]={BLU},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
         [49]={WHI},   [45]={WHI},   [44]={WHI},   [37]={WHI},   [36]={WHI},   [29]={WHI},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [50]={BLU},   [46]={BLU},   [43]={BLU},   [38]={BLU},   [35]={BLU},   [30]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [51]={BLU},   [47]={BLU},   [42]={BLU},   [39]={BLU},   [34]={BLU},   [31]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [52]={BLU},   [48]={BLU},   [41]={BLU},   [40]={BLU},   [33]={BLU},   [32]={BLU},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────╯
         [26]={GRN},   [27]={GRN},   [28]={GRN},/**/[53]={GRN},   [54]={GRN},
                       [25]={GRN},   [24]={GRN},/**/[55]={GRN},
};

// Raise layer colors
struct RGB_key layer_1_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
          [0]={CYA},    [7]={CYA},    [8]={CYA},    [15]={CYA},   [16]={CYA},   [20]={CYA},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [1]={BLU},    [6]={BLU},    [9]={BLU},    [14]={BLU},   [17]={BLU},   [21]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [2]={BLU},    [5]={BLU},   [10]={BLU},    [13]={BLU},   [18]={BLU},   [22]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [3]={BLU},    [4]={BLU},   [11]={BLU},    [12]={BLU},   [19]={BLU},   [23]={BLU},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
         [49]={CYA},   [45]={CYA},   [44]={CYA},   [37]={CYA},   [36]={CYA},   [29]={CYA},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [50]={BLU},   [46]={BLU},   [43]={BLU},   [38]={BLU},   [35]={BLU},   [30]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [51]={BLU},   [47]={BLU},   [42]={BLU},   [39]={BLU},   [34]={BLU},   [31]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [52]={BLU},   [48]={BLU},   [41]={BLU},   [40]={BLU},   [33]={BLU},   [32]={BLU},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────╯
         [26]={GRN},   [27]={GRN},   [28]={GRN},/**/[53]={GRN},   [54]={GRN},
                       [25]={GRN},   [24]={GRN},/**/[55]={GRN},
};

// Lower layer colors
struct RGB_key layer_2_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
          [0]={RED},    [7]={RED},    [8]={RED},    [15]={RED},   [16]={RED},   [20]={RED},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [1]={BLU},    [6]={BLU},    [9]={BLU},    [14]={BLU},   [17]={BLU},   [21]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [2]={BLU},    [5]={BLU},   [10]={BLU},    [13]={BLU},   [18]={BLU},   [22]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [3]={BLU},    [4]={BLU},   [11]={BLU},    [12]={BLU},   [19]={BLU},   [23]={BLU},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
         [49]={RED},   [45]={RED},   [44]={RED},   [37]={RED},   [36]={RED},   [29]={RED},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [50]={BLU},   [46]={BLU},   [43]={BLU},   [38]={BLU},   [35]={BLU},   [30]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [51]={BLU},   [47]={BLU},   [42]={BLU},   [39]={BLU},   [34]={BLU},   [31]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [52]={BLU},   [48]={BLU},   [41]={BLU},   [40]={BLU},   [33]={BLU},   [32]={BLU},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────╯
         [26]={GRN},   [27]={GRN},   [28]={GRN},/**/[53]={GRN},   [54]={GRN},
                       [25]={GRN},   [24]={GRN},/**/[55]={GRN},
};

// Mouse layer colors
struct RGB_key layer_3_rgb[56] = {
    // Left half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
          [0]={GRN},    [7]={GRN},    [8]={GRN},    [15]={GRN},   [16]={GRN},   [20]={GRN},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [1]={BLU},    [6]={BLU},    [9]={BLU},    [14]={BLU},   [17]={BLU},   [21]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [2]={BLU},    [5]={BLU},   [10]={BLU},    [13]={BLU},   [18]={BLU},   [22]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
          [3]={BLU},    [4]={BLU},   [11]={BLU},    [12]={BLU},   [19]={BLU},   [23]={BLU},
    // Right half
    // ╭─────────────────────────────────────────────────────────────────────────────────╮
         [49]={GRN},   [45]={GRN},   [44]={GRN},   [37]={GRN},   [36]={GRN},   [29]={GRN},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [50]={BLU},   [46]={BLU},   [43]={BLU},   [38]={BLU},   [35]={BLU},   [30]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [51]={BLU},   [47]={BLU},   [42]={BLU},   [39]={BLU},   [34]={BLU},   [31]={BLU},
    // ├─────────────────────────────────────────────────────────────────────────────────┤
         [52]={BLU},   [48]={BLU},   [41]={BLU},   [40]={BLU},   [33]={BLU},   [32]={BLU},
    // Thumb cluster left and right
    // ╰─────────────────────────────────────────────────────────────────────────────────╯
         [26]={GRN},   [27]={GRN},   [28]={GRN},/**/[53]={GRN},   [54]={GRN},
                       [25]={GRN},   [24]={GRN},/**/[55]={GRN},
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

static bool layer_4_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, layer_3_rgb[i].r*scale, layer_3_rgb[i].g*scale, layer_3_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
