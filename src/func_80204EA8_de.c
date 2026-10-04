#include "common/types.h"
#include "span_1000/code_80204A68.h"
#include "types.h"





extern s32 D_8011BDC8;
extern void func_80267198_de(void *, void *, s32, Triple, struct Shape_func_802764D4_de_2);
extern void func_80285DB0_de(void *, void *, s32);




/** Submit an object's three-word record, then attach it in mode one. */
void func_80204EA8_de(void *arg0) {
    struct Shape_func_802764D4_de_2 pair;

    pair.field_0 = 0;
    func_80267198_de(arg0, arg0, 6, ((func_80204EA8_S1 *)(arg0))->unk8, pair);
    func_80285DB0_de(&D_8011BDC8, arg0, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2058_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7158_4 = 377487.312f;
const float unbake_rodata_800C715C_4 = 10000.0f;
const float unbake_rodata_800C7160_4 = 3.14159274f;
const float unbake_rodata_800C7164_4 = 100.0f;
const float unbake_rodata_800C7168_4 = 1.0f;
const float unbake_rodata_800C716C_4 = 10000.0f;
const float unbake_rodata_800C7170_4 = 100.0f;
const float unbake_rodata_800C7174_4 = (-1.0f);
const float unbake_rodata_800C7178_4 = 3.14159274f;
const float unbake_rodata_800C717C_4 = 1.57079637f;
const float unbake_rodata_800C7180_4 = 100.0f;
const float unbake_rodata_800C7184_4 = 3.14159274f;
const float unbake_rodata_800C7188_4 = 1.57079637f;
const float unbake_rodata_800C718C_4 = 100.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C22B0_4 = 360000.0f;
const float unbake_rodata_800C22B4_4 = 0.400000006f;
const float unbake_rodata_800C22B8_4 = 3.14159274f;
const float unbake_rodata_800C22BC_4 = 1.57079637f;
const float unbake_rodata_800C22C0_4 = 100.0f;
const float unbake_rodata_800C22C4_4 = 3.14159274f;
const float unbake_rodata_800C22C8_4 = 1.57079637f;
const float unbake_rodata_800C22CC_4 = 100.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C22F0_4 = 360000.0f;
const float unbake_rodata_800C22F4_4 = 0.400000006f;
const float unbake_rodata_800C22F8_4 = 3.14159274f;
const float unbake_rodata_800C22FC_4 = 1.57079637f;
const float unbake_rodata_800C2300_4 = 100.0f;
const float unbake_rodata_800C2304_4 = 3.14159274f;
const float unbake_rodata_800C2308_4 = 1.57079637f;
const float unbake_rodata_800C230C_4 = 100.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20A0_4 = 360000.0f;
const float unbake_rodata_800C20A4_4 = 0.400000006f;
const float unbake_rodata_800C20A8_4 = 3.14159274f;
const float unbake_rodata_800C20AC_4 = 1.57079637f;
const float unbake_rodata_800C20B0_4 = 100.0f;
const float unbake_rodata_800C20B4_4 = 3.14159274f;
const float unbake_rodata_800C20B8_4 = 1.57079637f;
const float unbake_rodata_800C20BC_4 = 100.0f;
#endif
