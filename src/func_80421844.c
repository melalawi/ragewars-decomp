/* Advances the animation frame countdown and wraps exhausted frames. */
#include "basetypes.h"

#if defined(VERSION_DE)
#define VV_03B8 0x3B2
#elif defined(VERSION_EU_X)
#define VV_03B8 0x3BC
#else
#define VV_03B8 0x3B8
#endif

#define NULL ((void *)0)
typedef struct { char a[0x16]; s16 unk16; char b[2]; s16 unk1A; } Frame; typedef struct { char a[8]; s32 unk8; char b[0x14]; Frame *unk20; char c[8]; s32 unk2C; } State;
Frame *func_8040ECB0(s32, s32);                        /* extern */
void func_804215D8(void *, void *);                    /* extern */
extern State *D_800E4400;

void func_80421844(void) {
    s32 temp_v0;
    Frame *temp_a0;
    Frame *temp_a0_2;
    Frame *temp_v0_2;

    temp_v0 = D_800E4400->unk2C - 1;
    D_800E4400->unk2C = temp_v0;
    if (temp_v0 <= 0) {
        temp_v0_2 = func_8040ECB0(D_800E4400->unk8, VV_03B8);
        temp_a0 = D_800E4400->unk20;
        temp_a0->unk16 = (u16) (temp_a0->unk16 - 1);
        temp_a0_2 = D_800E4400->unk20;
        if (((s16) temp_a0_2->unk16 + temp_v0_2->unk1A) < 0) {
            temp_a0_2->unk16 = 2U;
            func_804215D8(temp_a0_2, D_800E4400);
        }
        D_800E4400->unk2C = 1;
    }
}
