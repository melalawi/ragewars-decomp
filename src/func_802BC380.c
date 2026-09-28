#include "basetypes.h"

/* Returns the single-precision square root of its argument (sqrtf). Matches only with the
   per-object options -ffast-math, which drops GCC's errno fallback call so the builtin compiles
   to sqrt.s, and -fno-delayed-branch, which keeps sqrt.s ahead of the return. */
f32 func_802BC380(f32 value) {
    return __builtin_sqrtf(value);
}
