#include "common/types.h"
#include "span_1000/code_8024C444.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_80270AAC_de(void *arg0, s32 arg1, void *arg2, void *arg3);











void func_8024CB4C_de(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    f32 scale;

    idx = ((struct func_8025E52C_S1 *) (((ObjectLinks24_2 *) o)->unk_0 + (arg1 * 4)))->unk2;
    if (idx == -1) {
        rec = ((ObjectLinks24_2 *)(o))->unk_4 + arg1 * 0x14;
        scale = ((func_802077F4_S2 *)(&D_800C3B78))->unk4;
        ((Vector4f *)(arg2))->x = (f32)(((ObjectState14 *)(rec))->unk_C) * scale;
        ((Vector4f *)(arg2))->y = (f32)(((ObjectState14 *)(rec))->unk_E) * scale;
        ((Vector4f *)(arg2))->z = (f32)(((ObjectState14 *)(rec))->unk_10) * scale;
        ((Vector4f *)(arg2))->w = (f32)(((ObjectState14 *)(rec))->unk_12) * scale;
        return;
    }
    base = func_8028FDB4_de(((ObjectLinks24_2 *)(o))->unk_C, (s32) idx);
    func_80270AAC_de(arg2, ((ObjectLinks24_2 *)(o))->unk_20,
                  (char *)base + (((ObjectLinks24_2 *)(o))->unk_10) * 4,
                  (char *)base + (((ObjectLinks24_2 *)(o))->unk_14) * 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3AAC_4 = 3.05185094e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C6C_4 = 3.05185094e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E2C_4 = 3.05185094e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E6C_4 = 3.05185094e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B7C_4 = 3.05185094e-05f;
#endif
