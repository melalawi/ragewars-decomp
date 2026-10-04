#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80274870_de(f32 *, f32, f32);
extern void func_802231D4_de(s32, s32, void *);
extern void func_802233F0_de(s32 arg0, s32 arg1, void *arg2);
extern s32 func_8024E62C_de(void *arg0);
extern void func_802227F4_de(void *, void *, s32);
extern f32 func_8024E678_de(void *arg0, s32 arg1);
extern char D_800C95A0;
extern char D_800C94EC_de;
extern s32 D_800C9AEC_de;
extern f32 D_800C2D78_de[2];






void func_8022CC34_de(void *arg0, void *arg1) {
    s32 value;

    func_80274870_de((s32)arg0 + 0x72C, 0.0f, 0.25f);
    func_802231D4_de((s32)arg0, (s32)arg1, &D_800C95A0);
    if (!(((func_8022CC24_S1 *)(arg0))->unk660 & 0x8000)) {
        func_802233F0_de((s32)arg0, (s32)arg1, &D_800C94EC_de);
    }
    if (((func_8022CA04_S3 *)(arg1))->unk20 <= 0.0f) {
        if (func_8024E62C_de(arg1) != 0) {
            func_802227F4_de(arg0, arg1, 2);
        }
    }
    if (((func_8022CA04_S3 *)(arg1))->unk20 <= 0.0f) {
        if (func_8024E678_de(arg1, 0) < 0.0f) {
            if (-func_8024E678_de(arg1, 0) < D_800C2D78_de[0]) {
                goto set_value;
            }
        } else if (func_8024E678_de(arg1, 0) < D_800C2D78_de[1]) {
set_value:
            if (((func_8022CC24_S1 *)(arg0))->unk13B4 == &D_800C9AEC_de) {
                ((func_8022CC24_S1 *)(arg0))->unk86C = 0x5E2E;
            } else {
                ((func_8022CC24_S1 *)(arg0))->unk86C = 0x7F8;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CA8_4 = 61.4399986f;
const float unbake_rodata_800C2CAC_4 = 61.4399986f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E68_4 = 61.4399986f;
const float unbake_rodata_800C7E6C_4 = 61.4399986f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C301C_4 = 61.4399986f;
const float unbake_rodata_800C3020_4 = 61.4399986f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C305C_4 = 61.4399986f;
const float unbake_rodata_800C3060_4 = 61.4399986f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D78_4 = 61.4399986f;
const float unbake_rodata_800C2D7C_4 = 61.4399986f;
#endif
