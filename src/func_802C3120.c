#include "basetypes.h"

typedef struct {
    s64 quot;
    s64 rem;
} LldivResult;

extern s64 __divdi3(s64, s64) __attribute__((const));
extern s64 __moddi3(s64, s64) __attribute__((const));

void func_802C3120(LldivResult *result, s64 numerator, s64 denominator) {
    result->quot = __divdi3(numerator, denominator);
    result->rem = __moddi3(numerator, denominator);
}
