#include "basetypes.h"

extern void func_802BFD50(s32 arg0, s32 arg1, s32 arg2);
extern void func_802C0640(s32 arg0, s32 arg1, s32 arg2);
extern void func_80255C40(s32 arg0, s32 arg1, s32 arg2);
extern void func_80255CB4(s32 arg0, s32 arg1);
extern void func_802A101C(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BFD80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802C0840(s32 arg0);

extern char D_25651C;
extern s32 D_800D2B34;

void func_80256220(s32 arg0, s32 arg1) {
    s32 s0;
    s32 s1;

    func_802BFD50(arg0 + 0x230, arg0 + 0x248, 0x200);
    s0 = arg0 + 0xA48;
    func_802BFD50(s0, arg0 + 0xA60, 1);
    func_802C0640(8, s0, 0x7D1);
    func_80255C40(arg0 + 0x5068, 0x18, 0x1C);
    func_80255C40(arg0 + 0x507C, 0x18, 0x1C);
    s1 = 0;
    s0 = 0xE68;
    do {
        *(s32 *) (arg0 + s0 + 0x14) = 0;
        func_80255CB4(arg0 + 0x5068, arg0 + s0);
        s1 += 1;
        s0 += 0x20;
    } while (s1 < 0x210);
    func_802A101C(arg0 + 0xA68, arg1, 0x400);
    func_802BFD80(arg0, arg1, &D_25651C, arg0, arg0 + 0xE68, D_800D2B34);
    func_802C0840(arg0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7D4_4[] = {0x00, 0x00, 0x00, 0x11};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B34_4[] = {0x00, 0x00, 0x00, 0x11};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE4A4_4[] = {0x00, 0x00, 0x00, 0x11};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8C4_4[] = {0x00, 0x00, 0x00, 0x11};
#endif
