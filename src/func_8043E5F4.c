/* Restarts a round for the player passed in arg1: clears the world timer flag D_800E28C0 via
   func_80409814, cancels the active countdown sound through func_8025E234, then reallocates a
   fresh scoreboard entry via func_804426E4 using arg1's fields at 0x1C and 0x20, and always
   reports success. */
#include "basetypes.h"

extern s32 D_8014561C;
extern s32 D_44F0B8;

void func_80409814(void);
s32 func_8025E234(s32 arg0);
void *func_804426E4(void *owner, void *list, s32 b, s32 c, s32 d);

typedef struct {
    char pad0[0x1C];
    s32 unk1C;
    char pad1[0x20 - 0x1C - 4];
    s32 unk20;
} Arg1Struct;

s32 func_8043E5F4(void *arg0, Arg1Struct *arg1) {
    s32 val1C;

    val1C = arg1->unk1C;
    func_80409814();
    func_8025E234(-1);
    func_804426E4(&D_8014561C, &D_44F0B8, val1C, arg1->unk20, 0);
    return 1;
}
