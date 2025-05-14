#include "key_mapping.h"
#include <stdio.h>

char map_key_to_char(int key_code, char *buffer, size_t *buffer_index) {
    char c = '\0';
    switch (key_code) {
        case MXCKPD_KEY_A: c = 'a'; break;
        case MXCKPD_KEY_B: c = 'b'; break;
        case MXCKPD_KEY_C: c = 'c'; break;
        case MXCKPD_KEY_D: c = 'd'; break;
        case MXCKPD_KEY_E: c = 'e'; break;
        case MXCKPD_KEY_F: c = 'f'; break;
        case MXCKPD_KEY_G: c = 'g'; break;
        case MXCKPD_KEY_H: c = 'h'; break;
        case MXCKPD_KEY_I: c = 'i'; break;
        case MXCKPD_KEY_J: c = 'j'; break;
        case MXCKPD_KEY_K: c = 'k'; break;
        case MXCKPD_KEY_L: c = 'l'; break;
        case MXCKPD_KEY_M: c = 'm'; break;
        case MXCKPD_KEY_N: c = 'n'; break;
        case MXCKPD_KEY_O: c = 'o'; break;
        case MXCKPD_KEY_P: c = 'p'; break;
        case MXCKPD_KEY_Q: c = 'q'; break;
        case MXCKPD_KEY_R: c = 'r'; break;
        case MXCKPD_KEY_S: c = 's'; break;
        case MXCKPD_KEY_T: c = 't'; break;
        case MXCKPD_KEY_U: c = 'u'; break;
        case MXCKPD_KEY_V: c = 'v'; break;
        case MXCKPD_KEY_W: c = 'w'; break;
        case MXCKPD_KEY_X: c = 'x'; break;
        case MXCKPD_KEY_Y: c = 'y'; break;
        case MXCKPD_KEY_Z: c = 'z'; break;
        case MXCKPD_KEY_1: c = '1'; break;
        case MXCKPD_KEY_2: c = '2'; break;
        case MXCKPD_KEY_3: c = '3'; break;
        case MXCKPD_KEY_4: c = '4'; break;
        case MXCKPD_KEY_5: c = '5'; break;
        case MXCKPD_KEY_6: c = '6'; break;
        case MXCKPD_KEY_7: c = '7'; break;
        case MXCKPD_KEY_8: c = '8'; break;
        case MXCKPD_KEY_9: c = '9'; break;
        case MXCKPD_KEY_0: c = '0'; break;
        case MXCKPD_KEY_SPACE: c = ' '; break;
        case MXCKPD_KEY_ENTER: c = '\n'; break;
        case MXCKPD_KEY_BACKSPACE:
            if (*buffer_index > 0) {
                buffer[--(*buffer_index)] = '\0'; // Handle backspace
            }
            break;
        default:
            break;
    }
    return c;
}
