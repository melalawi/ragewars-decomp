/* Restarts a round for the player passed in arg1: clears the world timer flag D_800E28C0 via
   func_80409814, then reallocates a fresh scoreboard entry via func_804426E4 using arg1's fields
   at 0x1C and 0x20 against the D_44F100 list, and always reports success. Sibling of
   func_8043E5F4, which also fires func_8025E234(-1) and uses the D_44F0B8 list instead. */
#include "basetypes.h"

extern s32 D_8014561C;
extern s32 D_44F100;

void func_80409814(void);
void *func_804426E4(void *owner, void *list, s32 b, s32 c, s32 d);

typedef struct {
    char pad0[0x1C];
    s32 unk1C;
    char pad1[0x20 - 0x1C - 4];
    s32 unk20;
} Arg1Struct;

s32 func_8043EB78(void *arg0, Arg1Struct *arg1) {
    func_80409814();
    func_804426E4(&D_8014561C, &D_44F100, arg1->unk1C, arg1->unk20, 0);
    return 1;
}
