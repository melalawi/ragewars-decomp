#include "common/types.h"
#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

/* Rotates a point about a pivot by an object's orientation: builds the rotation matrix from the
   three angles at offset 0x130 of the object through func_80202CA0_de and func_80274244_de (the body of
   func_80203CFC_de, inlined here as the frame layout shows), takes the point's offset from the pivot,
   rotates it through func_80272BCC_de into the point and adds the pivot back. */


extern void func_80202CA0_de(s32 *, f32 *);
extern void func_80274244_de(s32 *, f32 *);
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272BCC_de(f32 *, Vec3 *, Vec3 *);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);




static inline void build_rotation(void *object, f32 *matrix) {
    s32 rotation[4];
    f32 angles[3];

    angles[0] = ((func_80203848_S1 *)(object))->unk130;
    angles[1] = ((func_80203848_S1 *)(object))->unk134;
    angles[2] = ((func_80203848_S1 *)(object))->unk138;
    func_80202CA0_de(rotation, angles);
    func_80274244_de(rotation, matrix);
}

void func_80203D4C_de(void *unused, void *object, Vec3 *pivot, Vec3 *point) {
    f32 matrix[16];
    Vec3 offset;

    build_rotation(object, matrix);
    func_80271F68_de(&offset, point, pivot);
    func_80272BCC_de(matrix, &offset, point);
    func_80271F34_de(point, point, pivot);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1AE8_4 = 50.0f;
const float unbake_rodata_800C1AEC_4 = 0.261799425f;
const float unbake_rodata_800C1AF0_4 = 0.261799425f;
const float unbake_rodata_800C1AF4_4 = 50.0f;
const float unbake_rodata_800C1AF8_4 = 50.0f;
const float unbake_rodata_800C1AFC_4 = 50.0f;
const float unbake_rodata_800C1B00_4 = 50.0f;
const float unbake_rodata_800C1B04_4 = 100.0f;
const float unbake_rodata_800C1B08_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6CA0_4 = 100.0f;
const float unbake_rodata_800C6CA4_4 = 0.333333343f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1E28_14[] = {0x0020778CU, 0x00207784U, 0x00207784U, 0x0020777CU, 0x002077DCU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1E68_14[] = {0x0020778CU, 0x00207784U, 0x00207784U, 0x0020777CU, 0x002077DCU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1B88_14[] = {0x0020776CU, 0x00207764U, 0x00207764U, 0x0020775CU, 0x002077BCU};
#endif
