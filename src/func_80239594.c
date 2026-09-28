#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern f32 D_800C8638;

void *func_80239594(void *arg0, Vec3 *arg1) {
    Vec3 position;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    func_802725BC(&arg1->x, 20000.0f);
    if (*(s32 *)((char *)arg0 + 0x1200) != 0) {
        return (char *)arg0 + 0x40;
    }
    node = *(void **)((char *)arg0 + 0x20);
    bestDist = D_800C8638;
    bestNode = 0;
    if (node != 0) {
        do {
            func_80271FD8(&position, arg1, (Vec3 *)((char *)node + 0x128));
            distSq = (position.x * position.x) +
                     (position.y * position.y) +
                     (position.z * position.z);
            if (distSq < bestDist) {
                bestNode = node;
                bestDist = distSq;
            }
            node = *(void **)((char *)node + 4);
        } while (node != 0);
    }
    if (bestNode == 0) {
        return (char *)arg0 + 0x40;
    }
    return bestNode;
}
