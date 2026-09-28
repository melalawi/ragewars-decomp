#include "basetypes.h"

extern s32 func_80245AFC(void);
extern s32 D_206724;
extern s32 D_20694C;
extern s32 D_800CD840;
extern u8 D_801462E5;

void func_80206604(void *arg0, void *arg1) {
    s32 flags;
    s32 flags2;

    *(s32 **) ((char *) arg1 + 0x2C) = &D_800CD840;
    *(s32 **) ((char *) arg1 + 0x108) = &D_206724;
    flags = *(s32 *) ((char *) arg0 + 0x100);
    flags |= 0x01000000;
    flags |= 0x02000000;
    flags2 = flags | 0x20000;
    *(s32 *) ((char *) arg0 + 0x100) = flags2;
    if (D_801462E5 == 0) {
        *(s32 *) ((char *) arg0 + 0x100) = flags2 | 0x10000000;
    }
    if ((*(u16 *) ((char *) arg0 + 0xE4) == 0x453) && (func_80245AFC() == 0x6F)) {
        *(s32 **) ((char *) arg1 + 0x10C) = &D_20694C;
    }
}
