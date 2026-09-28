#include "basetypes.h"

typedef struct { f32 x, y, z; } Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

void *func_8022B2F4(void *arg0, void *arg1) {
    Vector3 sp10;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    node = *(void **)((char *)arg0 + 0x20);
    bestDist = 0.0f;
    bestNode = 0;
    if (node != 0) {
        do {
            if (*(s32 *)((char *)node + 0x5D0) != 0 &&
                *(f32 *)((char *)node + 0x11FC) != 0.0f) {
                func_80271FD8(&sp10, arg1, (char *)node + 0x1200);
                distSq = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
                if (bestNode == 0 || distSq < bestDist) {
                    bestNode = node;
                    bestDist = distSq;
                }
            }
            node = *(void **)((char *)node + 0x16E0);
        } while (node != 0);
    }
    return bestNode;
}
