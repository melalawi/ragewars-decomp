#include "basetypes.h"

typedef void (*Callback)(void *arg0, s32 arg1);

typedef struct func_80209874_S1 func_80209874_S1;
typedef struct func_80209874_S2 func_80209874_S2;
struct func_80209874_S1 {
    char pad0[0x214];
    void* unk214;
    char pad214[0x218 - 0x214 - sizeof(void*)];
    s32* unk218;
    char pad218[0x21C - 0x218 - sizeof(s32*)];
    s32 unk21C;
};
struct func_80209874_S2 {
    char pad0[0x20];
    s32 unk20;
};

s32 func_80209874(void *arg0, s32 arg1) {
    void *node;
    s32 *entry;
    s32 *found;
    Callback callback;

    node = ((func_80209874_S1 *)(arg0))->unk214;
    found = 0;
    ((func_80209874_S1 *)(arg0))->unk21C = arg1;
    while (node != 0) {
        entry = &((func_80209874_S2 *)(node))->unk20;
        if (*entry != -1) {
            while (*entry != -1) {
                if (*entry == arg1) {
                    found = entry;
                    node = 0;
                    break;
                }
                entry += 8;
            }
        }
        if (node != 0) {
            node = *(void **)node;
        }
    }
    if (found == 0) {
        return 0;
    }
    ((func_80209874_S1 *)(arg0))->unk218 = found;
    callback = *(Callback *)(found + 1);
    if (callback != 0) {
        callback(*(void **)arg0, 0);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3250_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C83A8_4 = 1.0f;
const float unbake_rodata_800C83AC_4 = 0.25f;
const float unbake_rodata_800C83B0_4 = 4.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3280_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C32BC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C32B8_4 = 1.0f;
const float unbake_rodata_800C32BC_4 = 0.25f;
const float unbake_rodata_800C32C0_4 = 4.0f;
#endif
