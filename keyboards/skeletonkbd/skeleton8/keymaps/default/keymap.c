// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x2(
        RGB_TOG,   KC_P8,   KC_P9,   KC_PSLS,
        BL_TOGG,   BL_UP,   BL_DOWN,   QK_BOOT
    )
};
