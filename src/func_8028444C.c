#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern void func_80284544(void *arg0, void *arg1);

void *func_8028444C(void *arg0, s32 arg1) {
    void *node;
    s32 index;
    s32 i;

    index = arg1;
    if (*(void **)((char *)arg0 + 0xFC00) == 0) {
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

    node = *(void **)((char *)arg0 + 0xFC00);
    if (node == 0) {
        return 0;
    }

    func_80255E78((char *)arg0 + 0xFC00, (s32)node);
    {
        void *insert_slot;

        insert_slot = (char *)arg0 + 0xFC28 + (index & 0xFF) * 0x14;
        func_80255C58(insert_slot, (s32)node);
        *(void **)((char *)node + 0x1E4) = insert_slot;
    }
    *(s32 *)((char *)node + 0x1F4) = 0;
    *(s32 *)((char *)node + 0x1F0) = 0;
    *(s32 *)((char *)node + 0x5C) = 0x100;
    return node;
}
