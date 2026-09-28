#include "basetypes.h"

typedef struct {
    s32 count;
    s32 flag;
} Timer80295970;

extern s32 D_800D2AF0;
extern Timer80295970 D_8014AEC0;

void func_80295970(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AF0;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.count;
        D_8014AEC0.flag = 1;
        D_800D2AF0 = 0;
        D_8014AEC0.count = count + 1;
    }
}
