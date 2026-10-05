#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8027302C.h"
#include "types.h"

void func_80272FBC_de(float *arg0, float *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
    arg0[5] = arg1[5];
    arg0[6] = arg1[6];
    arg0[7] = arg1[7];
    arg0[8] = arg1[8];
    arg0[9] = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    arg0[15] = arg1[15];
}

void func_80273040_de(f32 *arg0, f32 *arg1) {
    char *a0;
    char *a2;
    char *v1;
    s32 col;
    s32 row;
    s32 coloff;
    f32 last;

    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[3] = arg1[3];
    arg0[4] = arg1[4];
    arg0[5] = arg1[5];
    arg0[6] = arg1[6];
    arg0[7] = arg1[7];
    arg0[8] = arg1[8];
    arg0[9] = arg1[9];
    arg0[10] = arg1[10];
    arg0[11] = arg1[11];
    arg0[12] = arg1[12];
    arg0[13] = arg1[13];
    arg0[14] = arg1[14];
    last = arg1[15];
    col = 0;
    arg0[15] = last;

    a0 = (char *)arg0;
    do {
        row = 0;
        coloff = col * 4;
        a2 = a0;
        v1 = (char *)arg1;
        do {
            *(f32 *)a2 = *(f32 *)(coloff + (s32)v1);
            v1 += 0x10;
            row += 1;
            a2 += 4;
        } while (row < 3);
        col += 1;
        a0 += 0x10;
    } while (col < 3);
}

void func_8027310C_de(void *arg0, void *arg1, f32 arg2) {
    char *o = (char *)arg0;
    f32 zero = 0.0f;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f0 = D_800C48E0_de;
    ((func_80272848_S1 *)(o))->unk3C = temp_f0;
    ((func_80272848_S1 *)(o))->unk28 = temp_f0;
    ((func_80272848_S1 *)(o))->unk0 = temp_f0;
    ((func_80272848_S1 *)(o))->unk38 = zero;
    ((func_80272848_S1 *)(o))->unk34 = zero;
    ((func_80272848_S1 *)(o))->unk30 = zero;
    ((func_80272848_S1 *)(o))->unk2C = zero;
    ((func_80272848_S1 *)(o))->unk24 = zero;
    ((func_80272848_S1 *)(o))->unk20 = zero;
    ((func_80272848_S1 *)(o))->unk1C = zero;
    ((func_80272848_S1 *)(o))->unkC = zero;
    ((func_80272848_S1 *)(o))->unk8 = zero;
    ((func_80272848_S1 *)(o))->unk4 = zero;
    temp_f3 = temp_f0 / ((func_8024C864_S1 *)(arg1))->unk4;
    temp_f2 = ((func_8024C864_S1 *)(arg1))->unk0 * temp_f3;
    temp_f1 = ((func_8024C864_S1 *)(arg1))->unk8 * temp_f3;
    ((func_80272848_S1 *)(o))->unk34 = arg2;
    ((func_80272848_S1 *)(o))->unk14 = zero;
    ((func_80272848_S1 *)(o))->unk10 = -temp_f2;
    ((func_80272848_S1 *)(o))->unk18 = -temp_f1;
    ((func_80272848_S1 *)(o))->unk30 = arg2 * temp_f2;
    ((func_80272848_S1 *)(o))->unk38 = arg2 * temp_f1;
}

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

/** Copy the three floating components at offset 0x30. */
void func_802732D0_de(char *object, float *output) {
    output[0] = ((func_80247F08_S1 *)(object))->unk30;
    output[1] = ((func_80247F08_S1 *)(object))->unk34;
    output[2] = ((func_80247F08_S1 *)(object))->unk38;
}

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

void func_802733B4_de(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    char *o = (char *)arg0;

    ((func_80272908_S2 *)(o))->unk30 = ((func_80272908_S2 *)(o))->unk30 + (arg1 * ((func_80272908_S2 *)(o))->unk0 + arg2 * ((func_80272908_S2 *)(o))->unk10 + arg3 * ((func_80272908_S2 *)(o))->unk20);
    ((func_80272908_S2 *)(o))->unk34 = ((func_80272908_S2 *)(o))->unk34 + (arg1 * ((func_80272908_S2 *)(o))->unk4 + arg2 * ((func_80272908_S2 *)(o))->unk14 + arg3 * ((func_80272908_S2 *)(o))->unk24);
    ((func_80272908_S2 *)(o))->unk38 = ((func_80272908_S2 *)(o))->unk38 + (arg1 * ((func_80272908_S2 *)(o))->unk8 + arg2 * ((func_80272908_S2 *)(o))->unk18 + arg3 * ((func_80272908_S2 *)(o))->unk28);
}

/** Add three floating arguments to the vector at offset 0x30. */
void func_80273448_de(char *object, float x, float y, float z) {
    ((func_80247F08_S1 *)(object))->unk30 += x;
    ((func_80247F08_S1 *)(object))->unk34 += y;
    ((func_80247F08_S1 *)(object))->unk38 += z;
}

/** Scale the first three rows of a matrix's basis columns by sx, sy, sz. */
void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    ((func_80272BA8_S2 *)(o))->unk0 = ((func_80272BA8_S2 *)(o))->unk0 * sx;
    ((func_80272BA8_S2 *)(o))->unk4 = ((func_80272BA8_S2 *)(o))->unk4 * sx;
    ((func_80272BA8_S2 *)(o))->unk8 = ((func_80272BA8_S2 *)(o))->unk8 * sx;
    ((func_80272BA8_S2 *)(o))->unk10 = ((func_80272BA8_S2 *)(o))->unk10 * sy;
    ((func_80272BA8_S2 *)(o))->unk14 = ((func_80272BA8_S2 *)(o))->unk14 * sy;
    ((func_80272BA8_S2 *)(o))->unk18 = ((func_80272BA8_S2 *)(o))->unk18 * sy;
    ((func_80272BA8_S2 *)(o))->unk20 = ((func_80272BA8_S2 *)(o))->unk20 * sz;
    ((func_80272BA8_S2 *)(o))->unk24 = ((func_80272BA8_S2 *)(o))->unk24 * sz;
    ((func_80272BA8_S2 *)(o))->unk28 = ((func_80272BA8_S2 *)(o))->unk28 * sz;
}
