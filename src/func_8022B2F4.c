#include "basetypes.h"

typedef struct { f32 x, y, z; } Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

typedef struct func_8022B2F4_S1 func_8022B2F4_S1;
typedef struct func_8022B2F4_S2 func_8022B2F4_S2;
struct func_8022B2F4_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022B2F4_S2 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x16E0 - 0x11FC - sizeof(f32)];
    void* unk16E0;
};

void *func_8022B2F4(void *arg0, void *arg1) {
    Vector3 sp10;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    node = ((func_8022B2F4_S1 *)(arg0))->unk20;
    bestDist = 0.0f;
    bestNode = 0;
    if (node != 0) {
        do {
            if (((func_8022B2F4_S2 *)(node))->unk5D0 != 0 &&
                ((func_8022B2F4_S2 *)(node))->unk11FC != 0.0f) {
                func_80271FD8(&sp10, arg1, (char *)node + 0x1200);
                distSq = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
                if (bestNode == 0 || distSq < bestDist) {
                    bestNode = node;
                    bestDist = distSq;
                }
            }
            node = ((func_8022B2F4_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
    return bestNode;
}
