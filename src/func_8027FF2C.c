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

void func_8027FF2C(void *arg0) {
    s32 *temp_v1_2;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s3;
    s32 clear_mask;
    s32 remove_offset;
    s32 active_mask;
    s32 flagged_offset;
    s32 head_offset;
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    var_s3 = 0;
    clear_mask = 0xFDFFFEFF;
    remove_offset = 0xFC00;
    active_mask = 0x01000000;
    flagged_offset = 0xFC14;
    var_s2 = arg0;
    do {
        head_offset = 0xFC28;
        var_s1 = *(void **)((char *)var_s2 + head_offset);
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1;
                var_s1 = M2C_FIELD(var_s1, void **, 0x1EC);
                temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x5C);
                if (temp_v1 & 0x100) {
                  if (!(temp_v1 & 0x800)) {
                    func_80279A70(temp_s0);
                    if (M2C_FIELD(temp_s0, u8 *, 0x1D9) != 0) {
                        func_8028414C(temp_s0);
                        func_802A52E4(&D_8013BA80, temp_s0);
                    }
                    temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x138);
                    if (temp_a1 != 0) {
                        func_80268C7C(&D_8013B1A8, temp_a1);
                        M2C_FIELD(temp_s0, volatile s32 *, 0x138) = 0;
                    }
                    temp_v1_2 = M2C_FIELD(temp_s0, s32 **, 0x130);
                    if (temp_v1_2 != 0) {
                        *temp_v1_2 -= 1;
                    }
                    M2C_FIELD(temp_s0, s32 *, 0x5C) = M2C_FIELD(temp_s0, s32 *, 0x5C) & clear_mask;
                    func_80255E78(M2C_FIELD(temp_s0, void **, 0x1E4), (s32)temp_s0);
                    M2C_FIELD(temp_s0, void **, 0x1E4) = 0;
                    func_80255C58((char *)arg0 + remove_offset, (s32)temp_s0);
                    if (M2C_FIELD(temp_s0, s32 *, 0x5C) & active_mask) {
                        func_80255E78((char *)arg0 + flagged_offset, (s32)temp_s0);
                    }
                  }
                }
            } while (var_s1 != 0);
        }
        var_s3 += 1;
        var_s2 = (char *)var_s2 + 0x14;
    } while (var_s3 < 3);
}
