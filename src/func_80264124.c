#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct {
    char pad00[8];
    s32 x;
    s32 y;
    s32 z;
    char pad14[0xB4];
    s32 active;
    s32 state;
    f32 amount;
    f32 timer;
    char status[0x68];
    char object[1];
} Obj80264124;

extern f32 D_800C93F8;
extern s32 D_8010EC90;
extern s32 D_8013B29C;
extern s32 D_80146894;

extern void func_80285D00(s32 *);
extern void func_80285C48(void *arg0);
extern f32 func_802856B0(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern unsigned int func_802BCEE4(void *arg0);
extern unsigned int func_802BCD20(void *arg0);

void func_80264124(Obj80264124 *arg0) {
    Vec3i zero;
    void *object;
    s32 *global;
    f32 first;

    if (arg0->active != 0) {
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        if (arg0->state == 0) {
            goto reset;
        }
        global = &D_80146894;
        if ((*global != 0) || (D_8013B29C != 0) || (global[-6] != 13)) {
reset:
            arg0->amount = 0.0f;
            func_80285D00(arg0->object);
        } else {
            object = arg0->object;
            func_80285C48(object);
            first = func_802856B0(&D_8010EC90, arg0->x, arg0->y, arg0->z);
            arg0->amount = first + func_802856B0(object, zero.x, zero.y, zero.z);
        }
        if (arg0->active != 0) {
            if (arg0->amount != 0.0f) {
                arg0->timer += arg0->amount;
                if (arg0->timer >= D_800C93F8) {
                    arg0->timer -= D_800C93F8;
                    func_802BCEE4((void *)arg0->status);
                    return;
                }
            }
            func_802BCD20((void *)arg0->status);
        }
    }
}
