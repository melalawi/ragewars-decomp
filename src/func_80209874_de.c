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
