#include "basetypes.h"

typedef struct { f32 f0, f4, f8, fC; } Acc;

extern Acc D_801468A0;
extern f32 D_800D2988;
extern f32 D_800CA598;
extern f32 D_800CA5A0;

void func_80293C20(void *arg0) {
    f32 t1;
    f32 t2;
    f32 t3;

    if (*(s32 *) ((char *) arg0 + 0x26DD4) == 0) {
        t1 = D_801468A0.f0 + D_800D2988;
        D_801468A0.f0 = t1;
        if (D_800CA598 <= t1) {
            t2 = D_801468A0.f4 + *(f32 *) ((char *) &D_800CA598 + 4);
            D_801468A0.f0 = t1 - D_800CA598;
            D_801468A0.f4 = t2;
            if (D_800CA5A0 <= t2) {
                t3 = D_801468A0.f8 + *(f32 *) ((char *) &D_800CA598 + 4);
                D_801468A0.f4 = t2 - D_800CA5A0;
                D_801468A0.f8 = t3;
                if (D_800CA5A0 <= t3) {
                    D_801468A0.f8 = t3 - D_800CA5A0;
                    D_801468A0.fC = D_801468A0.fC + *(f32 *) ((char *) &D_800CA598 + 4);
                }
            }
        }
    }
}
