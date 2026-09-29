#include "basetypes.h"

extern u32 D_800D297C;

typedef struct func_802A66EC_S1 func_802A66EC_S1;
struct func_802A66EC_S1 {
    int unk0;
    char pad0[0x2588 - 0x0 - sizeof(int)];
    int unk2588;
    char pad2588[0x258C - 0x2588 - sizeof(int)];
    void* unk258C;
};

/** Reset the object and compute its trailing-data end pointer. */
void func_802A66EC(void *object) {
    u32 index = D_800D297C;
    ((func_802A66EC_S1 *)(object))->unk0 = 0;
    ((func_802A66EC_S1 *)(object))->unk2588 = 0x12C;
    ((func_802A66EC_S1 *)(object))->unk258C = (char *)object + (index * 4800 + 8);
}
