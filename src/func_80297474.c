/* Looks up the neighbour cell for (x,y) in the object's inline grid when both axes are within 9, and sets its state from the sentinel found (or starts a placement for a normal cell). */
#include "basetypes.h"

#define ABS(x) ((x) < 0.0f ? -(x) : (x))

typedef struct Obj5 {
    char pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s16 table[400];
} Obj5;

extern s32 func_80263174(Obj5 *arg0, s32 a1, s32 a2);

void func_80297474(Obj5 *arg0, s32 x, s32 y)
{
    if (ABS(x - arg0->unk8) >= 9) {
        return;
    }

    if (ABS(y - arg0->unkC) >= 9) {
        return;
    }

    {
        s32 ddx = x - arg0->unk8;
        s32 ddy = y - arg0->unkC;
        s32 t = (ddy + 8) * 17 + 8;
        s16 val;

        ddx = ddx + t;
        val = arg0->table[ddx];

        if (val == -2) {
            arg0->unk10 = 1;
            return;
        }
        if (val == -3) {
            arg0->unk10 = 0;
            return;
        }
        if (val == -1) {
            arg0->unk10 = 3;
            return;
        }

        arg0->unk10 = 2;
        arg0->unk4 = val;
        arg0->unk14 = func_80263174(arg0, 9, y);
    }
}
