#include "basetypes.h"

typedef struct WeightSource {
    char pad[0x2C];
    f32 first;
    f32 second;
    f32 third;
} WeightSource;

extern s32 func_80274544(void);

s32 func_8020DD04(WeightSource *arg0) {
    s32 first;
    s32 second;
    s32 third;
    s32 first_end;
    s32 second_end;
    s32 total;
    s32 value;

    first = (s32)arg0->first;
    second = (s32)arg0->second;
    third = (s32)arg0->third;
    first_end = 0;
    if (first > 0) {
        first_end = first;
    }
    second_end = 0;
    if (second > 0) {
        second_end = first_end + second;
    }
    total = first + second + third;
    if (total == 0) {
        return 3;
    }
    value = (func_80274544() % total) + 1;
    if (first_end < value) {
        if (second_end >= value) {
            return 4;
        }
        return 3;
    }
    return 5;
}
