#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"





extern char D_800C95A0;
extern f32 D_800C2B48_de[];






extern void **D_800FFFCC;
extern char D_800FFFD0;


extern void func_802231D4_de(void *, void *, void *);
extern void func_8021CF28_de(Shared_Quad *, void *, void **, Shared_Quad *);
extern f32 func_802726F8_de(f32 *, f32 *);
extern s32 func_802444A4_de(void *, Vec3, Vec3, void *);
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80271AA8_de(Vec3 *);
extern void func_80274020_de(f32 *);
extern void func_80274870_de(f32 *, f32, f32);










void func_80226548_de(void *arg0, void *arg1) {
    Shared_Quad sp20;
    Shared_Quad sp30;
    Vec3 sp40;
    void *sp50;
    f32 sp54;
    f32 *position;
    f32 temp_f1;

    func_802231D4_de(arg0, arg1, &D_800C95A0);
    if (((func_80226524_S1 *)(arg0))->unk1210 != 0) {
        func_8021CF28_de(&sp20, arg0, &sp50, &sp30);
        if (sp50 != 0) {
            position = &((func_80226524_S1 *)(arg0))->unk8.v0;
            if (!(D_800C2B48_de[1] < func_802726F8_de(position, &((func_8020E674_S1 *)(sp50))->unk8.v0))) {
                if (func_802444A4_de(arg0, ((func_80226524_S1 *)(arg0))->unk8.v1,
                                     ((func_8020E674_S1 *)(sp50))->unk8.v1,
                                     &D_800FFFD0) == 0 ||
                    *D_800FFFCC == sp50) {
                    func_80271F68_de(&sp40, &((func_8020E674_S1 *)(sp50))->unk8.v1, (Vec3 *)position);
                    sp54 = func_80271AA8_de(&sp40);
                    func_80274020_de(&sp54);
                    func_80274020_de(&((func_80203908_S4 *)(arg1))->unk6C);
                    temp_f1 = ((func_80203908_S4 *)(arg1))->unk6C;
                    if (D_800C2B50_de < temp_f1) {
                        if (sp54 < D_800C2B54_de) {
                            sp54 += D_800C2B58_de;
                        } else {
                            goto positive;
                        }
                    } else {
positive:
                        temp_f1 = sp54;
                        if (D_800C2B5C_de < temp_f1 &&
                            ((func_80203908_S4 *)(arg1))->unk6C < D_800C2B60_de) {
                            ((func_80203908_S4 *)(arg1))->unk6C =
                                ((func_80203908_S4 *)(arg1))->unk6C + D_800C2B64_de;
                        }
                    }
                    func_80274870_de(&((func_80203908_S4 *)(arg1))->unk6C, sp54, D_800C9FEC);
                }
            }
        }
    }
}
