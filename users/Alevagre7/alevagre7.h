#pragma once
#include "quantum.h"

// Layers declarations
enum layers {
    _QWERTY,
    _RAISE,
    _LOWER,
    _LOL,
};

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

// Tap Dance declarations
enum tap_dances {
    TD_LSFT_CAPS,
    TD_DOT_COMM,
    TD_PPLS_PMNS,
    TD_PAST_PSLS,
};

// Mod-Taps
//  Layers
#define KC_SPLO LT(_LOWER, KC_SPC)
#define KC_BSRA LT(_RAISE, KC_BSPC)
#define KC_MAIN DF(_QWERTY) 
#define KC_LOL DF(_LOL)
//  Holders
#define KC_ESCC LCTL_T(KC_ESC)
#define KC_LSF7 LSFT_T(KC_F7)
#define KC_LCF1 LCTL_T(KC_F1)
//  Tap Dances
#define KC_LSCL TD(TD_LSFT_CAPS)
#define KC_DOCO TD(TD_DOT_COMM)
#define KC_PLMS TD(TD_PPLS_PMNS)
#define KC_PAPS TD(TD_PAST_PSLS)


// Custom Defines
#define KC_RST RESET
#define KC_DFU DEBUG
#define KC_EERS EEP_RST
#define KC_LTGT LTGT // > or < with shift
#define KC_LPLT LPLT // ( or < with shift
#define KC_RPGT RPGT // ) or > with shift
#define KC_NEQL NEQL // !=

#ifdef RGB_MATRIX_ENABLE
#define KC_LRST RGBRST
#define KC_LTOG RGB_TOG // Toggle RGB lighting on or off
#define KC_LHUI RGB_HUI // Increase hue
#define KC_LHUD RGB_HUD // Decrease hue
#define KC_LSAI RGB_SAI // Increase saturation
#define KC_LSAD RGB_SAD // Decrease saturation
#define KC_LVAI RGB_VAI // Increase brightness
#define KC_LVAD RGB_VAD // Decrease brightness
#define KC_LMOD RGB_MOD // Cycle through modes
#define KC_LSPI RGB_SPI // Increase effect speed
#define KC_LSPD RGB_SPD // Increase effect speed
#endif
