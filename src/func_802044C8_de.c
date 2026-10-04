#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_8011BDC8;
extern s32 D_800C8270_de;
extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);




/** Update actor state and clear flags for the relevant actor classes. */
void func_802044C8_de(void *actor, void *state) {
    s32 flags;

    if (func_80285F58_de(&D_8011BDC8, actor) == 1) {
        func_80214178_de(actor, state, 1);
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
        D_800C8270_de = 1;
        func_80214178_de(actor, state, 0);
        D_800C8270_de = 0;
    }
}
