#include QMK_KEYBOARD_H

enum custom_keycodes {
    ARROW_FUNCTION          = SAFE_RANGE,
    ARROW_FUNCTION_IMPLICIT = SAFE_RANGE,
    ARROW                   = SAFE_RANGE,
    HEART                   = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ARROW_FUNCTION:
            if (record->event.pressed) {
                SEND_STRING("() => {}");
            }
            break;
        case ARROW_FUNCTION_IMPLICIT:
            if (record->event.pressed) {
                SEND_STRING("() => ()");
            }
            break;
        case ARROW:
            if (record->event.pressed) {
                SEND_STRING("=>");
            }
            break;
        case HEART:
            if (record->event.pressed) {
                SEND_STRING("<3");
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_planck_mit(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, MO(1), KC_LCTL, KC_LALT, MO(2), KC_LGUI, KC_SPC, MO(3), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
                                                              [1] = LAYOUT_planck_mit(KC_GRV, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_VOLD, KC_VOLU, KC_NO, KC_F3, KC_TRNS, RGB_VAD, RGB_VAI, KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F4, KC_MPRV, KC_MNXT, KC_TRNS, RGB_SAD, RGB_SAI, RGB_RMOD, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, RGB_HUD, RGB_HUI, RGB_M_G, RGB_TOG),
                                                              [2] = LAYOUT_planck_mit(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_BSLS, ARROW, ARROW_FUNCTION, ARROW_FUNCTION_IMPLICIT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLSH, HEART, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [3] = LAYOUT_planck_mit(KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_LBRC, KC_RBRC, KC_EQL, KC_MINS, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)};
