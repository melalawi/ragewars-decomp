#include "span_1000/code_8027451C.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);
extern char D_800C49A0_de;




void func_80274BF4_de(void *arg0)
{
    char *o = (char *)arg0;
    f32 magSq;
    f32 mag;
    f32 zOut;

    magSq = (((func_80274C64_S1 *)(o))->unk18 * ((func_80274C64_S1 *)(o))->unk18) +
            (((func_80274C64_S1 *)(o))->unk20 * ((func_80274C64_S1 *)(o))->unk20);
    zOut = 0.0f;
    if (magSq != 0.0f) {
        mag = func_802B72B0_de(magSq);
        magSq = *(f32 *)&D_800C49A0_de / mag;
        ((func_80274C64_S1 *)(o))->unk24 = ((func_80274C64_S1 *)(o))->unk18 * magSq;
        ((func_80274C64_S1 *)(o))->unk28 = ((func_80274C64_S1 *)(o))->unk1C * magSq;
        zOut = ((func_80274C64_S1 *)(o))->unk20 * magSq;
    } else {
        ((func_80274C64_S1 *)(o))->unk24 = 0.0f;
        ((func_80274C64_S1 *)(o))->unk28 = 0.0f;
    }
    ((func_80274C64_S1 *)(o))->unk2C = zOut;
}
