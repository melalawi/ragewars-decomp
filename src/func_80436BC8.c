#include "basetypes.h"

/* Reads five settings from the objects D_800E5694 holds through func_8041AD84 and func_8041A760 into slot arg0 of the D_80102C89 table and copies them into the matching bytes of the arg0 entry of D_80146398. Adapted from func_80436988 with D_800E5690 changed to D_800E5694 and the object fields moved down by eight bytes. */
struct State {
    void *c;
    void *d;
    void *b;
    void *a;
    void *e;
};

extern struct State *D_800E5694;
extern s8 D_80102C89[];
extern u8 D_80102C8A[];
extern u8 D_80102C8B[];
extern u8 D_80102C8C[];
extern u8 D_80102C8D[];
extern u8 D_80146398[];
extern s32 func_8041AD84(void *);
extern s32 func_8041A760(void *);

void func_80436BC8(s32 arg0) {
    u8 *config;

    config = D_80146398 + arg0 * 0x96;
    D_80102C89[arg0 * 0x190] = func_8041AD84(D_800E5694->a);
    do {
        D_80102C8A[arg0 * 0x190] = func_8041AD84(D_800E5694->b);
        D_80102C8B[arg0 * 0x190] = func_8041A760(D_800E5694->c);
        D_80102C8C[arg0 * 0x190] = func_8041A760(D_800E5694->d);
        D_80102C8D[arg0 * 0x190] = func_8041AD84(D_800E5694->e);
    } while (0);
    config[0x7B] = D_80102C89[arg0 * 0x190];
    config[0x7D] = D_80102C8A[arg0 * 0x190];
    config[0x79] = D_80102C8B[arg0 * 0x190];
    config[0x7A] = D_80102C8C[arg0 * 0x190];
    config[0x82] = D_80102C8D[arg0 * 0x190];
}
