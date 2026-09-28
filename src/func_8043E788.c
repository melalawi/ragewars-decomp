/* Clears arg1->unk1C's unk858 flag and its unk5D8's unk80, then forwards to func_804426E4. */
#include "basetypes.h"

extern void func_804426E4(s32 arg0, void *arg1, void *arg2, s32 arg3, s32 arg4);
extern s32 D_450758;

typedef struct {
    char pad80[0x80];
    s8 unk80;
} Sub5D8;

typedef struct {
    char pad0[0x5D4];
    s32 unk5D4;
    Sub5D8 *unk5D8;
    s32 unk5DC;
    char pad5E0[0x698 - 0x5E0];
    s32 unk698;
    char pad69C[0x858 - 0x69C];
    s32 unk858;
} Obj1C;

typedef struct {
    char pad0[0x1C];
    Obj1C *unk1C;
} Handle8043E788;

s32 func_8043E788(void *arg0, Handle8043E788 *arg1) {
    Obj1C *temp_a2;

    temp_a2 = arg1->unk1C;
    temp_a2->unk858 = 0;
    temp_a2->unk5D8->unk80 = 0;
    func_804426E4(temp_a2->unk5DC + 0x554, &D_450758, temp_a2, temp_a2->unk698, temp_a2->unk5D4);
    return 1;
}
