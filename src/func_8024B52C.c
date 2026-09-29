#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

extern s32 func_80245788(void);
extern void func_8024D718(Vec4 *arg0, void *arg1);
extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);
extern void func_80274108(Vec4 *arg0, Vec4 *arg1, Vec4 *arg2);
extern void func_802742B4(void *, void *);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(void *);

extern f32 D_800C8C40;
extern f32 D_80115DEC;

typedef struct func_8024B52C_S1 func_8024B52C_S1;
struct func_8024B52C_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x50 - 0x10 - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5C - 0x58 - sizeof(f32)];
    Vec4 unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Vec4)];
    f32 unk6C;
    char pad6C[0x74 - 0x6C - sizeof(f32)];
    char unk74;
};

void func_8024B52C(void *arg0) {
    Vec4 trig;
    Vec4 product;
    Vec4 copy;
    Vec4 *copy_ptr;
    Vec4 *product_ptr;
    char *transform;
    f32 scale;
    f32 sine;
    f32 angle;

    copy = ((func_8024B52C_S1 *)(arg0))->unk5C;
    copy_ptr = &copy;
    if (func_80245788() != 0) {
        func_8024D718(copy_ptr, arg0);
    }

    angle = ((func_8024B52C_S1 *)(arg0))->unk6C;
    scale = D_800C8C40;
    sine = func_802BC200(angle * scale);
    trig.x = 0.0f;
    trig.y = sine;
    trig.z = 0.0f;
    angle = ((func_8024B52C_S1 *)(arg0))->unk6C * scale;
    D_80115DEC = sine;
    trig.w = func_802BB630(angle);

    product_ptr = &product;
    func_80274108(product_ptr, &trig, copy_ptr);
    transform = &((func_8024B52C_S1 *)(arg0))->unk74;
    func_802742B4(product_ptr, transform);
    func_802734EC(transform, ((func_8024B52C_S1 *)(arg0))->unk50,
                    ((func_8024B52C_S1 *)(arg0))->unk54,
                    ((func_8024B52C_S1 *)(arg0))->unk58);
    func_802725BC(&((func_8024B52C_S1 *)(arg0))->unk8, 20000.0f);
    func_802734B8(transform, ((func_8024B52C_S1 *)(arg0))->unk8,
                   ((func_8024B52C_S1 *)(arg0))->unkC,
                   ((func_8024B52C_S1 *)(arg0))->unk10);
    func_80273DDC(transform);
}
