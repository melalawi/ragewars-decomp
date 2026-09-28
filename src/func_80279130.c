#include "basetypes.h"

extern void func_80217388(void);
extern void func_80262CA8(void *arg0);

void func_80279130(void *arg0, s32 *arg1) {
    s32 temp_v0;

    func_80217388();
    *arg1 |= 0x20;
    temp_v0 = *(s32 *)((char *)arg0 + 0x100) & 0xFFFEFFFF;
    temp_v0 = temp_v0 & ~0x2000;
    temp_v0 = temp_v0 & ~0x100;
    *(s32 *)((char *)arg0 + 0x100) = temp_v0;
    if (temp_v0 & 0x80000) {
        func_80262CA8(arg0);
    }
}
