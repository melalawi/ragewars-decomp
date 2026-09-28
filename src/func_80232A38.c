#include "basetypes.h"

extern void func_8022FD9C(void *arg0, void *arg1);
extern char D_22FC10;
extern char D_23292C;
extern f32 D_800C8108;
extern char D_800CF298;

void func_80232A38(void *arg0, void *arg1) {
    f32 k = D_800C8108;

    *(char **) ((char *) arg1 + 0x2C) = &D_800CF298;
    *(char **) ((char *) arg1 + 0x108) = &D_22FC10;
    *(char **) ((char *) arg1 + 0x10C) = &D_23292C;
    *(s32 *) ((char *) arg1 + 0x124) = 0;
    *(s32 *) ((char *) arg1 + 0x128) = 0;
    *(s32 *) ((char *) arg1 + 0x130) = 0;
    *(s32 *) ((char *) arg1 + 0x138) = 0;
    *(s32 *) ((char *) arg1 + 0x13C) = 1;
    *(f32 *) ((char *) arg1 + 0x12C) = k;
    *(s8 *) ((char *) arg0 + 1) = 0;
    *(s32 *) ((char *) arg1 + 0x148) = 0;
    *(s32 *) ((char *) arg1 + 0x144) = 1;
    *(s32 *) ((char *) arg1 + 0x14C) = 0;
    *(s32 *) ((char *) arg1 + 0x150) = 0;
    func_8022FD9C(arg0, arg1);
}
