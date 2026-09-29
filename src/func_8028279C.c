#include "basetypes.h"

#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

extern char D_8013BA80;
extern char D_8013B1A8;

extern s32 func_8028403C(void *arg0);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80279BB0(void *, s32, s8, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80279A70(void *arg0);
extern void func_8028414C(void *arg0);
extern void func_802A52E4(void *arg0, void *arg1);
extern void func_80268C7C(void *arg0, s32 arg1);
extern void func_80255E78(void *arg0, s32 arg1);
extern s32 func_80255C58(void *arg0, s32 arg1);
extern s32 func_8025DF54(s32 arg0);

typedef struct func_8028279C_S1 func_8028279C_S1;
typedef struct func_8028279C_S2 func_8028279C_S2;
struct func_8028279C_S1 {
    char pad0[0x8];
    Triple unk8;
};
struct func_8028279C_S2 {
    char pad0[0xFC00];
    char unkFC00;
    char padFC00[0xFC14 - 0xFC00 - sizeof(char)];
    char unkFC14;
};

void func_8028279C(void *arg0, s32 arg1) {
    Pair pair;
    s32 *temp_v1_4;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s3;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v1_2;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xFC3C);
    var_s3 = 0;
    if (var_s0 != 0) {
        do {
            temp_s4 = M2C_FIELD(var_s0, void **, 0x1EC);
            if (M2C_FIELD(var_s0, u16 *, 4) == 0x41E) {
                temp_v1 = M2C_FIELD(var_s0, s32 *, 0x5C);
                if ((temp_v1 & 0x100) && (M2C_FIELD(var_s0, s32 *, 0x12C) == arg1)) {
                    temp_s1 = M2C_FIELD(var_s0, void **, 0x118);
                    M2C_FIELD(var_s0, s32 *, 0x5C) = temp_v1 & ~0x100;
                    if (func_8028403C(var_s0) != 0) {
                        var_a0 = 0xC;
                    } else {
                        var_a0 = 0xA;
                    }
                    temp_a1 = var_a0 * 2;
                    temp_v0 = M2C_FIELD(temp_s1, s32 *, 0x18);
                    temp_v1_2 = (char *)temp_v0 + temp_a1;
                    temp_s2 = M2C_FIELD(temp_v1_2, u16 *, 0x70);
                    temp_a2 = M2C_FIELD(temp_v1_2, u16 *, 0x8C);
                    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
                    pair = *(Pair *)temp_v0_2;
                    temp_s3 = M2C_FIELD((char *)M2C_FIELD(temp_s1, s32 *, 0x18) + temp_a1, u16 *, 0xA8);
                    if (temp_a2 != 0xFFFF) {
                        func_80265E30(var_s0, var_s0, temp_a2, -1,
                                     ((func_8028279C_S1 *)(var_s0))->unk8, pair);
                    }
                    if (temp_s2 != 0xFFFF) {
                        func_80279BB0(var_s0, temp_s2, M2C_FIELD(var_s0, s8 *, 0x1D0), 1);
                    }
                    if (temp_s3 != 0xFFFF) {
                        func_8025DE74((s16)temp_s3,
                                      M2C_FIELD(var_s0, s32 *, 8),
                                      M2C_FIELD(var_s0, s32 *, 0xC),
                                      M2C_FIELD(var_s0, s32 *, 0x10), 0, -1);
                    }
                    if ((M2C_FIELD(var_s0, s32 *, 0x5C) |= 0x100) & 0x100) {
                      if (!(M2C_FIELD(var_s0, s32 *, 0x5C) & 0x800)) {
                        func_80279A70(var_s0);
                        if (M2C_FIELD(var_s0, u8 *, 0x1D9) != 0) {
                            func_8028414C(var_s0);
                            func_802A52E4(&D_8013BA80, var_s0);
                        }
                        temp_a1_2 = M2C_FIELD(var_s0, s32 *, 0x138);
                        if (temp_a1_2 != 0) {
                            func_80268C7C(&D_8013B1A8, temp_a1_2);
                            M2C_FIELD(var_s0, s32 *, 0x138) = 0;
                        }
                        temp_v1_4 = M2C_FIELD(var_s0, s32 **, 0x130);
                        if (temp_v1_4 != 0) {
                            *temp_v1_4 -= 1;
                        }
                        M2C_FIELD(var_s0, s32 *, 0x5C) = M2C_FIELD(var_s0, s32 *, 0x5C) & 0xFDFFFEFF;
                        func_80255E78(M2C_FIELD(var_s0, void **, 0x1E4), (s32)var_s0);
                        M2C_FIELD(var_s0, void **, 0x1E4) = 0;
                        func_80255C58(&((func_8028279C_S2 *)(arg0))->unkFC00, (s32)var_s0);
                        if (M2C_FIELD(var_s0, s32 *, 0x5C) & 0x01000000) {
                            func_80255E78(&((func_8028279C_S2 *)(arg0))->unkFC14, (s32)var_s0);
                        }
                      }
                    }
                    var_s3 += 1;
                }
            }
            var_s0 = temp_s4;
        } while (var_s0 != 0);
    }
    if (var_s3 != 0) {
        func_8025DF54(0x91A);
        func_8025DF54(0x91A);
    }
}
