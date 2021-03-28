// Tap Dance declarations
#pragma once
#include "quantum.h"

// Custom Keycodes
enum custom_keycodes {
  CODE = SAFE_RANGE,
  LPLT,
  RPGT,
  NEQL,
#ifdef RGB_MATRIX_ENABLE
  RGBRST,
#endif
};

enum tap_dances {
    TD_LSFT_CAPS,
    TD_DOT_COMM,
    TD_PPLS_PMNS,
    TD_PAST_PSLS,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [TD_DOT_COMM]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COMM),
    [TD_PPLS_PMNS] = ACTION_TAP_DANCE_DOUBLE(KC_PPLS, KC_PMNS),
    [TD_PAST_PSLS] = ACTION_TAP_DANCE_DOUBLE(KC_PAST, KC_PSLS),
};