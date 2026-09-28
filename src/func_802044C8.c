#include "basetypes.h"

extern s32 D_8011FE88;
extern s32 D_800CD4C0;
extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);

/** Update actor state and clear flags for the relevant actor classes. */
void func_802044C8(void *actor, void *state) {
    s32 flags;

    if (func_80285F28(&D_8011FE88, actor) == 1) {
        func_80214178(actor, state, 1);
        switch (*(u16 *)((char *)actor + 0xE4)) {
        case 0x64C:
            flags = *(s32 *)((char *)actor + 0x100) & ~0x2000;
            *(s32 *)((char *)actor + 0x100) = flags & ~0x100;
            break;
        case 0x64B:
        case 0x64E:
            *(s32 *)((char *)actor + 0x100) &= 0xF7FFFFFF;
            break;
        }
    } else {
        D_800CD4C0 = 1;
        func_80214178(actor, state, 0);
        D_800CD4C0 = 0;
    }
}
