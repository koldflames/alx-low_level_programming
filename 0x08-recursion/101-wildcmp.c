#include "main.h"

int wildcmp(char *s1, char *s2) {
// if both strings are empty, they are identical
if (*s1 == '\0' && *s2 == '\0') {
return 1;
}
// if s2 is empty and s1 is not, they are not identical
if (*s2 == '\0') {
return 0;
}
// if the characters match or s2 has a wildcard, continue comparing
if (*s1 == *s2 || *s2 == '*') {
// if s2 has a wildcard, try to match the remaining characters
if (*s2 == '*') {
// if s1 is empty, only match the remaining characters of s2
if (*s1 == '\0') {
return wildcmp(s1, s2 + 1);
}
// try matching the remaining characters of s1 with the wildcard
return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
}
// if the characters match, continue comparing the next characters
return wildcmp(s1 + 1, s2 + 1);
}
// the characters don't match and s2 doesn't have a wildcard, so they are not identical
return 0;
}
