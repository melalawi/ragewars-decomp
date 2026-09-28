#include "basetypes.h"

extern void func_8026DC24(void * *, s32, s32, void *, s32, s32);
extern s32 D_800D297C;

void func_80205628(void *arg0, void *arg1, void *arg2) {
    *(s32 *) ((char *) arg0 + 0x17C) = 1 << *(s32 *) ((char *) arg1 + 0x124);
    if (*(s32 *) arg2 != 0) {
        func_8026DC24(*(s32 *) ((char *) arg2 + 0xC), *(s32 *) ((char *) arg0 + 0xB4), 1,
                      (char *) arg0 + (D_800D297C * 0x18 + 0x140), 0, *(s32 *) ((char *) arg1 + 0x128));
    }
}
