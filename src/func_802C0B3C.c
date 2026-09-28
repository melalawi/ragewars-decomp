#include "basetypes.h"

/* Arms the CP0 timer interrupt: with interrupts disabled through func_802C2020, reads the Count
   register through func_802C1FF0 into D_8014FE30, sets the Compare register through
   func_802C2240 to that count plus the requested interval, then restores interrupts. */
extern u32 D_8014FE30;
extern u32 func_802C2020(void);
extern u32 func_802C1FF0(void);
extern void func_802C2240(u32);
extern void func_802C2040(u32);

void func_802C0B3C(u64 interval) {
    u64 compare;
    u32 saved = func_802C2020();

    D_8014FE30 = func_802C1FF0();
    compare = D_8014FE30 + interval;
    func_802C2240(compare);
    func_802C2040(saved);
}
