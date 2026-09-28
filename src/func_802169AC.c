#include "basetypes.h"

extern s32 D_8013B290;

s32 func_802169AC(void *arg0, void *arg1, void *arg2) {
    void *temp_a2;

    if (*(s32 *)((char *)arg1 + 4) == 0) {
        return 6;
    }
    if (arg2 == 0) {
        if (*(s8 *)((char *)arg1 + 0x94) != 0) {
            return 4;
        }
        return 3;
    }
    if (arg2 == *(void **)((char *)arg1 + 0x68)) {
        return 2;
    }
    if (**(s32 **)((char *)arg2 + 0x18) == 5) {
        return 5;
    }
    if (*(u16 *)((char *)arg2 + 0xE4) == 0x64F) {
        return 7;
    }
    if (D_8013B290 == 0) {
        if (*(s32 *)((char *)arg2 + 0x100) & 0x300000) {
            temp_a2 = *(void **)((char *)arg2 + 0x1D8);
            if ((*(void **)((char *)temp_a2 + 0x794) == arg0) &&
                (*(s32 *)((char *)temp_a2 + 0x788) == 2)) {
                return 1;
            }
        }
        if (*(s32 *)((char *)arg0 + 0x2E0) & 2) {
            if (*(u16 *)((char *)arg0 + 0xE4) != 0xCA) {
                return 1;
            }
        }
    }
    return 0;
}
