#include "basetypes.h"

extern s32 func_80204308(s32 arg0, s32 arg1, s32 arg2);
extern s32 D_8011FFC0;
extern s32 D_8013B294;

typedef struct func_80279490_S1 func_80279490_S1;
struct func_80279490_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0xA - 0x4 - sizeof(u16)];
    u16 unkA;
    char padA[0x11 - 0xA - sizeof(u16)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
};

s32 func_80279490(void *arg0, s32 arg1) {
    s32 temp_a1;

    if (((func_80279490_S1 *)(arg0))->unkA == D_8013B294) {
        if (arg1 != 0) {
            temp_a1 = D_8011FFC0 + (((func_80279490_S1 *)(arg0))->unk4 * 0x2E8);
            if ((((func_80279490_S1 *)(arg0))->unk11 == 0xA) && (((func_80279490_S1 *)(arg0))->unk12 == 1)) {
                return func_80204308(temp_a1, temp_a1 + 0x170, arg1);
            }
        }
        return 1;
    }
    return 1;
}
