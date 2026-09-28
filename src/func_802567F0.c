/* Clears and sizes the 0x8016E000 heap region against the detected RAM size, then initialises the
   five dependent subsystems over it. */
#include "basetypes.h"

extern u8 D_8016E000[];
extern u8 D_801051A0[];
extern u8 D_8010A248[];
extern u8 D_801051B8[];

extern s32 func_80265370(void);
extern void func_802A101C(void *, s32, s32);
extern void func_80255854(void *, void *, s32);
extern void func_80255090(void *, s32);
extern void func_80256220(void *, s32);
extern void func_8023B9A0(s32, s32);
extern void func_80250E10(s32, s32);

void func_802567F0(void) {
    u8 *heapStart;
    s32 heapEnd;
    s32 size;

    heapEnd = 0x80400000;
    heapStart = D_8016E000;
    if (func_80265370() != 0x400000) {
        heapEnd = func_80265370() | 0x80000000;
    }

    size = heapEnd - (s32)heapStart;
    func_802A101C(heapStart, 0, size);
    func_80255854(D_801051A0, heapStart, size);
    func_80255090(D_8010A248, 3);
    func_80256220(D_801051B8, 4);
    func_8023B9A0(0, 0);
    func_80250E10(0, 5);
}
