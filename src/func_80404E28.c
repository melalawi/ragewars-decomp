#include "basetypes.h"

extern void func_8026451C(s32 a0);
extern void func_80263760(void);
extern u8 D_8010FBB8;
extern u8 D_8010FBE3[];
extern u8 D_80153330[];
extern u8 D_8010FC00[];
extern s32 func_802BD0A8(u8 *a0, u8 *a1, s32 a2);
extern s32 func_80404018(s32 a0);
extern s32 D_801534F0[];
extern void func_8026456C(void);

/* Probes the Controller Pak slot for kind and records its state: 2 when the probe succeeds, otherwise 3 or 1 depending on func_80404018. */
void func_80404E28(s32 kind)
{
    u8 *cur;
    s32 ready;

    func_8026451C(1);
    func_80263760();
    D_8010FBB8 = 2;

    cur = D_80153330 + kind * 112;
    if (D_8010FBE3[kind * 4] != 0) {
        cur[0] = 0;
        ready = 0;
    } else {
        cur[0] = func_802BD0A8(D_8010FC00, cur + 8, kind) == 0;
        ready = cur[0];
    }

    if (ready != 0) {
        D_801534F0[kind] = 2;
    } else if (func_80404018(kind) != 0) {
        D_801534F0[kind] = 3;
    } else {
        D_801534F0[kind] = 1;
    }
    func_8026456C();
}
