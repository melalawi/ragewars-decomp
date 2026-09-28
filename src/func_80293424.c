/* Compares two byte strings lexicographically, returning -1 for either null pointer. */
#include "basetypes.h"
int func_80293424(u8 *a, u8 *b) {
 if (!a || !b) return -1;
 while (*a && *b) {
  if (*a < *b) return -1;
  if (*a > *b) return 1;
  a++; b++;
 }
 if (*a) return 1;
 if (*b) return -1;
 return 0;
}