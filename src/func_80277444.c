#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    u8 raw[0xBC];
} Object;

extern f32 D_800C9BC8;
extern void func_80272908(void *, void *, void *);
extern void func_80272BA8(void *arg0, void *arg1, void *arg2);
extern void func_802720EC(f32 *);
extern s32 func_80277198(void *arg0, f32 arg1, f32 arg2, f32 arg3,
                        f32 *arg4, f32 *arg5);
extern void func_8027200C(void *, void *, f32);

#define OBJ_U8(obj, off) (*(u8 *)((char *)(obj) + (off)))
#define OBJ_F32(obj, off) (*(f32 *)((char *)(obj) + (off)))
#define DATA_F32(data, off) (*(f32 *)((char *)(data) + (off)))

s32 func_80277444(Object *arg0, Vec3 arg1, Vec3 arg4, void *arg7,
                  Vec3 *arg8, f32 *arg9) {
    Vec3 second;
    Vec3 first;
    Vec3 normal;
    f32 amount;
    f32 dot;
    f32 value;
    f32 objectValue;

    if (OBJ_U8(arg0, 0xB9) != 0) {
        first.x = arg1.x * DATA_F32(arg7, 0x00);
        first.y = arg1.y * DATA_F32(arg7, 0x14);
        first.z = arg1.z * DATA_F32(arg7, 0x28);
        first.x += DATA_F32(arg7, 0x30);
        first.y += DATA_F32(arg7, 0x34);
        first.z += DATA_F32(arg7, 0x38);
        second.x = arg4.x * DATA_F32(arg7, 0x00);
        second.y = arg4.y * DATA_F32(arg7, 0x14);
        second.z = arg4.z * DATA_F32(arg7, 0x28);
    } else {
        func_80272908(arg7, &arg1.x, &first);
        func_80272BA8(arg7, &arg4.x, &second);
    }
    func_802720EC(&second.x);
    if (func_80277198(arg0, first.x, first.y, first.z,
                     &normal.x, &amount) == 0) {
        return 0;
    }
    {
        dot = -((normal.x * second.x) + (normal.y * second.y) +
                (normal.z * second.z));
        if (dot < 0.0f) {
            dot = 0.0f;
        }
        objectValue = OBJ_F32(arg0, 4);
        value = amount * (objectValue +
                          (dot * (D_800C9BC8 - objectValue)));
        amount = value;
        if (value <= 0.0f) {
            amount = 0.0f;
        }
        if (OBJ_U8(arg0, 0xB8) != 0) {
            amount = -amount;
        }
        if (arg9 != 0) {
            *arg9 = amount;
        }
        func_8027200C(arg8, (char *)arg0 + 8, amount);
    }
    return 1;
}
