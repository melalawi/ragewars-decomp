#include "basetypes.h"

/* Saves entry i of the 2920-byte records of the block D_800E54A4 points to into the 0x640-byte
   template at offset 0x2E28 through func_802A1724, copies the entry's word at 0xBBC to the block's
   0x3468, and stores in the block's 0x346C what func_804057F8 computes over the template with 0x640
   and 7. */
extern char *D_800E54A4;
extern void func_802A1724(void *, void *, s32);
extern s32 func_804057F8(void *, s32, s32);

typedef struct func_80435608_S1 func_80435608_S1;
struct func_80435608_S1 {
    char pad0[0x3468];
    s32 unk3468;
    char pad3468[0x346C - 0x3468 - sizeof(s32)];
    s32 unk346C;
};

void func_80435608(s32 index) {
    s32 offset = index * 2920;
    char *template = D_800E54A4 + 0x2E28;

    func_802A1724(template, (void *)(offset + (s32)D_800E54A4 + 0x70), 0x640);
    ((func_80435608_S1 *)(D_800E54A4))->unk3468 = *(s32 *) (D_800E54A4 + offset + 0xBBC);
    ((func_80435608_S1 *)(D_800E54A4))->unk346C = func_804057F8(template, 0x640, 7);
}
