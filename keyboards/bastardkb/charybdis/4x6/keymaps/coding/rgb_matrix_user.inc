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
struct RGB_key base_rgb[58] = {
    // Number keys (0-10)
    [0]={WHI}, [1]={WHI}, [2]={WHI}, [3]={WHI}, [4]={WHI}, [5]={WHI},
    [6]={WHI}, [7]={WHI}, [8]={WHI}, [9]={WHI}, [10]={WHI},
    // Modifier keys (11,12,34-37)
    [11]={MAG}, [12]={MAG}, [34]={MAG}, [35]={MAG}, [36]={MAG}, [37]={MAG},
    // Letter keys (13-33)
    [13]={BLU}, [14]={BLU}, [15]={BLU}, [16]={BLU}, [17]={BLU}, [18]={BLU},
    [19]={BLU}, [20]={BLU}, [21]={BLU}, [22]={BLU}, [23]={BLU}, [24]={BLU},
    [25]={BLU}, [26]={BLU}, [27]={BLU}, [28]={BLU}, [29]={BLU}, [30]={BLU},
    [31]={BLU}, [32]={BLU}, [33]={BLU},
    // Symbol keys (38-45)
    [38]={YEL}, [39]={YEL}, [40]={YEL}, [41]={YEL}, [42]={YEL}, [43]={YEL},
    [44]={YEL}, [45]={YEL},
    // Thumb cluster
    [46]={GRN}, [47]={GRN}, [48]={GRN}, [49]={GRN}, [50]={GRN}, [51]={GRN},
    [52]={GRN}, [53]={GRN}, [54]={GRN}, [55]={GRN}, [56]={GRN}, [57]={GRN}
};

// Raise layer colors
struct RGB_key layer_1_rgb[58] = {
    // Number keys (0-10)
    [0]={CYA}, [1]={CYA}, [2]={CYA}, [3]={CYA}, [4]={CYA}, [5]={CYA},
    [6]={CYA}, [7]={CYA}, [8]={CYA}, [9]={CYA}, [10]={CYA},
    // Modifier keys (11,12,34-37)
    [11]={MAG}, [12]={MAG}, [34]={MAG}, [35]={MAG}, [36]={MAG}, [37]={MAG},
    // Letter keys (13-33)
    [13]={BLU}, [14]={BLU}, [15]={BLU}, [16]={BLU}, [17]={BLU}, [18]={BLU},
    [19]={BLU}, [20]={BLU}, [21]={BLU}, [22]={BLU}, [23]={BLU}, [24]={BLU},
    [25]={BLU}, [26]={BLU}, [27]={BLU}, [28]={BLU}, [29]={BLU}, [30]={BLU},
    [31]={BLU}, [32]={BLU}, [33]={BLU},
    // Symbol keys (38-45)
    [38]={YEL}, [39]={YEL}, [40]={YEL}, [41]={YEL}, [42]={YEL}, [43]={YEL},
    [44]={YEL}, [45]={YEL},
    // Thumb cluster
    [46]={GRN}, [47]={GRN}, [48]={GRN}, [49]={GRN}, [50]={GRN}, [51]={GRN},
    [52]={GRN}, [53]={GRN}, [54]={GRN}, [55]={GRN}, [56]={GRN}, [57]={GRN}
};

// Lower layer colors
struct RGB_key layer_2_rgb[58] = {
    // Number keys (0-10)
    [0]={RED}, [1]={RED}, [2]={RED}, [3]={RED}, [4]={RED}, [5]={RED},
    [6]={RED}, [7]={RED}, [8]={RED}, [9]={RED}, [10]={RED},
    // Modifier keys (11,12,34-37)
    [11]={MAG}, [12]={MAG}, [34]={MAG}, [35]={MAG}, [36]={MAG}, [37]={MAG},
    // Letter keys (13-33)
    [13]={BLU}, [14]={BLU}, [15]={BLU}, [16]={BLU}, [17]={BLU}, [18]={BLU},
    [19]={BLU}, [20]={BLU}, [21]={BLU}, [22]={BLU}, [23]={BLU}, [24]={BLU},
    [25]={BLU}, [26]={BLU}, [27]={BLU}, [28]={BLU}, [29]={BLU}, [30]={BLU},
    [31]={BLU}, [32]={BLU}, [33]={BLU},
    // Symbol keys (38-45)
    [38]={YEL}, [39]={YEL}, [40]={YEL}, [41]={YEL}, [42]={YEL}, [43]={YEL},
    [44]={YEL}, [45]={YEL},
    // Thumb cluster
    [46]={GRN}, [47]={GRN}, [48]={GRN}, [49]={GRN}, [50]={GRN}, [51]={GRN},
    [52]={GRN}, [53]={GRN}, [54]={GRN}, [55]={GRN}, [56]={GRN}, [57]={GRN}
};

// Mouse layer colors
struct RGB_key layer_3_rgb[58] = {
    // Number keys (0-10)
    [0]={GRN}, [1]={GRN}, [2]={GRN}, [3]={GRN}, [4]={GRN}, [5]={GRN},
    [6]={GRN}, [7]={GRN}, [8]={GRN}, [9]={GRN}, [10]={GRN},
    // Modifier keys (11,12,34-37)
    [11]={MAG}, [12]={MAG}, [34]={MAG}, [35]={MAG}, [36]={MAG}, [37]={MAG},
    // Letter keys (13-33)
    [13]={BLU}, [14]={BLU}, [15]={BLU}, [16]={BLU}, [17]={BLU}, [18]={BLU},
    [19]={BLU}, [20]={BLU}, [21]={BLU}, [22]={BLU}, [23]={BLU}, [24]={BLU},
    [25]={BLU}, [26]={BLU}, [27]={BLU}, [28]={BLU}, [29]={BLU}, [30]={BLU},
    [31]={BLU}, [32]={BLU}, [33]={BLU},
    // Symbol keys (38-45)
    [38]={YEL}, [39]={YEL}, [40]={YEL}, [41]={YEL}, [42]={YEL}, [43]={YEL},
    [44]={YEL}, [45]={YEL},
    // Thumb cluster
    [46]={GRN}, [47]={GRN}, [48]={GRN}, [49]={GRN}, [50]={GRN}, [51]={GRN},
    [52]={GRN}, [53]={GRN}, [54]={GRN}, [55]={GRN}, [56]={GRN}, [57]={GRN}
};

static bool base_effect(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    uint8_t value = rgb_matrix_get_val();
    float scale = value / 255.0;

    for(uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, base_rgb[i].r*scale, base_rgb[i].g*scale, base_rgb[i].b*scale);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool layer_1_effect(effect_params_t* paramcpns) {
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
