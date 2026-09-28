#include "basetypes.h"

extern void func_80209988(void *arg0);

typedef struct {
    u8 pad0[0x220];
    s32 unk220;
    u8 pad224[0x2FC - 0x224];
    s32 unk2FC;
    u8 pad300[0x320 - 0x300];
    s32 unk320;
} Target802131E0;

typedef struct {
    u8 pad0[0x1454];
    Target802131E0 *unk1454;
} Mid802131E0;

typedef struct {
    u8 pad0[0x1D8];
    Mid802131E0 *unk1D8;
} Root802131E0;

/** Resets a target's state block and re-registers it through func_80209988. */
void func_802131E0(Root802131E0 *arg0) {
    Target802131E0 *inner;

    inner = arg0->unk1D8->unk1454;
    inner->unk220 = 0;
    func_80209988(inner);
    inner->unk320 = -1;
    inner->unk2FC = 0;
}
