#include "span_1000/code_8020D328.h"
#include "types.h"
/* Commits a pending selection to the controller D_8013B364: returns at once when nothing is
   requested at 0xC, the request is already active at 0x4, or it continues the committed request at
   0x28 through valid links at 0x14 and 0x18 that are already current or that func_8020CC0C_de joins;
   otherwise it resets the controller, runs the pending release passes flagged at 0x2F4, 0x2F8 and
   0x2FC, rebuilds through func_8020EC14_de, loads the request, clears the controller's link word,
   reselects the active entry, copies the four link words from 0x14 and records the request as
   committed. Always returns 1. Written from its own assembly with early returns. */

extern s32 D_801372A4;
extern s32 func_8020CC0C_de(s32 *, s32, s32);
extern void func_8020D014_de(s32 *);
extern void func_8020EDCC_de(void *);
extern void func_8020EE50_de(void *);
extern void func_8020EEA4_de(void *);
extern void func_8020EC14_de(void *);
extern void func_8020D1FC_de(s32 *);
extern void func_8020D220_de(s32 *, s32);
extern void func_8020D0CC_de(s32 *, s32);
extern void func_8020D114_de(s32 *, s32 *, s32);




s32 func_8020EAE0_de(void *arg0) {
    s32 *base;
    s32 requested;
    s32 current;
    s32 link;

    base = &D_801372A4;
    if (base == 0) {
        return 1;
    }
    requested = ((func_8020EAE0_S1 *)(arg0))->unkC;
    if (requested == -1) {
        return 1;
    }
    current = ((func_8020EAE0_S1 *)(arg0))->unk4;
    if (current == requested) {
        return 1;
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk28 == requested) {
        link = ((func_8020EAE0_S1 *)(arg0))->unk14;
        if (link != -1 && ((func_8020EAE0_S1 *)(arg0))->unk18 != -1) {
            if (current == link) {
                return 1;
            }
            if (func_8020CC0C_de(base, current, link) != -1) {
                return 1;
            }
        }
    }
    func_8020D014_de(base);
    if (((func_8020EAE0_S1 *)(arg0))->unk2F4 != 0) {
        func_8020EDCC_de(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2F8 != 0) {
        func_8020EE50_de(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2FC != 0) {
        func_8020EEA4_de(arg0);
    }
    func_8020EC14_de(arg0);
    func_8020D1FC_de(base);
    func_8020D220_de(base, ((func_8020EAE0_S1 *)(arg0))->unkC);
    base[6] = -1;
    func_8020D0CC_de(base, ((func_8020EAE0_S1 *)(arg0))->unk4);
    func_8020D114_de(base, &((func_8020EAE0_S1 *)(arg0))->unk14, 4);
    ((func_8020EAE0_S1 *)(arg0))->unk1BC = 0;
    ((func_8020EAE0_S1 *)(arg0))->unk1C0 = -1;
    ((func_8020EAE0_S1 *)(arg0))->unk28 = ((func_8020EAE0_S1 *)(arg0))->unkC;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A10_4 = 3.40282347e+38f;
const float unbake_rodata_800C3A14_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C8B10_2C[] = {0x43, 0x47, 0x61, 0x6D, 0x65, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x5F, 0x5F, 0x44, 0x72, 0x61, 0x77, 0x3A, 0x20, 0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C39E0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C39E0_18[] = {0x0023F83CU, 0x0023F86CU, 0x0023F898U, 0x0023F8C0U, 0x0023F8ECU, 0x0023F924U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C39A0_4 = 1.0f;
const float unbake_rodata_800C39A4_4 = 1.5f;
const float unbake_rodata_800C39A8_4 = 65536.0f;
const float unbake_rodata_800C39AC_4 = 3.05185094e-05f;
const float unbake_rodata_800C39B0_4 = 2.0f;
const float unbake_rodata_800C39B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C39B8_4 = 1.0f;
const float unbake_rodata_800C39BC_4 = 0.5f;
const float unbake_rodata_800C39C0_4 = 0.300000012f;
const float unbake_rodata_800C39C4_4 = (-2.0f);
const float unbake_rodata_800C39C8_4 = 3.0f;
const float unbake_rodata_800C39CC_4 = 0.970000029f;
const float unbake_rodata_800C39D0_4 = 0.0299999993f;
const float unbake_rodata_800C39D4_4 = 1.52587891e-05f;
const float unbake_rodata_800C39D8_4 = 0.5f;
const float unbake_rodata_800C39DC_4 = 65536.0f;
const float unbake_rodata_800C39E0_4 = 0.5f;
#endif
