#include "span_1000/code_802A0888.h"
#include "types.h"

s32 func_802A03AC_de(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (arg2 == 0) {
        return 0;
    }
    arg2 -= 1;
    while (arg2 != 0 && (temp_v1 = *var_a0) != 0 && temp_v1 == *var_a1) {
        arg2 -= 1;
        var_a0 += 1;
        var_a1 += 1;
    }
    return *var_a0 - *var_a1;
}

s32 func_802A03F4_de(u8 *arg0, u8 *arg1)
{
  s32 c2;
  int new_var;
  s32 c1;
  c2 = *arg1;
  arg1 += 1;
  new_var = 0x41;
  if (c2 >= new_var)
  {
    if (c2 < 0x5B)
    {
      c2 += 0x20;
    }
  }
  c1 = *arg0;
  arg0 += 1;
  if (c1 >= new_var)
  {
    if (c1 < 0x5B)
    {
      c1 += 0x20;
    }
  }
  if (c2 != 0)
  {
    if (c2 == c1)
    {
      return func_802A03F4_de(arg0, arg1);
    }
  }
  return c1 - c2;
}

/* Returns a pointer to the last occurrence of a character in a string, or 0 when it does not occur
   (strrchr). */

u8 *func_802A0444_de(u8 *s, int c) {
    u8 *start = s;

    while (*s++ != 0) {
    }
    s--;
    for (; s != start; s--) {
        if (*s == (u8)c) {
            break;
        }
    }
    if (*s == (u8)c) {
        return s;
    }
    return 0;
}

#define NULL ((void *)0)

/** In-place ASCII-uppercase a NUL-terminated string; NULL-safe. */
u8 *func_802A0494_de(u8 *arg0) {
    u8 *var_v1;
    u8 temp_a1;

    var_v1 = arg0;
    if (arg0 == 0) {
        return 0;
    }
    if (*arg0 != 0) {
        do {
            temp_a1 = *var_v1;
            if ((u32)(temp_a1 - 0x61) < 0x1AU) {
                *var_v1 = temp_a1 - 0x20;
            }
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return arg0;
}

#define NULL ((void *)0)

/** In-place ASCII-lowercase a NUL-terminated string; NULL-safe. */
u8 *func_802A04E0_de(u8 *arg0) {
    u8 *var_v1;
    u8 temp_a1;

    var_v1 = arg0;
    if (arg0 == 0) {
        return 0;
    }
    if (*arg0 != 0) {
        do {
            temp_a1 = *var_v1;
            if ((u32)(temp_a1 - 0x41) < 0x1AU) {
                *var_v1 = temp_a1 + 0x20;
            }
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return arg0;
}

/* Searches a zero-terminated byte string for a pattern and returns the position just past the first match, or zero when there is none. */

u8 *func_802A052C_de(u8 *s, u8 *pattern) {
    u8 *p;

    while (*s != 0) {
        while (*s != 0 && *s != *pattern) {
            s++;
        }
        p = pattern;
        while (*p != 0 && *s == *p) {
            p++;
            s++;
        }
        if (*p == 0) {
            return s;
        }
    }
    return 0;
}

/** Convert a lowercase ASCII letter to uppercase. */
int func_802A05A0_de(int arg0) {
    if ((unsigned int)(arg0 - 'a') < 26) {
        arg0 -= 'a' - 'A';
    }
    return arg0;
}

/** Convert an uppercase ASCII letter to lowercase. */
int func_802A05B8_de(int arg0) {
    if ((unsigned int)(arg0 - 'A') < 26) {
        arg0 += 'a' - 'A';
    }
    return arg0;
}

/* Parses a signed decimal integer from a string, skipping leading spaces and one optional sign (atoi). */
s32 func_802A05D0_de(u8 *s) {
    s32 n;
    s32 c;
    u8 sign;

    while (*s == ' ') {
        s++;
    }
    c = *s;
    sign = c;
    s++;
    if (sign == '-' || sign == '+') {
        c = *s;
        s++;
    }
    n = 0;
    while (c >= '0' && c <= '9') {
        n = (c - '0') + n * 10;
        c = *s;
        s++;
    }
    if (sign == '-') {
        return -n;
    }
    return n;
}

/* Formats a signed integer as a NUL-terminated decimal string (K&R itoa with the reverse inlined). */
void func_802A066C_de(s32 n, char *s) {
    s32 i;
    s32 j;
    s32 sign;
    s32 len;
    char c;

    if ((sign = n) < 0) {
        n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    len = i;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    s[len] = '\0';
}
