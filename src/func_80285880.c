#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vector3i;

extern s32 D_8011FE88;
extern void *func_8028CE54(void *object, int index);
extern void func_80264E00(unsigned int *record, unsigned int value);

void func_80285880(void *arg0, void *arg1, Vector3i arg2,
                   f32 arg5, f32 arg6, void **arg7) {
    *(void **)((char *)arg0 + 8) = arg1;
    *(Vector3i *)((char *)arg0 + 0xC) = arg2;
    *(f32 *)((char *)arg0 + 0x18) = arg5;
    *(f32 *)((char *)arg0 + 0x1C) = arg6;
    *(void ***)((char *)arg0 + 0x38) = arg7;
    if (arg7 != 0) {
        *arg7 = arg0;
    }
    func_80264E00((unsigned int *)((char *)arg0 + 0x20),
                  (unsigned int)func_8028CE54(&D_8011FE88, *(s16 *)arg1));
    func_80264E00((unsigned int *)((char *)arg0 + 0x2C),
                  (unsigned int)func_8028CE54(&D_8011FE88, *(s16 *)((char *)arg1 + 2)));
}
