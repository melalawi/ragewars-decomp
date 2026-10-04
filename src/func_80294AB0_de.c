#include "common/types.h"
#include "span_1000/code_80242BE0.h"
#include "span_1000/code_802945CC.h"
#include "types.h"




extern Entry80294AC4 D_800CD788[];

extern void func_8025E214_de(s32 arg0);
extern void func_80264854_de(s32 arg0);




void func_80294AB0_de(void *arg0) {
    void (*callback)(void *arg0);
    s32 index;

    if ((D_80142CA8 == 2) &&
        (((func_80294AC4_S1 *)(arg0))->unk26DD0 == 0)) {
        index = ((func_80294AC4_S1 *)(arg0))->unk26DBC;
        ((func_80294AC4_S1 *)(arg0))->unk26DB0 = 0;
        ((func_80294AC4_S1 *)(arg0))->unk26DB8 = index;
        func_802456A0_de();
        func_8025E214_de(-1);
        func_80264854_de(0);
        callback = D_800CD788[((func_80294AC4_S1 *)(arg0))->unk26DB8].callback;
        if (callback != 0) {
            callback(arg0);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D29D8_4[] = {0x00, 0x29, 0x3D, 0xE4};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE368_4[] = {0x00, 0x29, 0x3F, 0x04};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CED38_4[] = {0x00, 0x29, 0x3F, 0x34};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD788_4[] = {0x00, 0x29, 0x3D, 0xF0};
#endif
