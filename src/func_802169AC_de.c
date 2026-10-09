#include "span_1000/code_80213ED4.h"
#include "types.h"

extern s32 D_8013B290;










s32 func_802169AC_de(void *arg0, void *arg1, void *arg2) {
    void *temp_a2;

    if (((func_802169AC_S1 *)(arg1))->unk4 == 0) {
        return 6;
    }
    if (arg2 == 0) {
        if (((func_802169AC_S1 *)(arg1))->unk94 != 0) {
            return 4;
        }
        return 3;
    }
    if (arg2 == ((func_802169AC_S1 *)(arg1))->unk68) {
        return 2;
    }
    if (*((func_802169AC_S2 *)(arg2))->unk18 == 5) {
        return 5;
    }
    if (((func_802169AC_S2 *)(arg2))->unkE4 == 0x64F) {
        return 7;
    }
    if (D_8013B290 == 0) {
        if (((func_802169AC_S2 *)(arg2))->unk100 & 0x300000) {
            temp_a2 = ((func_802169AC_S2 *)(arg2))->unk1D8;
            if ((((func_802169AC_S3 *)(temp_a2))->unk794 == arg0) &&
                (((func_802169AC_S3 *)(temp_a2))->unk788 == 2)) {
                return 1;
            }
        }
        if (((func_802169AC_S4 *)(arg0))->unk2E0 & 2) {
            if (((func_802169AC_S4 *)(arg0))->unkE4 != 0xCA) {
                return 1;
            }
        }
    }
    return 0;
}
