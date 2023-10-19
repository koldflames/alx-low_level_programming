#include <unistd.h>
#include "string_functions.h"

char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // Fill the remaining with null characters if necessary
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return original_dest;
}

