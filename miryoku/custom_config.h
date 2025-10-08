// Miryoku Custom Configuration

// Euro sign unicode macro
// ZMK_UNICODE_SINGLE(euro_sign, N2, N0, A, C)
// &euro_sign

// Use Mac clipboard behavior
#define MIRYOKU_CLIPBOARD_MAC

// Base layer - swap tab and space
#define MIRYOKU_LAYER_BASE \
    &kp Q,              &kp W,              &kp F,              &kp P,              &kp B,              &kp J,              &kp L,              &kp U,              &kp Y,              &kp SQT, \
    U_MT(LGUI, A),      U_MT(LALT, R),      U_MT(LCTRL, S),     U_MT(LSHFT, T),     &kp G,              &kp M,              U_MT(LSHFT, N),     U_MT(LCTRL, E),     U_MT(LALT, I),      U_MT(LGUI, O), \
    U_LT(U_BUTTON, Z),  U_MT(RALT, X),      &kp C,              &kp D,              &kp V,              &kp K,              &kp H,              &kp COMMA,          U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH), \
    U_NP,               U_NP,               U_LT(U_MEDIA, ESC), U_LT(U_NAV, TAB),   U_LT(U_MOUSE, SPACE), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),   U_NP,               U_NP

// // Tap layer - swap tab and space
#define MIRYOKU_LAYER_TAP \
    &kp Q,          &kp W,          &kp F,          &kp P,          &kp B,          &kp J,          &kp L,          &kp U,          &kp Y,          &kp SQT, \
    &kp A,          &kp R,          &kp S,          &kp T,          &kp G,          &kp M,          &kp N,          &kp E,          &kp I,          &kp O, \
    &kp Z,          &kp X,          &kp C,          &kp D,          &kp V,          &kp K,          &kp H,          &kp COMMA,      &kp DOT,        &kp SLASH, \
    U_NP,           U_NP,           &kp ESC,        &kp TAB,        &kp SPACE,      &kp RET,        &kp BSPC,       &kp DEL,        U_NP,           U_NP

// // Function layer - swap tab and space
#define MIRYOKU_LAYER_FUN \
    &kp F12,        &kp F7,         &kp F8,         &kp F9,         &kp PSCRN,      U_NA,           &u_to_U_BASE,   &u_to_U_EXTRA,  &u_to_U_TAP,    U_BOOT, \
    &kp F11,        &kp F4,         &kp F5,         &kp F6,         &kp SLCK,       U_NA,           &kp LSHFT,      &kp LCTRL,      &kp LALT,       &kp LGUI, \
    &kp F10,        &kp F1,         &kp F2,         &kp F3,         &kp PAUSE_BREAK, U_NA,          &u_to_U_FUN,    &u_to_U_MEDIA,  &kp RALT,       U_NA, \
    U_NP,           U_NP,           &kp K_APP,      &kp TAB,        &kp SPACE,      U_NA,           U_NA,           U_NA,           U_NP,           U_NP

// // Symbol layer - add euro sign and mac accent key combinations
#define MIRYOKU_LAYER_SYM \
    &kp LBRC,       &kp AMPS,       &kp ASTRK,      &kp LPAR,       &kp RBRC,       &kp LA(GRAVE),  &kp LA(E),      &kp LA(U),      &kp LA(I),      &kp LA(N), \
    &kp COLON,      &kp DLLR,       &kp PRCNT,      &kp CARET,      &kp PLUS,       U_NA,     &kp LSHFT,      &kp LCTRL,      &kp LALT,       &kp LGUI, \
    &kp TILDE,      &kp EXCL,       &kp AT,         &kp HASH,       &kp PIPE,       U_NA,           &u_to_U_SYM,    &u_to_U_MOUSE,  &kp RALT,       U_NA, \
    U_NP,           U_NP,           &kp LPAR,       &kp RPAR,       &kp UNDER,      U_NA,           U_NA,           U_NA,           U_NP,           U_NP
