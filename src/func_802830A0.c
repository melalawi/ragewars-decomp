#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

extern char D_8013BA80;
extern char D_8013B1A8;

extern void func_80279A70(void *arg0);
extern void func_8028414C(void *);
extern void func_802A52E4(void *arg0, void *arg1);
extern void func_80268C7C(void *arg0, s32 arg1);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void func_802830A0(void *arg0, s32 arg1) {
    s32 *temp_v1_3;
    s32 temp_a1;
    s32 temp_v1_2;
    u16 temp_v1;
    void *temp_s1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xFC3C);
    if (var_s0 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_s0, u16 *, 4);
            temp_s1 = M2C_FIELD(var_s0, void **, 0x1EC);
            if ((temp_v1 == 0x41E) || (temp_v1 == 0x3EF)) {
                temp_v1_2 = M2C_FIELD(var_s0, s32 *, 0x5C);
                if ((temp_v1_2 & 0x100) && (M2C_FIELD(var_s0, s32 *, 0x12C) == arg1) && !(temp_v1_2 & 0x800)) {
                    func_80279A70(var_s0);
                    if (M2C_FIELD(var_s0, u8 *, 0x1D9) != 0) {
                        func_8028414C(var_s0);
                        func_802A52E4(&D_8013BA80, var_s0);
                    }
                    temp_a1 = M2C_FIELD(var_s0, s32 *, 0x138);
                    if (temp_a1 != 0) {
                        func_80268C7C(&D_8013B1A8, temp_a1);
                        M2C_FIELD(var_s0, volatile s32 *, 0x138) = 0;
                    }
                    temp_v1_3 = M2C_FIELD(var_s0, s32 **, 0x130);
                    if (temp_v1_3 != 0) {
                        *temp_v1_3 -= 1;
                    }
                    M2C_FIELD(var_s0, s32 *, 0x5C) = M2C_FIELD(var_s0, s32 *, 0x5C) & 0xFDFFFEFF;
                    func_80255E78(M2C_FIELD(var_s0, void **, 0x1E4), (s32)var_s0);
                    M2C_FIELD(var_s0, void **, 0x1E4) = 0;
                    func_80255C58((char *)arg0 + 0xFC00, (s32)var_s0);
                    if (M2C_FIELD(var_s0, s32 *, 0x5C) & 0x01000000) {
                        func_80255E78((char *)arg0 + 0xFC14, (s32)var_s0);
                    }
                }
            }
            var_s0 = temp_s1;
        } while (var_s0 != 0);
    }
}
