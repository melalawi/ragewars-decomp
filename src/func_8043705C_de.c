#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_804366C4.h"
#include "types.h"

/* Calls func_8029973C_de; when func_80299A08_de reports 0x1C8, passes the word at offset 0x14 of the
   object D_800E5694 points to to func_804369E8_de, then passes -1 to func_8042E988_de if func_802999A0_de
   reports 0x16 for zero and 0xB otherwise, and calls func_802998A8_de. Returns zero. */


extern struct func_80204468_S3 *D_800E1644_de;
extern void func_8029973C_de();
extern s32 func_80299A08_de();
extern void func_804369E8_de(s32);
extern s32 func_802999A0_de(s32);
extern void func_8042E988_de(s32);
extern void func_802998A8_de();

#if defined(VERSION_DE)
#define VALUE_1C8 0x1C4
#elif defined(VERSION_EU_X)
#define VALUE_1C8 0x1CC
#else
#define VALUE_1C8 0x1C8
#endif

s32 func_8043705C_de(void) {
    func_8029973C_de();
    if (func_80299A08_de() == VALUE_1C8) {
        func_804369E8_de(D_800E1644_de->unk14);
        func_8042E988_de(func_802999A0_de(0) == 0x16 ? -1 : 0xB);
        func_802998A8_de();
    }
    return 0;
}
