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
  /* QWERTY
  *,----------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |   TAB   ,     Q    ,    W     ,     E    ,     R    ,    T     ,                     Y    ,     U    ,     I    ,     O    ,     P    ,  = / +   ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * | ESC/CTRL,     A    ,    S     ,     D    ,     F    ,    G     ,                     H    ,     J    ,     K    ,     L    ,   ; / :  ,  ' / "   ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |  SHIFT  ,     Z    ,    X     ,     C    ,     V    ,    B     ,                     N    ,     M    ,   , / <  ,   . / >  ,  / / ?  ,   - / _   ,
  *`|---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  *                                       SHIFT   ,    CMD   ,   LOWER  ,               RAISE   ,    CMD   ,   SHIFT
  *                                    `----------+----------+----------+'          `+----------+----------+----------'
  */
  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     ESCC, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LSCL, Z  , X  , C  , V  , B  ,                N  , M  ,COMM, DOT,SLSH,MINS,
  //`----+----+----+----+----+----+----/    \----+----+----+----+----+----+----'
                       LSFT,LGUI,SPLO,         BSRA,RGUI,RSFT
  //                  `----+----+----'        `+---+----+----'
  ),
  /* RAISE
  *,----------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |    ~    ,    !     ,    @     ,     #    ,     $    ,    %     ,                     ^    ,   ( / >  ,     *    ,   < / )  ,    !=    ,    =     ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * | F1/CTRL ,    F2    ,    F3    ,    F4    ,    F5    ,    F6    ,                     &    ,   [ / {  ,    UP    ,   { / ]  ,  ` / ~   ,   \ / |  ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * | F7/SHIFT,    F8    ,    F9    ,    F10   ,    F11   ,    F12   ,                     .    ,    LEFT  ,   DOWN   ,   RIGHT  ,  / / ?   ,  - / _   ,
  *`|---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  *                                      OPTION   ,   CMD    ,   ENTER  ,               RAISE   ,    HOME   ,   END
  *                                    `----------+----------+----------+'          `+----------+----------+----------'
  */
  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TLD ,EXLM, AT ,HASH, DLR,PERC,               CIRC,LPLT,ASTR,RPGT,NEQL,EQL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LCF1, F2 , F3 , F4 , F5 , F6 ,               AMPR,LBRC, UP ,RBRC,GRV ,BSLS,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LSF7, F8 , F9 , F10, F11, F12,               DOT ,LEFT,DOWN,RGHT,SLSH,MINS,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LALT,LGUI, ENT,           NO,HOME, END
  //                  `----+----+----'        `----+----+----'
  ),
  /* LOWER
  *,----------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |         ,   RESET  ,   DFU    ,EEPROM RST,  +LSPEED ,   LOL    ,                     7    ,     8    ,     9    ,   + / -  ,   PLAY   ,   MUTE   ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * | +LHUE   ,   +LSAT  , +LBRIGHT ,   LMODE  ,  +BRIGHT ,  PAGE UP ,                     4    ,     5    ,     6    ,   * / /  ,   NEXT   ,   VOL +  ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * | -LHUE   ,   -LSAT  , -LBRIGHT ,  LON/LOFF,  -LBRIGHT, PAGE DOWN,                     1    ,     2    ,     3    ,   ENTER  ,   PREV   ,   VOL -  ,
  *`|---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  *                                               ,          ,          ,               ENTER   ,     0    ,   . / , 
  *                                    `----------+----------+----------+'          `+----------+----------+----------'
  */
  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       NO, RST, DFU,EERS,LSPI, LOL,                 P7,  P8,  P9,PLMS,MPLY,MUTE,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LHUI,LSAI,LVAI,LMOD,BRIU,PGUP,                 P4,  P5,  P6,PAPS,MNXT,VOLU,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
     LHUD,LSAD,LVAD,LTOG,BRID,PGDN,                 P1,  P2,  P3,PENT,MPRV,VOLD,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                         NO,  NO,  NO,          ENT, P0 ,DOCO    
  //                  `----+----+----'        `----+----+----'
  ),
  /* LOL
  *,----------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |    1    ,    2     ,    3     ,    4     ,    5     ,    6     ,                          ,          ,          ,          ,          ,          ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |   TAB   ,    Q     ,    W     ,    E     ,    R     ,    G     ,                          ,          ,          ,          ,          ,          ,
  * |---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  * |    Z    ,    A     ,    X     ,    D     ,    F     ,    B     ,                          ,          ,          ,          ,          ,          ,
  *`|---------+----------+----------+----------+----------+----------+.              ,----------+----------+----------+----------+----------+----------+
  *                                         P     ,  SHIFT   ,   C      ,                MAIN   ,          ,    
  *                                    `----------+----------+----------+'          `+----------+----------+----------'
  */
  [_LOL] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
       P1,  P2,  P3,  P4,  P5,  P6,                 NO,  NO,  NO,  NO,  NO,  NO,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,   Q,   W,   E,   R,   G,                 NO,  NO,  NO,  NO,  NO,  NO,
  //|----+----+----+----+----+----+              |----+----+----+----+----+----|
        Z,   A,   X,   D,   F,   B,                 NO,  NO,  NO,  NO,  NO,  NO,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                          P,LSFT,   C,         MAIN,  NO,  NO    
  //                  `----+----+----'        `----+----+----'
  ),
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_QWERTY 0
#define L_RAISE 2
#define L_LOWER 4
#define L_LOL 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_QWERTY:
            oled_write_ln_P(PSTR("Qwerty"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_LOL:
            oled_write_ln_P(PSTR("Lol"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed) {
//     set_keylog(keycode, record);
//   }
//   return true;
// }
#endif // OLED_DRIVER_ENABLE