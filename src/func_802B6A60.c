#include "basetypes.h"

extern f32 D_800CC71C;

void func_802B6A60(void *arg0) {
    s32 i;
    s32 off;
    s32 c40, c7f, c5, cc8;
    f32 val;

    i = 0;
    if (*(u8 *) ((char *) arg0 + 0x34) != 0) {
        c40 = 0x40;
        c7f = 0x7F;
        c5 = 5;
        cc8 = 0xC8;
        val = D_800CC71C;
        do {
            off = i << 4;
            *(s32 *) (off + *(s32 *) ((char *) arg0 + 0x60)) = 0;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0x6] = 0;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0xA] = 0;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0x7] = (u8) c40;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0x9] = (u8) c7f;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0x8] = (u8) c5;
            ((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0xB] = 0;
            *(u16 *) &((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0x4] = (u16) cc8;
            *(f32 *) &((u8 *) (*(void **) ((char *) arg0 + 0x60)))[off + 0xC] = val;
            i += 1;
        } while (i < (s32) *(u8 *) ((char *) arg0 + 0x34));
    }
}
