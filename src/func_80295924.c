#include "basetypes.h"

typedef struct {
    s32 count;
    s32 flag;
} Timer80295924;

extern s32 D_800D2AEC;
extern Timer80295924 D_8014AEC0;

void func_80295924(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AEC;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.count;
        D_8014AEC0.flag = 1;
        D_800D2AEC = 0;
        D_8014AEC0.count = count - 1;
    }
}
