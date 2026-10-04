#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"











extern s32 D_8010AC90;
extern s32 D_8011BDC8;

extern f32 D_800C4460_de;
extern void func_8028CE94_de(void *, void *, s32, Triple, f32, f32);

void func_802681A8_de(func_8024E8F0_S1 *arg0, Context_func_802681A8_de *arg1, s32 arg2, Triple arg3, Params_func_802681A8_de arg6) {
    void *resource;

    if ((arg0->unk0 == 1) && (arg0->unk100 & 0x300000)) {
        resource = arg1->inner->resource + 0x140;
        arg3.x = 0;
        arg3.y = 0;
        arg3.z = 0;
    } else {
        resource = &D_8010AC90;
    }

    func_8028CE94_de(&D_8011BDC8, resource, arg6.value, arg3,
                  arg6.angle * *(&D_800C4458_de + 1), arg6.scale * D_800C4460_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C438C_4 = 10.2399998f;
const float unbake_rodata_800C4390_4 = 0.00392156886f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C954C_4 = 10.2399998f;
const float unbake_rodata_800C9550_4 = 0.00392156886f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C470C_4 = 10.2399998f;
const float unbake_rodata_800C4710_4 = 0.00392156886f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C474C_4 = 10.2399998f;
const float unbake_rodata_800C4750_4 = 0.00392156886f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C445C_4 = 10.2399998f;
const float unbake_rodata_800C4460_4 = 0.00392156886f;
#endif
