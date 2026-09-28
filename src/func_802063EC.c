#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern char D_80135210;

extern s32 func_80262D00(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, Triple arg5, f32 arg6, Triple arg7,
                         Triple arg8, void *arg9);

void func_802063EC(void *arg0, void *arg1, Triple arg2, Triple arg3,
                   s32 arg4, s32 arg5, s32 arg6) {
    if (func_80262D00(&D_80135210, arg5, 0, arg6,
                      arg4, arg2,
                      *(f32 *)((char *)arg0 + 0x6C),
                      *(Triple *)((char *)arg0 + 0x1C), arg3,
                      (char *)arg1 + 0x124) != 0) {
        *(s32 *)((char *)arg1 + 0x128) -= 1;
    }
}
