#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "types.h"








s32 func_80209874_de(void *arg0, s32 arg1) {
    void *node;
    s32 *entry;
    s32 *found;
    SharedCallback5 callback;

    node = ((ObjectLinks220 *)(arg0))->unk_214;
    found = 0;
    ((ObjectLinks220 *)(arg0))->unk_21C = arg1;
    while (node != 0) {
        entry = &((struct Shape_typemap_30 *)(node))->field_20;
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
    ((ObjectLinks220 *)(arg0))->unk_218 = found;
    callback = ((struct CallbackState8 *) found)->callback;
    if (callback != 0) {
        callback(*(void **)arg0, 0);
    }
    return 1;
}
