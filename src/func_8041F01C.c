/* Cycles a menu selection and updates the associated character setting. */
#include "basetypes.h"
typedef struct Menu { char pad[0x14]; s32 unk14; } Menu;
extern Menu *D_800E39C0;
extern s32 D_80153F88[];
extern unsigned char D_80153F8B[],D_8014642A[];
extern void func_8029A73C(void),func_8041E478(s32);
extern s32 func_8029A9A0(s32);
s32 func_8041F01C(s32 unused0, s32 unused1, u32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a1_2;
    u32 temp_a2;

    temp_a2 = arg2 >> 0x10;
    if ((temp_a2 == 3) && (arg3 == 0)) {
        func_8029A73C();
        temp_a1 = D_800E39C0->unk14 * 0x1C;
        *(s32 *)((char *)D_80153F88 + temp_a1) = (*(s32 *)((char *)D_80153F88 + temp_a1) + 1) % 5;
        func_8041E478(D_800E39C0->unk14);
        if (func_8029A9A0(0) == 0x16) {
            temp_a1_2 = D_800E39C0->unk14;
            *(D_8014642A + ((7 - temp_a1_2) * 0x96)) = *(D_80153F8B + (temp_a1_2 * 0x1C));
        }
    }
    return 0;
}
