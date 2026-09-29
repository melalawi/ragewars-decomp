/* Finds or allocates one of four records and updates its parameters. */
#include "basetypes.h"
typedef struct func_802A7FA8_S1 func_802A7FA8_S1;
typedef struct func_802A7FA8_S2 func_802A7FA8_S2;
typedef struct func_802A7FA8_S3 func_802A7FA8_S3;
typedef struct func_802A7FA8_S4 func_802A7FA8_S4;
struct func_802A7FA8_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x10 - 0x4 - sizeof(s32)];
    u8 unk10;
};
struct func_802A7FA8_S2 {
    char pad0[0x4];
    s32 unk4;
};
struct func_802A7FA8_S3 {
    char pad0[0xE4];
    s16 unkE4;
};
struct func_802A7FA8_S4 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    u8 unkC;
    char padC[0xD - 0xC - sizeof(u8)];
    u8 unkD;
    char padD[0x10 - 0xD - sizeof(u8)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x28 - 0x14 - sizeof(s32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
};

s32 func_802A7FA8(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 var_a1;
    u32 key;
    char *temp_v1;
    char *var_v1;
    char *var_v1_2;

    var_a1 = 0;
    key = arg2 & 0xFFFF;
    var_v1 = arg0;
loop_1:
    if ((((func_802A7FA8_S1 *)(var_v1))->unk4 == 0) || (((func_802A7FA8_S1 *)(var_v1))->unk10 != key)) {
        var_a1 += 1;
        var_v1 += 0x38;
        if (var_a1 >= 4) {

        } else {
            goto loop_1;
        }
    }
    if (var_a1 == 4) {
        var_a1 = 0;
        var_v1_2 = arg0;
loop_7:
        if (((func_802A7FA8_S2 *)(var_v1_2))->unk4 != 0) {
            var_a1 += 1;
            var_v1_2 += 0x38;
            if (var_a1 >= 4) {

            } else {
                goto loop_7;
            }
        }
        if (var_a1 == 4) {
            return 0;
        }
    }
    temp_v1 = arg0 + ((var_a1 * 0x38) + 4);
    ((func_802A7FA8_S3 *)(arg0))->unkE4 = var_a1;
    ((func_802A7FA8_S4 *)(temp_v1))->unk0 = 1;
    ((func_802A7FA8_S4 *)(temp_v1))->unk8 = arg1;
    ((func_802A7FA8_S4 *)(temp_v1))->unkC = arg2;
    ((func_802A7FA8_S4 *)(temp_v1))->unk10 = arg3;
    ((func_802A7FA8_S4 *)(temp_v1))->unk14 = arg4;
    ((func_802A7FA8_S4 *)(temp_v1))->unk28 = arg5;
    ((func_802A7FA8_S4 *)(temp_v1))->unk2C = arg6;
    ((func_802A7FA8_S4 *)(temp_v1))->unk30 = arg7;
    ((func_802A7FA8_S4 *)(temp_v1))->unkD = (u8) (((func_802A7FA8_S4 *)(temp_v1))->unkD + 1);
    ((func_802A7FA8_S4 *)(temp_v1))->unk34 = arg8;
    return 1;
}
