#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern void func_80284544(void *arg0, void *arg1);

typedef struct func_8028444C_S1 func_8028444C_S1;
typedef struct func_8028444C_S2 func_8028444C_S2;
typedef union func_8028444C_S1_UFC00 { void* v0; char v1; } func_8028444C_S1_UFC00;
struct func_8028444C_S1 {
    char pad0[0xFC00];
    func_8028444C_S1_UFC00 unkFC00;
    char padFC00[0xFC28 - 0xFC00 - sizeof(func_8028444C_S1_UFC00)];
    char unkFC28;
};
struct func_8028444C_S2 {
    char pad0[0x5C];
    s32 unk5C;
    char pad5C[0x1E4 - 0x5C - sizeof(s32)];
    void* unk1E4;
    char pad1E4[0x1F0 - 0x1E4 - sizeof(void*)];
    s32 unk1F0;
    char pad1F0[0x1F4 - 0x1F0 - sizeof(s32)];
    s32 unk1F4;
};

void *func_8028444C(void *arg0, s32 arg1) {
    void *node;
    s32 index;
    s32 i;

    index = arg1;
    if (((func_8028444C_S1 *)(arg0))->unkFC00.v0 == 0) {
        s32 offset;
        s32 limit;
        char *scan;

        i = 0;
        if (i <= (index & 0xFF)) {
            offset = 0xFC28;
            limit = index & 0xFF;
            scan = arg0;
            do {
                void *found;

                found = *(void **)(scan + offset + 4);
                if (found != 0) {
                    func_80284544(arg0, found);
                    break;
                }
                i += 1;
                scan += 0x14;
            } while (i <= limit);
        }
    }

    node = ((func_8028444C_S1 *)(arg0))->unkFC00.v0;
    if (node == 0) {
        return 0;
    }

    func_80255E78(&((func_8028444C_S1 *)(arg0))->unkFC00.v1, (s32)node);
    {
        void *insert_slot;

        insert_slot = &((func_8028444C_S1 *)(arg0))->unkFC28 + (index & 0xFF) * 0x14;
        func_80255C58(insert_slot, (s32)node);
        ((func_8028444C_S2 *)(node))->unk1E4 = insert_slot;
    }
    ((func_8028444C_S2 *)(node))->unk1F4 = 0;
    ((func_8028444C_S2 *)(node))->unk1F0 = 0;
    ((func_8028444C_S2 *)(node))->unk5C = 0x100;
    return node;
}
