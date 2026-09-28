#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Scratch10 {
    s32 w[4];
} Scratch10;

extern char D_800CE7E4;
extern f32 D_800C7C38[];
extern f32 D_800C7C40;
extern f32 D_800C7C44;
extern f32 D_800C7C48;
extern f32 D_800C7C4C;
extern f32 D_800C7C50;
extern f32 D_800C7C54;
extern void **D_80103FCC;
extern char D_80103FD0;
extern f32 D_800CF230;

extern void func_802231B0(void *, void *, void *);
extern void func_8021CF04(Scratch10 *, void *, void **, Scratch10 *);
extern f32 func_80272768(f32 *, f32 *);
extern s32 func_80244494(void *, Vec3, Vec3, void *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80271B18(Vec3 *);
extern void func_80274090(f32 *);
extern void func_802748E0(f32 *, f32, f32);

void func_80226524(void *arg0, void *arg1) {
    Scratch10 sp20;
    Scratch10 sp30;
    Vec3 sp40;
    void *sp50;
    f32 sp54;
    f32 *position;
    f32 temp_f1;

    func_802231B0(arg0, arg1, &D_800CE7E4);
    if (*(s32 *)((u8 *)arg0 + 0x1210) != 0) {
        func_8021CF04(&sp20, arg0, &sp50, &sp30);
        if (sp50 != 0) {
            position = (f32 *)((u8 *)arg0 + 8);
            if (!(D_800C7C38[1] < func_80272768(position, (f32 *)((u8 *)sp50 + 8)))) {
                if (func_80244494(arg0, *(Vec3 *)((u8 *)arg0 + 8),
                                     *(Vec3 *)((u8 *)sp50 + 8),
                                     &D_80103FD0) == 0 ||
                    *D_80103FCC == sp50) {
                    func_80271FD8(&sp40, (Vec3 *)((u8 *)sp50 + 8), (Vec3 *)position);
                    sp54 = func_80271B18(&sp40);
                    func_80274090(&sp54);
                    func_80274090((f32 *)((u8 *)arg1 + 0x6C));
                    temp_f1 = *(f32 *)((u8 *)arg1 + 0x6C);
                    if (D_800C7C40 < temp_f1) {
                        if (sp54 < D_800C7C44) {
                            sp54 += D_800C7C48;
                        } else {
                            goto positive;
                        }
                    } else {
positive:
                        temp_f1 = sp54;
                        if (D_800C7C4C < temp_f1 &&
                            *(f32 *)((u8 *)arg1 + 0x6C) < D_800C7C50) {
                            *(f32 *)((u8 *)arg1 + 0x6C) =
                                *(f32 *)((u8 *)arg1 + 0x6C) + D_800C7C54;
                        }
                    }
                    func_802748E0((f32 *)((u8 *)arg1 + 0x6C), sp54, D_800CF230);
                }
            }
        }
    }
}
