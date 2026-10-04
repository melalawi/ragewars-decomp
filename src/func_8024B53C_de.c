#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "types.h"



extern s32 func_80245798_de(void);
extern void func_8024D728_de(Vector4f *arg0, void *arg1);
extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);
extern void func_80274098_de(Vector4f *arg0, Vector4f *arg1, Vector4f *arg2);
extern void func_80274244_de(void *, void *);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_8027254C_de(f32 *arg0, f32 arg1);
extern void func_80273448_de(char *, f32, f32, f32);
extern void func_80273D6C_de(void *);

extern f32 D_80111D2C;




void func_8024B53C_de(void *arg0) {
    Vector4f trig;
    Vector4f product;
    Vector4f copy;
    Vector4f *copy_ptr;
    Vector4f *product_ptr;
    char *transform;
    f32 scale;
    f32 sine;
    f32 angle;

    copy = ((func_8024B52C_S1 *)(arg0))->unk5C;
    copy_ptr = &copy;
    if (func_80245798_de() != 0) {
        func_8024D728_de(copy_ptr, arg0);
    }

    angle = ((func_8024B52C_S1 *)(arg0))->unk6C;
    scale = (0.5f);
    sine = func_802B7130_de(angle * scale);
    trig.x = 0.0f;
    trig.y = sine;
    trig.z = 0.0f;
    angle = ((func_8024B52C_S1 *)(arg0))->unk6C * scale;
    D_80111D2C = sine;
    trig.w = func_802B6560_de(angle);

    product_ptr = &product;
    func_80274098_de(product_ptr, &trig, copy_ptr);
    transform = &((func_8024B52C_S1 *)(arg0))->unk74;
    func_80274244_de(product_ptr, transform);
    func_8027347C_de(transform, ((func_8024B52C_S1 *)(arg0))->unk50,
                    ((func_8024B52C_S1 *)(arg0))->unk54,
                    ((func_8024B52C_S1 *)(arg0))->unk58);
    func_8027254C_de(&((func_8024B52C_S1 *)(arg0))->unk8, 20000.0f);
    func_80273448_de(transform, ((func_8024B52C_S1 *)(arg0))->unk8,
                   ((func_8024B52C_S1 *)(arg0))->unkC,
                   ((func_8024B52C_S1 *)(arg0))->unk10);
    func_80273D6C_de(transform);
}
