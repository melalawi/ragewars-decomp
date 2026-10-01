/* Hides the four child items of a selected menu panel. */
#include "basetypes.h"
typedef struct {char p[0xE0]; s32 unkE0;} State;
void func_8040E958(s32, s32);                            /* extern */
s32 func_8040ECB0(s32, s32);                        /* extern */
extern State *D_800E53C0;

#ifdef VERSION_EU_X
#define ITEM0 0x271
#define ITEM1 0x270
#define ITEM2 0x26F
#define ITEM3 0x26E
#else
#define ITEM0 0x26D
#define ITEM1 0x26C
#define ITEM2 0x26B
#define ITEM3 0x26A
#endif

void func_8042D5F8(s32 arg0) {
    s32 temp_s1;
    s32 var_a1;
    s32 var_s0;

    temp_s1 = func_8040ECB0(D_800E53C0->unkE0, arg0 & 0xFFFF);
    var_s0 = 0;
    do {
        switch(var_s0) {
        case 0: var_a1=ITEM0; break;
        case 1: var_a1=ITEM1; break;
        case 2: var_a1=ITEM2; break;
        case 3: var_a1=ITEM3; break;
        default: var_a1=ITEM0; break;
        }
        func_8040E958(func_8040ECB0(temp_s1, var_a1), 0);
        var_s0 += 1;
    } while (var_s0 < 4);
}
