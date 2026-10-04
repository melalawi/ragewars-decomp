#include "common/types.h"
#include "span_1000/code_8029193C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"



extern Vector4f D_801427E0;
extern f32 D_800CD738;








void func_80293C34_de(void *arg0) {
    f32 t1;
    f32 t2;
    f32 t3;

    if (((func_80293C20_S1 *)(arg0))->unk26DD4 == 0) {
        t1 = D_801427E0.x + D_800CD738;
        D_801427E0.x = t1;
        if (D_800C54AC_de <= t1) {
            t2 = D_801427E0.y + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
            D_801427E0.x = t1 - D_800C54AC_de;
            D_801427E0.y = t2;
            if (D_800C54B4_de <= t2) {
                t3 = D_801427E0.z + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
                D_801427E0.y = t2 - D_800C54B4_de;
                D_801427E0.z = t3;
                if (D_800C54B4_de <= t3) {
                    D_801427E0.z = t3 - D_800C54B4_de;
                    D_801427E0.w = D_801427E0.w + ((func_802077F4_S2 *)(&D_800C54AC_de))->unk4;
                }
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53D8_4 = 15.0f;
const float unbake_rodata_800C53DC_4 = 1.0f;
const float unbake_rodata_800C53E0_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA598_4 = 15.0f;
const float unbake_rodata_800CA59C_4 = 1.0f;
const float unbake_rodata_800CA5A0_4 = 60.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5758_4 = 15.0f;
const float unbake_rodata_800C575C_4 = 1.0f;
const float unbake_rodata_800C5760_4 = 60.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5798_4 = 15.0f;
const float unbake_rodata_800C579C_4 = 1.0f;
const float unbake_rodata_800C57A0_4 = 60.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54AC_4 = 15.0f;
const float unbake_rodata_800C54B0_4 = 1.0f;
const float unbake_rodata_800C54B4_4 = 60.0f;
#endif
