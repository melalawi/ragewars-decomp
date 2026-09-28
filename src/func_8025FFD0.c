/* Reads one envelope segment from a bitstream, either as raw floats or as scaled table values. */

#include "basetypes.h"

typedef struct Segment8025FFD0 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    u32 unkC;
    u8 pad10[0x24 - 0x10];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} Segment8025FFD0;

extern s32 D_8010EC78;
extern f32 D_8010EC7C;
extern s32 D_8010EC80;

extern u32 func_802607D8(u32 *arg0, s32 arg1);
extern f32 func_80260654(f32 arg0, s32 arg1);
extern f32 func_80260670(f32 arg0, f32 arg1, s32 arg2);
extern void func_8025FD94(Segment8025FFD0 *arg0);

void func_8025FFD0(Segment8025FFD0 *arg0, u32 *arg1) {
    u32 bits;
    u32 first;
    u32 second;
    f32 lo;
    f32 hi;

    bits = *arg1;
    arg0->unk2C = func_802607D8(&bits, 6);
    if (D_8010EC78 != 0) {
        first = func_802607D8(&bits, 0x20);
        second = func_802607D8(&bits, 0x20);
        lo = *(f32 *)&first;
        hi = *(f32 *)&second;
    } else {
        first = func_802607D8(&bits, 6);
        second = func_802607D8(&bits, 6);
        lo = func_80260654((f32)first, 6);
        hi = func_80260654((f32)second, 6);
        lo = func_80260670(lo, D_8010EC7C, D_8010EC80);
        hi = func_80260670(hi, D_8010EC7C, D_8010EC80);
    }
    arg0->unk4 = lo;
    arg0->unk8 = hi - lo;
    do {
        arg0->unk0 = func_802607D8(&bits, 6);
        arg0->unk28 = 0;
        arg0->unk24 = 0;
        arg0->unkC = bits;
        func_8025FD94(arg0);
    } while (0);
    *arg1 = bits;
}
