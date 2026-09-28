#include "basetypes.h"

typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
typedef struct { Triple v; s32 w; } Config;

extern Triple D_801042C8;
extern Config D_80104290;
extern char D_80121990;

extern void func_80271888(Quad *out, Triple *in);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);

void func_80283454(void *arg0, s32 arg1) {
    Quad q;
    Triple pos;

    if ((**(s32 **)((char *)arg0 + 0x118) & 0x10) != 0) {
        pos = D_801042C8;
    } else {
        pos = *(Triple *)((char *)arg0 + 0x1C);
    }
    func_80271888(&q, &pos);
    func_80280094(&D_80121990, arg0,
                  *(void **)((char *)arg0 + 0x12C),
                  *(s32 *)((char *)arg0 + 0x130),
                  *(s32 *)((char *)arg0 + 0x134), arg1,
                  pos, q, D_80104290.v, 0, D_80104290.w,
                  (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
}
