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

    copy = *(Vec4 *)((char *)arg0 + 0x5C);
    copy_ptr = &copy;
    if (func_80245788() != 0) {
        func_8024D718(copy_ptr, arg0);
    }

    angle = *(f32 *)((char *)arg0 + 0x6C);
    scale = D_800C8C40;
    sine = func_802BC200(angle * scale);
    trig.x = 0.0f;
    trig.y = sine;
    trig.z = 0.0f;
    angle = *(f32 *)((char *)arg0 + 0x6C) * scale;
    D_80115DEC = sine;
    trig.w = func_802BB630(angle);

    product_ptr = &product;
    func_80274108(product_ptr, &trig, copy_ptr);
    transform = (char *)arg0 + 0x74;
    func_802742B4(product_ptr, transform);
    func_802734EC(transform, *(f32 *)((char *)arg0 + 0x50),
                    *(f32 *)((char *)arg0 + 0x54),
                    *(f32 *)((char *)arg0 + 0x58));
    func_802725BC((f32 *)((char *)arg0 + 8), 20000.0f);
    func_802734B8(transform, *(f32 *)((char *)arg0 + 8),
                   *(f32 *)((char *)arg0 + 0xC),
                   *(f32 *)((char *)arg0 + 0x10));
    func_80273DDC(transform);
}
