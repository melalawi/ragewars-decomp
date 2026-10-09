#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8029F3A8.h"
#include "types.h"

void func_8029EA7C_de(void *arg0, int arg1, int arg2, int arg3,
                    float arg4, float arg5, float arg6, float arg7,
                    float arg8, float arg9, float arg10, float arg11,
                    float arg12, float arg13, float arg14, float arg15, float arg16) {
    ((func_8029FA7C_S1 *)(arg0))->unk10 = arg1;
    ((func_8029FA7C_S1 *)(arg0))->unk20 = arg2;
    ((func_8029FA7C_S1 *)(arg0))->unk30 = arg3;
    ((func_8029FA7C_S1 *)(arg0))->unk40 = arg4;
    ((func_8029FA7C_S1 *)(arg0))->unk14 = arg5;
    ((func_8029FA7C_S1 *)(arg0))->unk24 = arg6;
    ((func_8029FA7C_S1 *)(arg0))->unk34 = arg7;
    ((func_8029FA7C_S1 *)(arg0))->unk44 = arg8;
    ((func_8029FA7C_S1 *)(arg0))->unk18 = arg9;
    ((func_8029FA7C_S1 *)(arg0))->unk28 = arg10;
    ((func_8029FA7C_S1 *)(arg0))->unk38 = arg11;
    ((func_8029FA7C_S1 *)(arg0))->unk48 = arg12;
    ((func_8029FA7C_S1 *)(arg0))->unk1C = arg13;
    ((func_8029FA7C_S1 *)(arg0))->unk2C = arg14;
    ((func_8029FA7C_S1 *)(arg0))->unk3C = arg15;
    ((func_8029FA7C_S1 *)(arg0))->unk4C = arg16;
}

void func_8029EAF4_de(s32 arg0) {
    func_802A0748_de(arg0, 0, 0x40);
}

void func_8029EB14_de(s32 arg0)
{
  func_802A0748_de(arg0, 0, 0x40);
  ((func_8029FB14_S1 *)(arg0))->unk3C = (((func_8029FB14_S1 *)(arg0))->unk28 = (((func_8029FB14_S1 *)(arg0))->unk14 = (((func_8029FB14_S1 *)(arg0))->unk0 = (f32) D_800C5CB8_de)));
}

void func_8029EB58_de(f32 *arg0) {
    s32 i;
    s32 j;
    s32 offset1;
    s32 offset2;
    f32 temp;

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            offset2 = j * 16 + i * 4;
            offset1 = i * 16 + j * 4;
            temp = *(f32 *)((u8 *)arg0 + offset2);
            *(f32 *)((u8 *)arg0 + offset2) =
                *(f32 *)((u8 *)arg0 + offset1);
            *(f32 *)((u8 *)arg0 + offset1) = temp;
        }
    }
}

/** Scatter three floats from arg1 into arg0's fields. */
void func_8029EBC8_de(void *arg0, void *arg1) {
    ((func_8029FBC8_S1 *)(arg0))->unk0 = ((func_8024C864_S1 *)(arg1))->unk0;
    ((func_8029FBC8_S1 *)(arg0))->unk14 = ((func_8024C864_S1 *)(arg1))->unk4;
    ((func_8029FBC8_S1 *)(arg0))->unk28 = ((func_8024C864_S1 *)(arg1))->unk8;
}

void func_8029EBE4_de(void *arg0, void *arg1) {
    char *m = (char *) arg0;
    char *v = (char *) arg1;

    ((func_80272908_S2 *)(m))->unk0 = ((func_80272908_S2 *)(m))->unk0 * ((func_8024C864_S1 *)(v))->unk0;
    ((func_80272908_S2 *)(m))->unk10 = ((func_80272908_S2 *)(m))->unk10 * ((func_8024C864_S1 *)(v))->unk0;
    ((func_80272908_S2 *)(m))->unk20 = ((func_80272908_S2 *)(m))->unk20 * ((func_8024C864_S1 *)(v))->unk0;
    ((func_80272908_S2 *)(m))->unk4 = ((func_80272908_S2 *)(m))->unk4 * ((func_8024C864_S1 *)(v))->unk4;
    ((func_80272908_S2 *)(m))->unk14 = ((func_80272908_S2 *)(m))->unk14 * ((func_8024C864_S1 *)(v))->unk4;
    ((func_80272908_S2 *)(m))->unk24 = ((func_80272908_S2 *)(m))->unk24 * ((func_8024C864_S1 *)(v))->unk4;
    ((func_80272908_S2 *)(m))->unk8 = ((func_80272908_S2 *)(m))->unk8 * ((func_8024C864_S1 *)(v))->unk8;
    ((func_80272908_S2 *)(m))->unk18 = ((func_80272908_S2 *)(m))->unk18 * ((func_8024C864_S1 *)(v))->unk8;
    ((func_80272908_S2 *)(m))->unk28 = ((func_80272908_S2 *)(m))->unk28 * ((func_8024C864_S1 *)(v))->unk8;
    ((func_80272908_S2 *)(m))->unk30 = ((func_80272908_S2 *)(m))->unk30 * ((func_8024C864_S1 *)(v))->unk0;
    ((func_80272908_S2 *)(m))->unk34 = ((func_80272908_S2 *)(m))->unk34 * ((func_8024C864_S1 *)(v))->unk4;
    ((func_80272908_S2 *)(m))->unk38 = ((func_80272908_S2 *)(m))->unk38 * ((func_8024C864_S1 *)(v))->unk8;
}

/** Broadcast a float value into three fields of the object. */
void func_8029ECA8_de(void *arg0, float value) {
    ((func_8029FBC8_S1 *)(arg0))->unk0 = value;
    ((func_8029FBC8_S1 *)(arg0))->unk14 = value;
    ((func_8029FBC8_S1 *)(arg0))->unk28 = value;
}

void func_8029ECBC_de(void *arg0, f32 arg1) {
    u8 *o = (u8 *)arg0;

    ((func_80272908_S2 *)(o))->unk0 = ((func_80272908_S2 *)(o))->unk0 * arg1;
    ((func_80272908_S2 *)(o))->unk10 = ((func_80272908_S2 *)(o))->unk10 * arg1;
    ((func_80272908_S2 *)(o))->unk20 = ((func_80272908_S2 *)(o))->unk20 * arg1;
    ((func_80272908_S2 *)(o))->unk4 = ((func_80272908_S2 *)(o))->unk4 * arg1;
    ((func_80272908_S2 *)(o))->unk14 = ((func_80272908_S2 *)(o))->unk14 * arg1;
    ((func_80272908_S2 *)(o))->unk24 = ((func_80272908_S2 *)(o))->unk24 * arg1;
    ((func_80272908_S2 *)(o))->unk8 = ((func_80272908_S2 *)(o))->unk8 * arg1;
    ((func_80272908_S2 *)(o))->unk18 = ((func_80272908_S2 *)(o))->unk18 * arg1;
    ((func_80272908_S2 *)(o))->unk28 = ((func_80272908_S2 *)(o))->unk28 * arg1;
    ((func_80272908_S2 *)(o))->unk30 = ((func_80272908_S2 *)(o))->unk30 * arg1;
    ((func_80272908_S2 *)(o))->unk34 = ((func_80272908_S2 *)(o))->unk34 * arg1;
    ((func_80272908_S2 *)(o))->unk38 = ((func_80272908_S2 *)(o))->unk38 * arg1;
}

void func_8029ED54_de(Mtx3x4_8029FD54 *arg0) {
    s32 col;
    s32 row;

    col = 0;
    row = 0;
    do {
        row = 0;
        do {
            arg0->m[row][col] = 0;
            row += 1;
        } while (row < 3);
        col += 1;
    } while (col < 3);
    arg0->m[0][0] = D_800C5CBC_de;
    arg0->m[1][1] = D_800C5CBC_de;
    arg0->m[2][2] = D_800C5CBC_de;
}

extern void func_8029C6A8_de(void *);


void func_8029EDA0_de(s32 arg0) {
    char buf[0x40];
    func_8029C6A8_de(buf);
    func_8029CE3C_de(arg0, buf, arg0);
}


extern void func_802A0748_de(s32, s32, s32);


void func_8029EDD8_de(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029BBB0_de(arg1, &sp50, &sp54);
        p = sp10;
        func_802A0748_de((s32) p, 0, 0x40);
        ((func_8029FB14_S1 *)(p))->unk0 = D_800C5CC0_de;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            ((func_8029FB14_S1 *)(p))->unk14 = D_800C5CC0_de;
            ((func_8029FB14_S1 *)(p))->unk28 = D_800C5CC0_de;
            ((func_8029FB14_S1 *)(p))->unk3C = D_800C5CC0_de;
            ((struct FloatState2C *) sp10)->unk_14 = t54;
            ((struct FloatState2C *) sp10)->unk_24 = -t50;
            ((struct FloatState2C *) sp10)->unk_18 = t50;
            ((struct FloatState2C *) sp10)->unk_28 = t54;
        }
        func_8029CE3C_de(arg0, (s32) p, arg0);
    }
}


extern void func_802A0748_de(s32, s32, s32);


void func_8029EE78_de(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029BBB0_de(arg1, &sp50, &sp54);
        p = sp10;
        func_802A0748_de((s32) p, 0, 0x40);
        ((func_8029FB14_S1 *)(p))->unk0 = D_800C5CC4_de;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            f32 t50n;
            ((func_8029FB14_S1 *)(p))->unk14 = D_800C5CC4_de;
            ((func_8029FB14_S1 *)(p))->unk28 = D_800C5CC4_de;
            ((func_8029FB14_S1 *)(p))->unk3C = D_800C5CC4_de;
            t50n = -t50;
            ((struct FloatState2C_2 *) sp10)->unk_20 = t50;
            ((struct FloatState2C_2 *) sp10)->unk_0 = t54;
            ((struct FloatState2C_2 *) sp10)->unk_8 = t50n;
            ((struct FloatState2C_2 *) sp10)->unk_28 = t54;
        }
        func_8029CE3C_de(arg0, (s32) p, arg0);
    }
}


extern void func_802A0748_de(s32, s32, s32);


void func_8029EF18_de(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029BBB0_de(arg1, &sp50, &sp54);
        p = sp10;
        func_802A0748_de((s32) p, 0, 0x40);
        ((func_8029FB14_S1 *)(p))->unk0 = D_800C5CC8_de;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            f32 t50n;
            ((func_8029FB14_S1 *)(p))->unk14 = D_800C5CC8_de;
            ((func_8029FB14_S1 *)(p))->unk28 = D_800C5CC8_de;
            ((func_8029FB14_S1 *)(p))->unk3C = D_800C5CC8_de;
            t50n = -t50;
            ((struct FloatState18 *) sp10)->unk_0 = t54;
            ((struct FloatState18 *) sp10)->unk_10 = t50n;
            ((struct FloatState18 *) sp10)->unk_4 = t50;
            ((struct FloatState18 *) sp10)->unk_14 = t54;
        }
        func_8029CE3C_de(arg0, (s32) p, arg0);
    }
}

/** Clear the three words at object offsets 0x30 through 0x38. */
void func_8029EFB8_de(void *arg0) {
    ((func_8029FFB8_S1 *)(arg0))->unk30 = 0;
    ((func_8029FFB8_S1 *)(arg0))->unk34 = 0;
    ((func_8029FFB8_S1 *)(arg0))->unk38 = 0;
}

/** Copy a three-float vector into object offsets 0x30 through 0x38. */
void func_8029EFC8_de(void *arg0, float *arg1) {
    ((func_80247F08_S1 *)(arg0))->unk30 = arg1[0];
    ((func_80247F08_S1 *)(arg0))->unk34 = arg1[1];
    ((func_80247F08_S1 *)(arg0))->unk38 = arg1[2];
}

/** Copy the three floating components at offset 0x30. */
void func_8029EFE4_de(char *object, float *output) {
    output[0] = ((func_80247F08_S1 *)(object))->unk30;
    output[1] = ((func_80247F08_S1 *)(object))->unk34;
    output[2] = ((func_80247F08_S1 *)(object))->unk38;
}

void func_8029F000_de(void *arg0, void *arg1) {
    (((struct func_80247F08_S1 *) ((s8 *) arg0))->unk30) = (f32) ((((struct func_80247F08_S1 *) ((s8 *) arg0))->unk30) + (((struct Vec3 *) ((s8 *) arg1))->x));
    (((struct func_80247F08_S1 *) ((s8 *) arg0))->unk34) = (f32) ((((struct func_80247F08_S1 *) ((s8 *) arg0))->unk34) + (((struct Vec3 *) ((s8 *) arg1))->y));
    (((struct func_80247F08_S1 *) ((s8 *) arg0))->unk38) = (f32) ((((struct func_80247F08_S1 *) ((s8 *) arg0))->unk38) + (((struct Vec3 *) ((s8 *) arg1))->z));
}

/** Combine three column vectors into the first three matrix columns. */
void func_8029F034_de(float *arg0, float *arg1, float *arg2, float *arg3) {
    arg0[0] = arg1[0];
    arg0[4] = arg1[1];
    arg0[8] = arg1[2];
    arg0[1] = arg2[0];
    arg0[5] = arg2[1];
    arg0[9] = arg2[2];
    arg0[2] = arg3[0];
    arg0[6] = arg3[1];
    arg0[10] = arg3[2];
}

/** Split the first three matrix columns into three vectors. */
void func_8029F080_de(float *arg0, float *arg1, float *arg2, float *arg3) {
    arg1[0] = arg0[0];
    arg1[1] = arg0[4];
    arg1[2] = arg0[8];
    arg2[0] = arg0[1];
    arg2[1] = arg0[5];
    arg2[2] = arg0[9];
    arg3[0] = arg0[2];
    arg3[1] = arg0[6];
    arg3[2] = arg0[10];
}

/** Write three row vectors into the first three matrix rows. */
void func_8029F0CC_de(float *arg0, float *arg1, float *arg2, float *arg3) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    arg0[2] = arg1[2];
    arg0[4] = arg2[0];
    arg0[5] = arg2[1];
    arg0[6] = arg2[2];
    arg0[8] = arg3[0];
    arg0[9] = arg3[1];
    arg0[10] = arg3[2];
}

/** Split the first three matrix rows into three row vectors. */
void func_8029F118_de(float *arg0, float *arg1, float *arg2, float *arg3) {
    arg1[0] = arg0[0];
    arg1[1] = arg0[1];
    arg1[2] = arg0[2];
    arg2[0] = arg0[4];
    arg2[1] = arg0[5];
    arg2[2] = arg0[6];
    arg3[0] = arg0[8];
    arg3[1] = arg0[9];
    arg3[2] = arg0[10];
}



/** Thin wrapper forwarding arg0 twice (as first and third args) to func_8029CE3C_de. */
void func_8029F164_de(int arg0, int arg1) {
    func_8029CE3C_de(arg0, arg1, arg0);
}

void func_8029F180_de(s32 arg0, s32 arg1) {
    func_8029CE3C_de(arg0, arg0, arg1);
}

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
