#include "common/types.h"
#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
#include "types.h"





























extern s32 func_80222AA4_de(void *arg0, s16 arg1);
extern s16 func_8022F96C_de(void *arg0);
extern s32 func_8022B184_de(void *arg0);
extern void func_8022B984_de(void *arg0);
extern s32 func_80214178_de(void *, void *, s32);
extern void func_8022B9C4_de(void *arg0);
extern s32 func_802301F4_de(void *, void *);










void func_8023334C_de(void *arg0, void *arg1) {
    void *actor;

    actor = ((func_8023333C_S1 *)(arg0))->unk1D8;
    ((func_80232FE8_S3 *)(arg1))->unk13C = 2;
    if (func_80222AA4_de(actor, ((SharedPlayer_func_8022A398_de *)(actor))->views5E8.view62E_13.unk62E) == 0) {
        ((SharedPlayer_func_8022A398_de *)(actor))->views5E8.view770_91.unk770 = func_8022F96C_de(actor);
        return;
    }

    if (((func_8023333C_S1 *)(arg0))->unk104 >= D_800C3054_de) {
        if (func_8022B184_de(actor) == 0) {
            func_8022B984_de(actor);
        }
    }

    if (!((((SharedPlayer_func_8022A398_de *)(actor))->views5E8.view6AC_45.unk6AC & 0x4000) &&
          (((SharedPlayer_func_8022A398_de *)(actor))->views5E4.view5E4_0.unk5E4 != 0))) {
        func_80214178_de(arg0, arg1, 2);
        func_8022B9C4_de(actor);
        ((func_80232FE8_S3 *)(arg1))->unk13C = 1;
    }

    if (func_802301F4_de(arg0, arg1) != 0) {
        func_8022B9C4_de(actor);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F84_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8144_4 = 4.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3304_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3344_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3054_4 = 4.0f;
#endif
