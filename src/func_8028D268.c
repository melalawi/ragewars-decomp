#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_80271FD8(Vec3 *out, void *arg1, void *arg2);
extern f32 D_800CA3F0;

typedef struct func_8028D268_S1 func_8028D268_S1;
typedef struct func_8028D268_S2 func_8028D268_S2;
typedef struct func_8028D268_S3 func_8028D268_S3;
struct func_8028D268_S1 {
    char pad0[0x7C];
    void* unk7C;
};
struct func_8028D268_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    char unk8;
};
struct func_8028D268_S3 {
    char pad0[0x38];
    char unk38;
};

s32 func_8028D268(void *arg0, s32 arg1, void *arg2) {
    Vec3 position;
    void *list;
    void *item;
    f32 distSq;
    f32 bestDist;
    f32 bestIndex;
    s32 count;
    s32 index;

    bestIndex = D_800CA3F0;
    bestDist = 0.0f;
    index = 0;
    list = func_8028FD94(func_8028FD94(((func_8028D268_S1 *)(arg0))->unk7C, arg1), 1);
    count = ((func_8028D268_S2 *)(list))->unk4;
    item = &((func_8028D268_S2 *)(list))->unk8;
    if (count > 0) {
        do {
            func_80271FD8(&position, arg2, item);
            distSq = (position.x * position.x) +
                     (position.y * position.y) +
                     (position.z * position.z);
            if ((bestIndex < 0.0f) || (distSq < bestDist)) {
                bestIndex = (f32)index;
                bestDist = distSq;
            }
            index += 1;
            item = &((func_8028D268_S3 *)(item))->unk38;
        } while (index < count);
    }
    return (s32)bestIndex;
}
