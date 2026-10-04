#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 *func_8024BFD4_de(char *arg0, s8 arg1);
extern s32 *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_80253754_de(s32 arg0, s32 *arg1);
extern void func_80271F68_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_80272018_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8027207C_de(Vec3 *arg0);
extern void func_80271F9C_de(Vec3 *out, Vec3 *in, f32 scale);






void func_80247F18_de(char *arg0, char *arg1, char *arg2, Vec3 arg3,
                   Vec3 arg6, s32 arg9) {
    Vec3 sp10;
    Vec3 sp20;
    Vec3 sp30;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 var_a0;
    s32 var_v1;
    char *var_a1;

    if (arg1[0x34] != 0x3C) {
      if (arg1[0x12] < 0x17) {
       temp_v0 = func_8024BFD4_de(arg0, arg0[1]);
       if (temp_v0 != 0) {
        temp_v0_2 = func_8028FDB4_de((void *)*temp_v0, 5);
        var_a1 = (char *)temp_v0_2 + ((arg9 * *temp_v0_2) + 8);
        var_a0 = arg9;
        if ((((u8 *)var_a1)[0x65] & 3) == 3) {
            func_80253754_de(0, temp_v0);
            return;
        }
        var_v1 = 0;
        do {
            *(arg1 + var_v1 + 0x14) = var_a0;
            var_a0 = var_a1[0x64];
            var_v1++;
            if (var_a0 != -1) {
                var_a1 = (char *)temp_v0_2 + ((var_a0 * *temp_v0_2) + 8);
            }
        } while (var_v1 < 4);
        func_80253754_de(0, temp_v0);
        arg1[0x12] = 0x19;
        sp20.x = ((func_80247F08_S1 *)(arg2))->unk30;
        sp20.y = ((func_80247F08_S1 *)(arg2))->unk34;
        sp20.z = ((func_80247F08_S1 *)(arg2))->unk38;
        func_80271F68_de(&arg3, &arg3, &sp20);
        func_80272018_de(&sp10, &arg3, &arg6);
        func_8027207C_de(&sp10);
        func_8027207C_de(&arg3);
        func_8027207C_de(&arg6);
        func_80272018_de(&sp30, &sp10, &arg3);
        func_80271F9C_de(&sp10, &sp10,
                      (sp30.x * arg6.x) + (sp30.y * arg6.y) +
                          (sp30.z * arg6.z));
        func_8027207C_de(&sp10);
        ((Field_Vec_18 *)(arg1))->value = sp10;
       }
      }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF6E4_2[] = {0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E42DE_4[] = {0x00, 0xC6, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDFB0_4C[] = {0x00426264U, 0x00426288U, 0x004262ACU, 0x004262D0U, 0x004262F4U, 0x00426318U, 0x0042633CU, 0x00426360U, 0x00426384U, 0x004263A8U, 0x004263ECU, 0x004263ECU, 0x004263ECU, 0x004263ECU, 0x004263ECU, 0x004263ECU, 0x004263ECU, 0x004263CCU, 0x004263ECU};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8DB4_4 = 4.0f;
const float unbake_rodata_800E8DB8_4 = 100.0f;
const float unbake_rodata_800E8DBC_4 = 255.0f;
const float unbake_rodata_800E8DC0_4 = 150.0f;
const float unbake_rodata_800E8DC4_4 = 4.0f;
const float unbake_rodata_800E8DC8_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE320_4 = 900.0f;
const float unbake_rodata_800DE324_4 = (-1.0f);
#endif
