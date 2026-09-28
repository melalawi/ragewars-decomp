#include "basetypes.h"

/* Copies the 0x640-byte template at offset 0x2E28 of the block D_800E54A4 points to into offset
   0x70 of its 2920-byte entry i through func_802A1724, then copies the block's word at 0x3468 to
   that entry's word at 0xBBC. */
extern char *D_800E54A4;
extern void func_802A1724(void *, void *, s32);

void func_8043569C(s32 index) {
    s32 offset = index * 2920;

    func_802A1724((char *) (offset + (s32) D_800E54A4) + 0x70, D_800E54A4 + 0x2E28, 0x640);
    *(s32 *) (D_800E54A4 + offset + 0xBBC) = *(s32 *) (D_800E54A4 + 0x3468);
}
