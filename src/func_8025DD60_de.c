#include "common/types.h"
#include "span_1000/code_8025DB64.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 D_800C4030_de[];


extern void func_802AE5B8_de(s32 arg0, s32 arg1);
extern void func_802AFF30_de(s32 arg0, s32 arg1);
extern void func_802AFEB0_de(s32 arg0, s32 arg1);
extern void func_802AFEE0_de(s32 arg0, s32 arg1, s8 arg2);
extern void func_802AFF60_de(s32 arg0, s16 arg1);








void func_8025DD60_de(void *arg0) {
    s32 i;
    f32 scaled;

    i = 0;
    func_802AE5B8_de(((func_8025DD80_S1 *)(arg0))->unk10, ((func_8025DD80_S1 *)(arg0))->unkC);
    func_802AFF30_de(((func_8025DD80_S1 *)(arg0))->unk14, ((func_8025DD80_S1 *)(arg0))->unk10);
    func_802AFEB0_de(((func_8025DD80_S1 *)(arg0))->unk14,
                  ((func_80203E78_S1 *)(((func_8025DD80_S1 *)(arg0))->unk8))->unk4);
    do {
        func_802AFEE0_de(((func_8025DD80_S1 *)(arg0))->unk14, i & 0xFF, 0);
        i++;
    } while (i < 0x14);

    scaled = (f32)((func_8025DD80_S1 *)(arg0))->unk24 *
             (((func_80258BB4_S1 *)(*(void **)arg0))->unk2BA4 * D_800C4030_de[1]);
    func_802AFF60_de(((func_8025DD80_S1 *)(arg0))->unk14, (s16)(s32)(scaled * D_800C4038_de));
    ((func_8025DD80_S1 *)(arg0))->unk2C = scaled;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F64_4 = 0.00999999978f;
const float unbake_rodata_800C3F68_4 = 32767.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9124_4 = 0.00999999978f;
const float unbake_rodata_800C9128_4 = 32767.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42E4_4 = 0.00999999978f;
const float unbake_rodata_800C42E8_4 = 32767.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4324_4 = 0.00999999978f;
const float unbake_rodata_800C4328_4 = 32767.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4034_4 = 0.00999999978f;
const float unbake_rodata_800C4038_4 = 32767.0f;
#endif
