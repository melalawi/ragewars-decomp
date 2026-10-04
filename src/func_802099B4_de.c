#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "span_C76B0/data.h"
#include "types.h"




extern char D_800FFFD0;
extern void **D_800FFFCC;

extern s32 func_802444A4_de(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3);






s32 func_802099B4_de(void **arg0, void *arg1) {
    Vec3 first;
    Vec3 second;

    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }

    first = ((Player *)(*arg0))->pos;
    second = ((Player *)(arg1))->pos;
    first.y += D_800C1C8C_de;
    second.y += D_800C1C8C_de;
    if (func_802444A4_de(*arg0, first, second, &D_800FFFD0) != 0) {
        return *D_800FFFCC == arg1;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BBC_4 = 102.399994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D7C_4 = 102.399994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F2C_4 = 102.399994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F6C_4 = 102.399994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C8C_4 = 102.399994f;
#endif
