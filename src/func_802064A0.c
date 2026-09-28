#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vector3i;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vector4f;

extern char D_80121990;
extern s32 func_80280094(void *, void *, void *, void *, s32, s32,
                         Vector3i, Vector4f, Vector3i, s32, s32, s32);

void func_802064A0(void *arg0, void *arg1, Vector3i arg2,
                   s32 unused5, s32 arg6) {
    s32 result;

    result = func_80280094(&D_80121990, arg0, arg0,
                           (char *)arg1 + 0x124, 0, arg6,
                           *(Vector3i *)((char *)arg0 + 0x1C),
                           *(Vector4f *)((char *)arg0 + 0x5C),
                           arg2, 0, -1, 0);
    *(s32 *)((char *)arg1 + 0x128) -= result;
}
