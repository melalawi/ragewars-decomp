#include "span_1000/code_8029FF18.h"
#include "span_1000/types.h"
#include "types.h"








void func_8029F1A0_de(void *arg0, void *arg1, void *arg2, s32 arg3) {
    u8 *m = (u8 *) arg0;
    s32 i;
    f32 vx, vy, vz;

    i = 0;
    if (arg3 > 0) {
        do {
            u8 *v = (u8 *) arg2 + i * 0xC;
            u8 *out = (u8 *) arg1 + i * 0xC;

            vx = ((func_8024C864_S1 *)(v))->unk0;
            vy = ((func_8024C864_S1 *)(v))->unk4;
            vz = ((func_8024C864_S1 *)(v))->unk8;
            ((func_8024C864_S1 *)(out))->unk0 = (((func_80272908_S2 *)(m))->unk0 * vx) + (((func_80272908_S2 *)(m))->unk10 * vy) + (((func_80272908_S2 *)(m))->unk20 * vz) + ((func_80272908_S2 *)(m))->unk30;
            ((func_8024C864_S1 *)(out))->unk4 = (((func_80272908_S2 *)(m))->unk4 * vx) + (((func_80272908_S2 *)(m))->unk14 * vy) + (((func_80272908_S2 *)(m))->unk24 * vz) + ((func_80272908_S2 *)(m))->unk34;
            ((func_8024C864_S1 *)(out))->unk8 = (((func_80272908_S2 *)(m))->unk8 * vx) + (((func_80272908_S2 *)(m))->unk18 * vy) + (((func_80272908_S2 *)(m))->unk28 * vz) + ((func_80272908_S2 *)(m))->unk38;
            i += 1;
        } while (i < arg3);
    }
}
