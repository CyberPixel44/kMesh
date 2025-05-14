#ifndef KEY_MAPPING_H
#define KEY_MAPPING_H

#include <stddef.h>

// Enum for key codes
typedef enum {
    MXCKPD_KEY_RESERVED = 0,
    MXCKPD_KEY_1 = 2,
    MXCKPD_KEY_2 = 3,
    MXCKPD_KEY_3 = 4,
    MXCKPD_KEY_4 = 5,
    MXCKPD_KEY_5 = 6,
    MXCKPD_KEY_6 = 7,
    MXCKPD_KEY_7 = 8,
    MXCKPD_KEY_8 = 9,
    MXCKPD_KEY_9 = 10,
    MXCKPD_KEY_0 = 11,
    MXCKPD_KEY_BACKSPACE = 14,
    MXCKPD_KEY_Q = 16,
    MXCKPD_KEY_W = 17,
    MXCKPD_KEY_E = 18,
    MXCKPD_KEY_R = 19,
    MXCKPD_KEY_T = 20,
    MXCKPD_KEY_Y = 21,
    MXCKPD_KEY_U = 22,
    MXCKPD_KEY_I = 23,
    MXCKPD_KEY_O = 24,
    MXCKPD_KEY_P = 25,
    MXCKPD_KEY_ENTER = 28,
    MXCKPD_KEY_A = 30,
    MXCKPD_KEY_S = 31,
    MXCKPD_KEY_D = 32,
    MXCKPD_KEY_F = 33,
    MXCKPD_KEY_G = 34,
    MXCKPD_KEY_H = 35,
    MXCKPD_KEY_J = 36,
    MXCKPD_KEY_K = 37,
    MXCKPD_KEY_L = 38,
    MXCKPD_KEY_LEFTSHIFT = 42,
    MXCKPD_KEY_Z = 44,
    MXCKPD_KEY_X = 45,
    MXCKPD_KEY_C = 46,
    MXCKPD_KEY_V = 47,
    MXCKPD_KEY_B = 48,
    MXCKPD_KEY_N = 49,
    MXCKPD_KEY_M = 50,
    MXCKPD_KEY_DOT = 52,
    MXCKPD_KEY_LEFTALT = 56,
    MXCKPD_KEY_SPACE = 57,
    MXCKPD_KEY_HOME = 102,
    MXCKPD_KEY_PAGEUP = 104,
    MXCKPD_KEY_PAGEDOWN = 109,
    MXCKPD_KEY_RIGHTMETA = 126,
    MXCKPD_KEY_MENU = 139,
    MXCKPD_KEY_BACK = 158,
    MXCKPD_KEY_F20 = 190,
    MXCKPD_KEY_F21 = 191,
    MXCKPD_KEY_F23 = 193,
    MXCKPD_KEY_L_BACK = 193,      // Alias for F23
    MXCKPD_KEY_L_FORWARD = 104,   // Alias for PageUp
    MXCKPD_KEY_R_BACK = 109,      // Alias for PageDown
    MXCKPD_KEY_R_FORWARD = 191    // Alias for F21
} mxckpd_keys;

// Function to map key codes to characters
char map_key_to_char(int key_code, char *buffer, size_t *buffer_index);

#endif // KEY_MAPPING_H
