#include "common/types.h"
#include "span_16E000/code_80400000.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Returns the initial track vector or the configured fallback when no track is active. */
#define NULL ((void *)0)
  
void *func_8028FDB4_de(void *, s32);                     /* extern */
void func_80400E50_de(Vec3 *, void *, s32, s32);                /* extern */

extern State_func_8040385C_de *D_800DE7E0;

Vec3 func_8040390C_de(void) {
    Vec3 sp10;
    Vec3 sp20;
    Table_func_8028CE94_de *temp_v0;

    if (D_800DE7E0->unk38 == 0) {
        sp20.y = 0;
        sp20.z = 0;
        sp20.x = D_800DCC7C_de;
        return sp20;
    }
    temp_v0 = func_8028FDB4_de(func_8028FDB4_de(func_8028FDB4_de(D_800DE7E0->unk4, 0), 0), 1);
    func_80400E50_de(&sp10, temp_v0->data, temp_v0->count, 0);
    return sp10;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DB92C_4 = 10.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E0CAC_4 = 10.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED2FC_4 = 10.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E84BC_4 = 10.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DCC7C_4 = 10.0f;
#endif
