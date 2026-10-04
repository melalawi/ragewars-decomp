#include "common/types.h"
#include "span_1000/code_8027230C.h"
#include "types.h"



extern f32 func_802B72B0_de(f32);




void func_802732EC_de(void *arg0, f32 *arg1) {
    char *m = (char *)arg0;
    Vec3 tmp;

    tmp.x = ((func_80272BA8_S2 *)(m))->unk0;
    tmp.y = ((func_80272BA8_S2 *)(m))->unk4;
    tmp.z = ((func_80272BA8_S2 *)(m))->unk8;
    arg1[0] = func_802B72B0_de((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = ((func_80272BA8_S2 *)(m))->unk10;
    tmp.y = ((func_80272BA8_S2 *)(m))->unk14;
    tmp.z = ((func_80272BA8_S2 *)(m))->unk18;
    arg1[1] = func_802B72B0_de((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));

    tmp.x = ((func_80272BA8_S2 *)(m))->unk20;
    tmp.y = ((func_80272BA8_S2 *)(m))->unk24;
    tmp.z = ((func_80272BA8_S2 *)(m))->unk28;
    arg1[2] = func_802B72B0_de((tmp.x * tmp.x) + (tmp.y * tmp.y) + (tmp.z * tmp.z));
}
