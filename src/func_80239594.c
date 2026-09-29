#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern f32 D_800C8638;

typedef struct func_80239594_S1 func_80239594_S1;
typedef struct func_80239594_S2 func_80239594_S2;
struct func_80239594_S1 {
    char pad0[0x20];
    void* unk20;
    char pad20[0x40 - 0x20 - sizeof(void*)];
    char unk40;
    char pad40[0x1200 - 0x40 - sizeof(char)];
    s32 unk1200;
};
struct func_80239594_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x128 - 0x4 - sizeof(void*)];
    Vec3 unk128;
};

void *func_80239594(void *arg0, Vec3 *arg1) {
    Vec3 position;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    func_802725BC(&arg1->x, 20000.0f);
    if (((func_80239594_S1 *)(arg0))->unk1200 != 0) {
        return &((func_80239594_S1 *)(arg0))->unk40;
    }
    node = ((func_80239594_S1 *)(arg0))->unk20;
    bestDist = D_800C8638;
    bestNode = 0;
    if (node != 0) {
        do {
            func_80271FD8(&position, arg1, &((func_80239594_S2 *)(node))->unk128);
            distSq = (position.x * position.x) +
                     (position.y * position.y) +
                     (position.z * position.z);
            if (distSq < bestDist) {
                bestNode = node;
                bestDist = distSq;
            }
            node = ((func_80239594_S2 *)(node))->unk4;
        } while (node != 0);
    }
    if (bestNode == 0) {
        return &((func_80239594_S1 *)(arg0))->unk40;
    }
    return bestNode;
}
