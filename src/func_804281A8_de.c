#include "span_16E000/code_80425BC0.h"
#include "span_16E000/types.h"
#include "types.h"

/* Sets the byte at offset 0x10 of the two objects at offsets 0xA64 and 0xA60 of the structure D_800E4690
   points to to 0xFF, shows both through func_8040E8D8_de and clears the word at 0xA68. */





extern func_80428388_S1 *D_800E0640_de;
extern void func_8040E8D8_de(struct Resource_func_80419E54_de *, s32);

void func_804281A8_de(void) {
    (D_800E0640_de->unkA64)->value = 0xFF;
    (D_800E0640_de->unkA60)->value = 0xFF;
    func_8040E8D8_de(D_800E0640_de->unkA60, 1);
    func_8040E8D8_de(D_800E0640_de->unkA64, 1);
    D_800E0640_de->unkA68 = 0;
}
