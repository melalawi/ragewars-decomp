#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802022E0.h"

extern Vec3 D_800C19F0;






extern f32 D_800C1A08_de;




extern void func_8027207C_de(Vec3 *);

extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);



Vector4f func_80202CA0_de(Vec3 *dir) {
    Vector4f q;
    Vec3 up;
    Vec3 axis;
    f32 angle;
    f32 turn;

    up = D_800C19F0;
    func_8027207C_de(dir);
    if (dir->y > D_800C19FC_de) {
        q.x = q.y = q.z = 0.0f;
        q.w = D_800C1A00_de;
    } else if (dir->y < D_800C1A04_de) {
        angle = D_800C1A08_de;
        q.x = D_80115DEC = func_802B7130_de(angle);
        q.y = 0.0f;
        q.z = 0.0f;
        q.w = func_802B6560_de(angle);
    } else {
        turn = func_802745D0_de(dir->x * up.x + dir->y * up.y + dir->z * up.z);
        func_80272018_de(&axis, &up, dir);
        func_8027207C_de(&axis);
        angle = turn * D_800C1A0C;
        D_80115DEC = func_802B7130_de(angle);
        q.x = axis.x * D_80115DEC;
        q.y = axis.y * D_80115DEC;
        q.z = axis.z * D_80115DEC;
        q.w = func_802B6560_de(angle);
    }
    return q;
}

