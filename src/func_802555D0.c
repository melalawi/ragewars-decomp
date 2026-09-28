#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#define NULL ((void *)0)

#include "basetypes.h"

s32 func_802555D0(s8 *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0_3;
    u32 temp_a2_2;
    u32 temp_a2_4;
    u32 temp_v1_2;
    u32 var_v0;
    void *temp_a0;
    void *temp_a2_3;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;
    void *var_a3;

    temp_a2 = (arg2 + 0x2F) & ~0xF;
    temp_v1 = M2C_FIELD(arg0, void **, 8);
    if (temp_v1 != NULL) {
        var_a3 = temp_v1;
        while (M2C_FIELD(var_a3, u32 *, 4) != 0) {
            temp_v1_2 = M2C_FIELD(var_a3, u32 *, 4);
            if (temp_v1_2 >= (u32) arg1) {
                break;
            }
            var_a3 = (void *) temp_v1_2;
        }
        temp_v0 = var_a3 + M2C_FIELD(var_a3, s32 *, 0x10);
        temp_t1 = temp_v0 + M2C_FIELD(var_a3, s32 *, 0x14);
        temp_v1_3 = arg1 - 0x20;
        temp_t0 = temp_v1_3 + temp_a2;
        if ((u32) temp_v1_3 >= (u32) temp_v0) {
            if ((u32) temp_t1 >= (u32) temp_t0) {
                s32 temp_v0_2 = temp_t1 - temp_t0;

                M2C_FIELD(temp_v1_3, s32 *, 0x10) = temp_a2;
                M2C_FIELD(temp_v1_3, s32 *, 0x14) = temp_v0_2;
                if (temp_v0_2 != 0) {
                    M2C_FIELD(arg1, void **, -0x20) = var_a3;
                    temp_a2_2 = M2C_FIELD(var_a3, u32 *, 4);
                    M2C_FIELD(temp_v1_3, u32 *, 4) = temp_a2_2;
                    if (M2C_FIELD(var_a3, u32 *, 4) != 0) {
                        *(void **) temp_a2_2 = temp_v1_3;
                    }
                    M2C_FIELD(var_a3, u32 *, 4) = (u32) temp_v1_3;
                    if (M2C_FIELD(arg0, void **, 0xC) == var_a3) {
                        M2C_FIELD(arg0, void **, 0xC) = temp_v1_3;
                    }
                } else {
                    M2C_FIELD(arg1, void **, -0x20) = NULL;
                    M2C_FIELD(temp_v1_3, u32 *, 4) = 0U;
                }
                temp_v0_3 = temp_v1_3 - (var_a3 + M2C_FIELD(var_a3, s32 *, 0x10));
                M2C_FIELD(var_a3, s32 *, 0x14) = temp_v0_3;
                if (temp_v0_3 == 0) {
                    temp_a2_3 = M2C_FIELD(var_a3, void **, 0);
                    if (temp_a2_3 != NULL) {
                        M2C_FIELD(temp_a2_3, u32 *, 4) = M2C_FIELD(var_a3, u32 *, 4);
                    }
                    temp_a2_4 = M2C_FIELD(var_a3, u32 *, 4);
                    if (temp_a2_4 != 0) {
                        *(void **) temp_a2_4 = M2C_FIELD(var_a3, void **, 0);
                    }
                    if (M2C_FIELD(arg0, void **, 8) == var_a3) {
                        M2C_FIELD(arg0, void **, 8) = M2C_FIELD(var_a3, void **, 4);
                    }
                    if (M2C_FIELD(arg0, void **, 0xC) == var_a3) {
                        var_v0 = M2C_FIELD(var_a3, u32 *, 4);
                        if (var_v0 == 0) {
                            var_v0 = (u32) M2C_FIELD(var_a3, void **, 0);
                        }
                        M2C_FIELD(arg0, void **, 0xC) = (void *) var_v0;
                    }
                    M2C_FIELD(var_a3, void **, 0) = NULL;
                    M2C_FIELD(var_a3, u32 *, 4) = 0U;
                }
                M2C_FIELD(temp_v1_3, void **, 8) = var_a3;
                temp_a0 = M2C_FIELD(var_a3, void **, 0xC);
                M2C_FIELD(temp_v1_3, void **, 0xC) = temp_a0;
                if (M2C_FIELD(var_a3, void **, 0xC) != NULL) {
                    M2C_FIELD(temp_a0, void **, 8) = temp_v1_3;
                }
                M2C_FIELD(var_a3, void **, 0xC) = temp_v1_3;
                return (s32) arg1;
            }
        }
    }
    return 0;
}
