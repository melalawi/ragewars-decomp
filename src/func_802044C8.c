#include "basetypes.h"

extern s32 D_8011FE88;
extern s32 D_800CD4C0;
extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);

typedef struct func_802044C8_S1 func_802044C8_S1;
struct func_802044C8_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};

/** Update actor state and clear flags for the relevant actor classes. */
void func_802044C8(void *actor, void *state) {
    s32 flags;

    if (func_80285F28(&D_8011FE88, actor) == 1) {
        func_80214178(actor, state, 1);
        switch (((func_802044C8_S1 *)(actor))->unkE4) {
        case 0x64C:
            flags = ((func_802044C8_S1 *)(actor))->unk100 & ~0x2000;
            ((func_802044C8_S1 *)(actor))->unk100 = flags & ~0x100;
            break;
        case 0x64B:
        case 0x64E:
            ((func_802044C8_S1 *)(actor))->unk100 &= 0xF7FFFFFF;
            break;
        }
    } else {
        D_800CD4C0 = 1;
        func_80214178(actor, state, 0);
        D_800CD4C0 = 0;
    }
}
