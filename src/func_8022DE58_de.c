#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "span_1000/types.h"
#include "types.h"



extern f32 func_8024E464_de(void *arg0);
extern f32 func_8024D398_de(void *);
extern f32 func_8024D284_de(void *arg0);
extern f32 func_8024E420_de(void *);
extern s32 func_8024491C_de(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3,
                         f32 arg4, f32 arg5, f32 arg6, f32 arg7);
extern char D_801000F0;
extern char D_800FFFCC[];











void func_8022DE58_de(void *arg0, void *arg1) {
    Vec3 next;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f23;

    var_f23 = (((((Model_func_80223E34_de *)(((func_8022DE48_S1 *)(arg0))->unk18))->height -
                    ((func_8022DE48_S1 *)(arg0))->unk780) -
                   ((func_8022DE48_S1 *)(arg0))->unk718) -
                  ((func_8022DE48_S1 *)(arg0))->unk720) -
                 ((func_8022DE48_S1 *)(arg0))->unk6F4;
    if (var_f23 > 0.0f) {
        temp_f22 = func_8024E464_de(arg1);
        temp_f21 = func_8024D398_de(arg1);
        temp_f20 = func_8024D284_de(arg1);
        temp_f0 = func_8024E420_de(arg1);
        next.x = ((func_8020E674_S1 *)(arg1))->unk8.v0;
        next.y = ((func_8020E674_S1 *)(arg1))->unk8.v1.y + var_f23;
        next.z = ((func_8020E674_S1 *)(arg1))->unk8.v1.z;
        if (func_8024491C_de(arg1, ((func_8020E674_S1 *)(arg1))->unk8.v1, next,
                           &D_801000F0, temp_f22, temp_f21, temp_f20,
                           temp_f0) != 0) {
            temp_f1 = ((func_8022DE48_S4 *)(*(void **)D_800FFFCC))->unkE8 -
                      ((func_8020E674_S1 *)(arg1))->unk8.v1.y;
            ((func_8022DE48_S1 *)(arg0))->unk6EC -= var_f23 - temp_f1;
            var_f23 = temp_f1;
        }
    }
    ((func_8022DE48_S1 *)(arg0))->unk6F4 += var_f23;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CB294_4[] = {0x00, 0x23, 0x9F, 0xAC};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D0588_10[] = {0x0B, 0xEA, 0x0B, 0xEB, 0x0B, 0xEC, 0xFF, 0xFF, 0x0B, 0xED, 0x0B, 0xEE, 0x0B, 0xEF, 0x0B, 0xF0};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CA04C_2C[] = {0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CA7E8_4[] = {0x00, 0x00, 0x04, 0x62};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C9AEC_8[] = {0x00, 0x22, 0xC8, 0x94, 0x00, 0x22, 0x40, 0x9C};
#endif
