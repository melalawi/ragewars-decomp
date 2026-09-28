#include "basetypes.h"

extern char D_800CD8F0;
extern char D_2079B0;
extern char D_207910;
extern char D_800C6C88;

void func_802077F4(void *arg0, void *arg1)
{
    f32 k;
    f32 value;
    f32 scaled;
    char *temp_v1;
    char *temp_v0;

    temp_v1 = *(char **) ((char *) arg0 + 0x18);
    k = *(f32 *) ((char *) &D_800C6C88 + 4);
    *(void **) ((char *) arg1 + 0x2C) = &D_800CD8F0;
    *(void **) ((char *) arg1 + 0x108) = &D_2079B0;
    *(void **) ((char *) arg1 + 0x11C) = &D_207910;
    *(s32 *) ((char *) arg1 + 0x134) = 0;
    *(s32 *) ((char *) arg1 + 0x138) = 0;
    temp_v0 = temp_v1 + 0x14;
    value = *(f32 *) (temp_v0 + 0x40);
    *(s32 *) ((char *) arg1 + 0x124) = 0;
    *(s32 *) ((char *) arg1 + 0x128) = 0;
    *(s32 *) ((char *) arg1 + 0x12C) = 0;
    *(s32 *) ((char *) arg1 + 0x130) = 0;
    *(f32 *) ((char *) arg1 + 0x64) = value;
    scaled = *(f32 *) (temp_v0 + 0x40);
    *(s32 *) ((char *) arg1 + 0x140) = 0;
    *(s32 *) ((char *) arg1 + 0x144) = 0;
    scaled = scaled * k;
    *(s32 *) ((char *) arg1 + 0x148) = 0;
    *(s32 *) ((char *) arg1 + 0x14C) = 0;
    *(s32 *) ((char *) arg1 + 0x168) = 0;
    *(s32 *) ((char *) arg1 + 0x16C) = 0;
    *(f32 *) ((char *) arg1 + 0x13C) = scaled;
    if (*(s32 *) (temp_v1 + 0x14) & 4) {
        *(s32 *) ((char *) arg0 + 0x100) = *(s32 *) ((char *) arg0 + 0x100) & ~0x2000;
    }
}
