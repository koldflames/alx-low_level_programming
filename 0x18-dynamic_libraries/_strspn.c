#include "string_functions.h"

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found = 1;

    while (*s && found) {
        found = 0;
        for (char *a = accept; *a; a++) {
            if (*s == *a) {
                count++;
                found = 1;
                break;
            }
        }
        if (found) {
            s++;
        }
    }

    return count;
}

