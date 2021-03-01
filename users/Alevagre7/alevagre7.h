#pragma once
#include "quantum.h"

// Layers declarations
enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// Tap Dance declarations
enum tap_dances {
    TD_LSFT_CAPS,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

// Mod-Taps
//  Layers
#define SPLO LT(_LOWER, KC_SPC)
#define BSRA LT(_RAISE, KC_BSPC)
//  Holders
#define KC_ESCC LCTL_T(KC_ESC)
#define KC_LSF7 LSFT_T(KC_F7)
#define KC_LCF1 LCTL_T(KC_F1)