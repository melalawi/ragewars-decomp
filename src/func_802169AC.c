#include "basetypes.h"

extern s32 D_8013B290;

typedef struct func_802169AC_S1 func_802169AC_S1;
typedef struct func_802169AC_S2 func_802169AC_S2;
typedef struct func_802169AC_S3 func_802169AC_S3;
typedef struct func_802169AC_S4 func_802169AC_S4;
struct func_802169AC_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x68 - 0x4 - sizeof(s32)];
    void* unk68;
    char pad68[0x94 - 0x68 - sizeof(void*)];
    s8 unk94;
};
struct func_802169AC_S2 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_802169AC_S3 {
    char pad0[0x788];
    s32 unk788;
    char pad788[0x794 - 0x788 - sizeof(s32)];
    void* unk794;
};
struct func_802169AC_S4 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x2E0 - 0xE4 - sizeof(u16)];
    s32 unk2E0;
};

s32 func_802169AC(void *arg0, void *arg1, void *arg2) {
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
