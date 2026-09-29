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

typedef struct func_80284544_S1 func_80284544_S1;
struct func_80284544_S1 {
    char pad0[0xFC00];
    char unkFC00;
    char padFC00[0xFC14 - 0xFC00 - sizeof(char)];
    char unkFC14;
};

void func_80284544(void *arg0, void *arg1) {
    s32 *temp_v1;
    s32 temp_a1;
    s32 temp_v1_2;

    temp_v1_2 = M2C_FIELD(arg1, s32 *, 0x5C);
    if (temp_v1_2 & 0x100) {
        if (!(temp_v1_2 & 0x800)) {
            func_80279A70(arg1);
            if (M2C_FIELD(arg1, u8 *, 0x1D9) != 0) {
                func_8028414C(arg1);
                func_802A52E4(&D_8013BA80, arg1);
            }
            temp_a1 = M2C_FIELD(arg1, s32 *, 0x138);
            if (temp_a1 != 0) {
                func_80268C7C(&D_8013B1A8, temp_a1);
                M2C_FIELD(arg1, s32 *, 0x138) = 0;
            }
            temp_v1 = M2C_FIELD(arg1, s32 **, 0x130);
            if (temp_v1 != 0) {
                *temp_v1 -= 1;
            }
            M2C_FIELD(arg1, s32 *, 0x5C) =
                M2C_FIELD(arg1, s32 *, 0x5C) & 0xFDFFFEFF;
            func_80255E78(M2C_FIELD(arg1, void **, 0x1E4), (s32)arg1);
            M2C_FIELD(arg1, void **, 0x1E4) = 0;
            func_80255C58(&((func_80284544_S1 *)(arg0))->unkFC00, (s32)arg1);
            if (M2C_FIELD(arg1, s32 *, 0x5C) & 0x01000000) {
                func_80255E78(&((func_80284544_S1 *)(arg0))->unkFC14, (s32)arg1);
            }
        }
    }
}
