#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022F3E8.h"
#include "types.h"







extern void *D_800D052C[];




extern void func_80271F9C_de(void *, void *, f32);
extern void func_80272CB0_de(void *, s32, s32, s32);
extern void func_802732D0_de(char *, f32 *);
extern void func_80226DD0_de(char *, Matrix *);
extern void func_80226C60_de(char *object, Vector4f *output);
extern void func_80274244_de(void *, void *);
extern void func_80273448_de(char *, f32, f32, f32);
extern void func_80273D6C_de(void *);
extern void func_8026F620_de(void *, void *, void *);







void func_8022F5E0_de(char *arg0) {
    Vec3 sp10;
    Matrix sp20;
    Vec3 sp60;
    Vec3 sp70;
    Matrix sp80;
    Matrix spC0;
    Vector4f sp100;
    char *object;
    char *orientation;

    object = ((ObjectLinks1DC *)(arg0))->unk_1D8;
    sp70 = ((struct ObjectState44 *) D_800D052C[((ObjectState630 *) object)->unk_62E])->unk_38;
    if (D_800CA040_de != 0) {
        sp70.x = -sp70.x;
    }
    if (D_800CA044 != 0) {
        sp70.y = -sp70.y;
    }
    if (D_800CA048 != 0) {
        sp70.z = -sp70.z;
    }
    func_80271F9C_de(&sp60, &((ObjectLinks1DC *)(arg0))->unk_50, 0.1f);
    func_80272CB0_de(&sp80, *(s32 *)&sp60.x, *(s32 *)&sp60.y, *(s32 *)&sp60.z);
    func_80271F9C_de(&sp70, &sp70, -10.24f);
    if (((ObjectState630 *)(object))->unk_5DC.v0 != 0) {
        func_802732D0_de(((ObjectState630 *)(object))->unk_5DC.v1 + 0x160, &sp10);
        func_80274244_de((Vector4f *)(((ObjectState630 *)(object))->unk_5DC.v1 + 0x140),
                      &sp20);
    } else {
        func_80226DD0_de(object, &spC0);
        func_80226C60_de(object, &sp100);
        func_802732D0_de((char *)&spC0, &sp10);
        func_80274244_de(&sp100, &sp20);
    }
    orientation = arg0 + 0x74;
    func_80273448_de(&sp80, sp70.x, sp70.y, sp70.z);
    func_80273D6C_de(&sp80);
    func_8026F620_de((Matrix *)orientation, &sp80, &sp20);
    func_80273448_de((Matrix *)orientation, sp10.x, sp10.y, sp10.z);
}
