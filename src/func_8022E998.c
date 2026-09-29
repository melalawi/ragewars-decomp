#include "basetypes.h"

extern u8 D_801462E5;
extern void *D_800D052C[];

typedef struct func_8022E998_S1 func_8022E998_S1;
typedef struct func_8022E998_S2 func_8022E998_S2;
typedef struct func_8022E998_S3 func_8022E998_S3;
typedef union func_8022E998_S2_UC { s16 v0; u16 v1; } func_8022E998_S2_UC;
struct func_8022E998_S1 {
    char pad0[0x6AC];
    s32 unk6AC;
    char pad6AC[0x6B0 - 0x6AC - sizeof(s32)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x938 - 0x770 - sizeof(s16)];
    s32 unk938;
    char pad938[0xCB8 - 0x938 - sizeof(s32)];
    s32 unkCB8;
};
struct func_8022E998_S2 {
    char pad0[0xC];
    func_8022E998_S2_UC unkC;
};
struct func_8022E998_S3 {
    char pad0[0x602];
    s8 unk602;
};

void func_8022E998(void *arg0) {
    u8 *ptr;
    void *temp_v0;
    s16 temp_a1;
    u16 temp_a1u;
    char *p;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (((func_8022E998_S1 *)(arg0))->unkCB8 != 0) {
        if (((func_8022E998_S1 *)(arg0))->unk938 != 0) {
            return;
        }
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E998_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E998_S1 *)(arg0))->unk6B0 & 0x200)) {
        return;
    }
    temp_v0 = D_800D052C[((func_8022E998_S1 *)(arg0))->unk770];
    temp_a1 = ((func_8022E998_S2 *)(temp_v0))->unkC.v0;
    temp_a1u = ((func_8022E998_S2 *)(temp_v0))->unkC.v1;
    if (temp_a1 == -1) {
        return;
    }
    p = (char *)arg0 + (s32)temp_a1 * 2;
    if (((func_8022E998_S3 *)(p))->unk602 != 0) {
        ((func_8022E998_S1 *)(arg0))->unk770 = (s16)temp_a1u;
    }
}
