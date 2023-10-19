#include "string_functions.h"

char *_memset(char *s, char b, unsigned int n) {
    char *original_s = s;
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    return original_s;
}

