#include "basetypes.h"

/* Stores arg0 into its own D_80146417 entry and pushes the five settings of slot arg0 of the D_80102C89 table into the objects D_800E5690 holds through func_8041AD90 and func_8041A76C. */
struct State {
    char pad0[8];
    void *c;
    void *d;
    void *b;
    void *a;
    void *e;
};

extern struct State *D_800E5690;
extern s8 D_80102C89[];
extern u8 D_80102C8A[];
extern u8 D_80102C8B[];
extern u8 D_80102C8C[];
extern u8 D_80102C8D[];
extern u8 D_80146417[];
extern void func_8041AD90(void *, s32);
extern void func_8041A76C(void *, s32);

void func_80436898(s32 arg0) {
    u8 *slot = &D_80146417[arg0 * 0x96];

    *slot = arg0;
    func_8041AD90(D_800E5690->a, D_80102C89[arg0 * 0x190]);
    func_8041AD90(D_800E5690->b, D_80102C8A[arg0 * 0x190]);
    func_8041A76C(D_800E5690->c, D_80102C8B[arg0 * 0x190]);
    func_8041A76C(D_800E5690->d, D_80102C8C[arg0 * 0x190]);
    func_8041AD90(D_800E5690->e, D_80102C8D[arg0 * 0x190]);
}
