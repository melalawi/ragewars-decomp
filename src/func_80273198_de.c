#include "common/types.h"
#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Builds an orientation matrix whose third row is the given direction: the first row is the cross product of the up vector D_800C97B4 with it, or the X axis when the direction is within the vertical thresholds, the second row is the cross product of the first row with it, all three rows are normalised and the rest is identity. */





extern Vec3 D_800C46C0_de[2];


extern func_8020CA10_G1 D_800C48E8_de;


extern void func_80272018_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8027207C_de(Vec3 *v);




void func_80273198_de(Mtx *m, Vec3 *direction) {
    Vec3 up;

    up = ((func_80273208_S1 *)(D_800C46C0_de))->unk4;
    if (direction->y < 0.0f ? (&D_800C48E0_de)[1] <= -direction->y : D_800C48E8_de.unk0 <= direction->y) {
        m->right.y = 0;
        m->right.z = 0;
        m->right.x = D_800C48EC_de;
    } else {
        func_80272018_de(&m->right, &up, direction);
    }
    func_80272018_de(&m->up, &m->right, direction);
    m->forward = *direction;
    func_8027207C_de(&m->right);
    func_8027207C_de(&m->up);
    func_8027207C_de(&m->forward);
    m->m03 = m->m13 = m->m23 = m->m30 = m->m31 = m->m32 = 0.0f;
    m->m33 = D_800C48F0_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C45F4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C45F8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C45FC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C97B4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C97B8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C97BC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C4974_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C4978_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C497C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C49B4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C49B8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C49BC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C46C4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C46C8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C46CC_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
