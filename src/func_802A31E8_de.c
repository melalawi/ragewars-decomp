#include "common/types.h"
#include "span_1000/code_802A31F4.h"
#include "span_1000/types.h"
#include "types.h"



extern f32 D_800C5DE8_de[];
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027207C_de(Vec3 *);
extern void func_80272B38_de(void *, void *, void *);
extern void func_80271F9C_de(Vec3 *, Vec3 *, f32);
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_802727D8_de(void *);













void func_802A31E8_de(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 setup[4];
    Vec3 first;
    Vec3 basis;
    Vec3 cross;
    Vec3 result;
    f32 neg_y;
    f32 neg_z;

    func_80271F68_de(&first, &((func_802A41D8_S1 *)(arg0))->unk10.v0,
                  &((func_802A41D8_S2 *)(arg1))->unk10);
    func_8027207C_de(&first);
    setup[0] = 0;
    setup[1] = 0;
    *(f32 *)&setup[2] = D_800C5DE8_de[1];
    func_80272B38_de(&((func_802A41D8_S3 *)(arg2))->unk1A0, setup, &basis);
    neg_y = -basis.y;
    neg_z = -basis.z;
    basis.y = neg_y;
    basis.z = neg_z;
    func_80271F9C_de(&cross, &basis,
                  basis.x * first.x + neg_y * first.y + neg_z * first.z);
    func_80271F68_de(&cross, &first, &cross);
    func_8027207C_de(&cross);
    func_80272018_de(&result, &basis, &cross);
    func_8027207C_de(&result);
    func_80271F9C_de(&result, &result, ((func_802A41D8_S1 *)(arg0))->unk1C);
    func_80271F9C_de(&cross, &cross, ((func_802A41D8_S1 *)(arg0))->unk20);
    func_80271F9C_de(&basis, &basis, ((func_802A41D8_S1 *)(arg0))->unk24);
    func_802727D8_de(arg3);
    ((func_80272908_S2 *)(arg3))->unk0 = result.x;
    ((func_80272908_S2 *)(arg3))->unk4 = result.y;
    ((func_80272908_S2 *)(arg3))->unk8 = result.z;
    ((func_80272908_S2 *)(arg3))->unk10 = cross.x;
    ((func_80272908_S2 *)(arg3))->unk14 = cross.y;
    ((func_80272908_S2 *)(arg3))->unk18 = cross.z;
    ((func_80272908_S2 *)(arg3))->unk20 = basis.x;
    ((func_80272908_S2 *)(arg3))->unk24 = basis.y;
    ((func_80272908_S2 *)(arg3))->unk28 = basis.z;
    ((func_80272908_S2 *)(arg3))->unk30 = ((func_802A41D8_S1 *)(arg0))->unk10.v1;
    ((func_80272908_S2 *)(arg3))->unk34 = ((func_802A41D8_S5 *)(arg0))->unk14;
    ((func_80272908_S2 *)(arg3))->unk38 = ((func_802A41D8_S5 *)(arg0))->unk18;
}
