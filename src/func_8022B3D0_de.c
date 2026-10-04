#include "common/types.h"
#include "span_1000/code_8022A8E0.h"
#include "types.h"





extern void func_80273198_de(Matrix *, Vec3 *);
extern void func_80271F9C_de(Vec3 *out, Vec3 *in, f32 scale);
extern void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_80273448_de(Matrix *object, f32 x, f32 y, f32 z);
extern void func_80273D6C_de(Matrix *object);
extern void func_8027027C_de(Matrix *src, void *dst);




void func_8022B3D0_de(char *arg0, s32 arg1, Vec3 *arg2) {
    Matrix matrix;
    Vec3 offset;

    func_80273198_de(&matrix, arg2);
    func_80271F9C_de(&offset, arg2, 5.12f);
    func_80271F34_de(&offset, &offset, &((func_8022B3C0_S1 *)(arg0))->unk1200);
    func_80273448_de(&matrix, offset.x, offset.y, offset.z);
    func_80273D6C_de(&matrix);
    func_8027027C_de(&matrix, (char *)arg0 + 0x1600);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DD8_4 = 6.14400005f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB060_4 = 255.0f;
const float unbake_rodata_800CB064_4 = 0.100000001f;
const float unbake_rodata_800CB068_4 = 0.25f;
const float unbake_rodata_800CB06C_4 = 0.75f;
const float unbake_rodata_800CB070_4 = 0.00156250002f;
const float unbake_rodata_800CB074_4 = 0.5f;
const float unbake_rodata_800CB078_4 = 0.00208333344f;
const float unbake_rodata_800CB07C_4 = 2.14748365e+09f;
const float unbake_rodata_800CB080_4 = 0.5f;
const float unbake_rodata_800CB084_4 = 2.14748365e+09f;
const float unbake_rodata_800CB088_4 = 0.00312500005f;
const float unbake_rodata_800CB08C_4 = 0.00416666688f;
const float unbake_rodata_800CB090_4 = 0.25f;
const float unbake_rodata_800CB094_4 = (-0.75f);
const float unbake_rodata_800CB098_4 = (-0.5f);
const float unbake_rodata_800CB09C_4 = 0.00390625f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5D24_4 = 0.00100000005f;
const float unbake_rodata_800C5D28_4 = (-0.00100000005f);
const float unbake_rodata_800C5D2C_4 = 0.5f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5C20_8 = 0.0;
const double unbake_rodata_800C5C28_8 = 25.299999237060547;
const double unbake_rodata_800C5C30_8 = 1.0;
const double unbake_rodata_800C5C38_8 = 0.54930615425109863;
const double unbake_rodata_800C5C40_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5C48_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5C50_8 = 1.0;
const double unbake_rodata_800C5C58_8 = 1.4426950216293335;
const double unbake_rodata_800C5C60_8 = 0.5;
const double unbake_rodata_800C5C68_8 = 0.693359375;
const double unbake_rodata_800C5C70_8 = 0.00021219444170128557;
const double unbake_rodata_800C5C78_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5C80_8 = 0.0069435997866094112;
const double unbake_rodata_800C5C88_8 = 0.00049586285604164004;
const double unbake_rodata_800C5C90_8 = 0.055553868412971497;
const double unbake_rodata_800C5C98_8 = 0.25;
const double unbake_rodata_800C5CA0_8 = 1.0;
const double unbake_rodata_800C5CA8_8 = 0.5;
const double unbake_rodata_800C5CB0_8 = 2.300000051524975e-10;
const double unbake_rodata_800C5CB8_8 = (-0.96437489986419678);
const double unbake_rodata_800C5CC0_8 = 99.225929260253906;
const double unbake_rodata_800C5CC8_8 = 1613.411865234375;
const double unbake_rodata_800C5CD0_8 = 112.74474334716795;
const double unbake_rodata_800C5CD8_8 = 2233.77197265625;
const double unbake_rodata_800C5CE0_8 = 4840.23583984375;
const double unbake_rodata_800C5CE8_8 = 0.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5DF8_4 = 3.125f;
const float unbake_rodata_800C5DFC_4 = 32.0f;
const float unbake_rodata_800C5E00_4 = 1.0f;
const float unbake_rodata_800C5E04_4 = 1.0f;
#endif
