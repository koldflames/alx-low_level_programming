#include <unistd.h>

void _puts(char *s) {
    size_t i = 0;
    while (s[i] != '\0') {
        write(1, &s[i], 1); // Write each character to standard output
        i++;
    }
}

