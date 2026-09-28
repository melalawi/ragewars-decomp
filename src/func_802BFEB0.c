#include "basetypes.h"

extern u32 func_802C2020(void);
extern u32 func_802C1FF0(void);
extern void func_802C2040(u32);

extern s32 D_8014FE20;
extern u64 D_8014FE28;

u64 func_802BFEB0(void) {
    u32 saved;
    u32 count;
    u32 elapsed;
    u64 time;

    saved = func_802C2020();
    count = func_802C1FF0();
    elapsed = count - D_8014FE20;
    time = D_8014FE28;
    func_802C2040(saved);
    return time + elapsed;
}
