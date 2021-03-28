/*
    Author: Alejandro Valenzuela
    Github: Alevagre7
    E-mail: Alevagre7@gmail.com
    Last Revision: Feb 27 2021
*/

#include QMK_KEYBOARD_H
#include "alevagre7.h"

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [TD_DOT_COMM]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COMM),
    [TD_PPLS_PMNS] = ACTION_TAP_DANCE_DOUBLE(KC_PPLS, KC_PMNS),
    [TD_PAST_PSLS] = ACTION_TAP_DANCE_DOUBLE(KC_PAST, KC_PSLS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     ESCC, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LSCL, Z  , X  , C  , V  , B  ,                N  , M  ,COMM, DOT,SLSH,MINS,
  //`----+----+----+----+----+----+----/    \----+----+----+----+----+----+----'
                       LGUI,LSFT,SPLO,         BSRA,RSFT,RGUI
  //                  `----+----+----'        `+---+----+----'c
  ),
  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GRV ,EXLM, AT ,HASH, DLR,PERC,               CIRC,LPLT,ASTR,RPGT,NEQL,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LCF1, F2 , F3 , F4 , F5 , F6 ,               AMPR,LBRC, UP ,RBRC,GRV ,BSLS,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LSF7, F8 , F9 , F10, F11, F12,               DOT ,LEFT,DOWN,RGHT,SLSH,MINS,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LGUI,LALT, ENT,         HOME, END,  NO
  //                  `----+----+----'        `----+----+----'
  ),
  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     LRST, RST, DFU,EERS,LSPI, LOL,                 P7,  P8,  P9,PLMS,MPLY,MUTE,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LHUI,LSAI,LVAI,LMOD,BRIU,PGUP,                 P6,  P5,  P4,PAPS,MNXT,VOLU,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LHUD,LSAD,LVAD,LTOG,BRID,PGDN,                 P3,  P2,  P1,PENT,MPRV,VOLD,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         NO,  NO, LSFT,          ENT, P0,DOCO    
  //                  `----+----+----'        `----+----+----'
  ), 
  [_LOL] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       P1,  P2,  P3,  P4,  P5,  P6,                 NO,  NO,  NO,  NO,  NO,  NO,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,   Q,   W,   E,   R,   G,                 NO,  NO,  NO,  NO,  NO,  NO,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     MAIN,   Z,   X,   D,   F,   B,                 NO,  NO,  NO,  NO,  NO,  NO,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          P,LSFT,   C,           NO,  NO,  NO    
  //                  `----+----+----'        `----+----+----'
  ),
};