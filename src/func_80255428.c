#include "basetypes.h"

extern s32 D_80105190;
extern s32 D_80105194;

typedef struct func_80255428_S1 func_80255428_S1;
typedef struct func_80255428_S2 func_80255428_S2;
typedef struct func_80255428_S3 func_80255428_S3;
typedef union func_80255428_S1_UC { s32* v0; s32 v1; } func_80255428_S1_UC;
struct func_80255428_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    func_80255428_S1_UC unkC;
};
struct func_80255428_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32* unkC;
};
struct func_80255428_S3 {
    char pad0[0xC];
    s32* unkC;
};

void func_80255428(s32 arg0) {
    s32 key;
    s32 *temp_v0;
    s32 *var_a0;
    s32 *var_a2;
    s32 *var_v1;

    key = arg0;
    var_v1 = (s32 *)(D_80105194 + ((((key << 5) ^ ((u32)key >> 1) ^
                                      ((u32)key >> 9) ^ ((u32)key >> 0x11)) &
                                     D_80105190) * 0x10));
    var_a2 = 0;
    if (*var_v1 != key) {
loop:
        var_a2 = var_v1;
        var_v1 = ((func_80255428_S1 *)(var_v1))->unkC.v0;
        if (var_v1 != 0) {
            if (*var_v1 == key) {
                goto found;
            }
            goto loop;
        }
    } else {
found:
        if (var_v1 != 0) {
            var_a0 = ((func_80255428_S1 *)(var_v1))->unkC.v0;
            if (var_a0 != 0) {
                ((func_80255428_S1 *)(var_v1))->unk4 = ((func_80255428_S2 *)(var_a0))->unk4;
                *var_v1 = *var_a0;
                ((func_80255428_S1 *)(var_v1))->unkC.v0 = ((func_80255428_S2 *)(var_a0))->unkC;
                temp_v0 = var_v1;
                var_v1 = var_a0;
                var_a0 = temp_v0;
            }
            if (var_a2 != 0) {
                ((func_80255428_S3 *)(var_a2))->unkC = var_a0;
            }
            ((func_80255428_S1 *)(var_v1))->unk4 = 0;
            *var_v1 = 0;
            ((func_80255428_S1 *)(var_v1))->unkC.v1 = 0;
        }
    }
}
