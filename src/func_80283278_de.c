#include "span_1000/code_8027ED40.h"
#include "types.h"

#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

extern char D_801379C0;
extern char D_801370E8;

extern void func_80279A00_de(void *arg0);
extern void func_80284178_de(void *);
extern void func_802A42F4_de(void *arg0, void *arg1);
extern void func_80268C7C_de(void *arg0, s32 arg1);
extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);




void func_80283278_de(void *arg0, s32 arg1) {
    s32 *temp_v1_3;
    s32 temp_a1;
    s32 temp_v1_2;
    u16 temp_v1;
    void *temp_s1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xFC50);
    if (var_s0 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_s0, u16 *, 4);
            temp_s1 = M2C_FIELD(var_s0, void **, 0x1EC);
            if (((temp_v1 == 0x414) || (temp_v1 == 0x42D)) &&
                (M2C_FIELD(var_s0, s32 *, 0x12C) == arg1)) {
                temp_v1_2 = M2C_FIELD(var_s0, s32 *, 0x5C);
                if (temp_v1_2 & 0x100) {
                  if (!(temp_v1_2 & 0x800)) {
                    func_80279A00_de(var_s0);
                    if (M2C_FIELD(var_s0, u8 *, 0x1D9) != 0) {
                        func_80284178_de(var_s0);
                        func_802A42F4_de(&D_801379C0, var_s0);
                    }
                    temp_a1 = M2C_FIELD(var_s0, s32 *, 0x138);
                    if (temp_a1 != 0) {
                        func_80268C7C_de(&D_801370E8, temp_a1);
                        M2C_FIELD(var_s0, s32 *, 0x138) = 0;
                    }
                    temp_v1_3 = M2C_FIELD(var_s0, s32 **, 0x130);
                    if (temp_v1_3 != 0) {
                        *temp_v1_3 -= 1;
                    }
                    M2C_FIELD(var_s0, s32 *, 0x5C) =
                        M2C_FIELD(var_s0, s32 *, 0x5C) & 0xFDFFFEFF;
                    func_80255ED8_de(M2C_FIELD(var_s0, void **, 0x1E4), (s32)var_s0);
                    M2C_FIELD(var_s0, void **, 0x1E4) = 0;
                    func_80255CB8_de(&((func_8028324C_S1 *)(arg0))->unkFC00, (s32)var_s0);
                    if (M2C_FIELD(var_s0, s32 *, 0x5C) & 0x01000000) {
                        func_80255ED8_de(&((func_8028324C_S1 *)(arg0))->unkFC14, (s32)var_s0);
                    }
                  }
                }
            }
            var_s0 = temp_s1;
        } while (var_s0 != 0);
    }
}
