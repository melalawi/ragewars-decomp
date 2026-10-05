#include "span_1000/code_802944E8.h"
#include "types.h"

extern void func_80293A20_de(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_800CD780;
extern s32 D_8010B194_de;
extern s32 D_80142898;


void func_802949FC_de(s32 arg0) {
    if (D_800CD780 != 0) {
        func_80293A20_de(arg0, 1, 1);
        return;
    }
    if ((D_8010B194_de & 0x1000) && (D_80142898 == 0)) {
        D_80142898 = 1;
        D_8010B194_de = 0;
        D_80142CB4 = (15.0f);
    }
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80290E6C_de(s32);
M2C_UNK func_80291074_de(s32);
void func_80294A74_de(s32 arg0) {
    func_80293B28_de();
    func_80290E6C_de(arg0);
    func_80291074_de(arg0);
}
