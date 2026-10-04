#include "common/types.h"
#include "span_1000/code_80297008.h"
#include "types.h"

/* Returns the object loaded for an identifier in the current context: reuses a cached entry whose context and identifier match and whose object still carries that identifier, and otherwise loads it through func_8040EC30_de, counts the load in D_8014D0A0 with its high-water mark in D_8014D09C, and records it while the cache holds fewer than 75 entries. */







extern Cache_func_80298170_de *D_80146E00;

extern s32 D_80146E20;
extern s32 func_80299958_de(void);
extern s32 func_80411DCC_de(s32 handle);
extern func_8021C9B4_S3 *func_8040EC30_de(s32 context, s32 id);

func_8021C9B4_S3 *func_80298170_de(s32 id) {
    func_8021C9B4_S3 *object;
    s32 context;
    s32 i;

    context = func_80411DCC_de(func_80299958_de());
    for (i = 0; i < D_80146E00->count; i++) {
        if (D_80146E00->entries[i].context == context && D_80146E00->entries[i].id == id
            && D_80146E00->entries[i].object != 0 && D_80146E00->entries[i].object->unkC == id) {
            return D_80146E00->entries[i].object;
        }
    }
    object = func_8040EC30_de(context, id & 0xFFFF);
    D_80146E20++;
    if (D_80146E1C < D_80146E20) {
        D_80146E1C = D_80146E20;
    }
    if (D_80146E00->count < 75) {
        D_80146E00->entries[D_80146E00->count].id = id;
        D_80146E00->entries[D_80146E00->count].object = object;
        D_80146E00->entries[D_80146E00->count].context = context;
        D_80146E00->count++;
    }
    return object;
}
