#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

extern s32 D_8011064C;
extern s32 D_80110624;
extern s32 D_80110640;
extern s32 D_801153D0;
extern s32 D_801153D8[];
extern char D_801157D8;
extern void *func_8028FD94(void *, s32);
extern void func_8026BC60(void);
extern void func_80253610(s32, s32);

void func_8026DC24(void **a, s32 b, s32 c, void *d, s32 e, s32 f) {
    s32 temp_v1;
    s32 temp_v0;
    s32 var_s0;
    char *temp_v1_2;
    void *temp_a0;
    s32 *countp;
    s32 count;
    s32 *queue_countp;

    temp_a0 = *a;
    var_s0 = e;
    if (var_s0 == 0) {
        var_s0 = (s32)func_8028FD94(temp_a0, 0);
    }
    if ((D_8011064C != (s32)a) || (D_80110624 != f) || (D_80110640 == 0x20)) {
        func_8026BC60();
        if (D_801153D0 != 0x100) {
            func_80253610(0, (s32)a);
            countp = &D_801153D0;
            count = *countp;
            D_801153D8[count] = (s32)a;
            *countp = count + 1;
            goto block_7;
        }
    } else {
block_7:
        D_8011064C = (s32)a;
        D_80110624 = f;
        queue_countp = &D_80110640;
        temp_v0 = *queue_countp;
        temp_v1 = temp_v0 * 0x10;
        temp_v0 += 1;
        *queue_countp = temp_v0;
        temp_v1_2 = temp_v1 + &D_801157D8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = b;
        M2C_FIELD(temp_v1_2, s32 *, 0xC) = c;
        M2C_FIELD(temp_v1_2, void **, 4) = d;
        M2C_FIELD(temp_v1_2, s32 *, 8) = var_s0;
    }
}
