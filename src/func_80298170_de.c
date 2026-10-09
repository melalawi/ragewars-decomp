#include "span_1000/code_80297CD0.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80297CD0.h"
#include "span_16E000/code_8040C780.h"
#include "types.h"

/* Returns the object loaded for an identifier in the current context: reuses a cached entry whose context and identifier match and whose object still carries that identifier, and otherwise loads it through func_8040EC30_de, counts the load in D_8014D0A0 with its high-water mark in D_8014D09C, and records it while the cache holds fewer than 75 entries. */

extern s32 D_8014D080;

extern s32 D_8014D0A0;
extern s32 func_80299958_de(void);
extern void *func_80411DCC_de(s32 handle);
extern struct Tree *func_8040EC30_de(struct Tree *context, u16 id);

Element *func_80298170_de(s32 id) {
    Element *object;
    s32 context;
    s32 i;

    context = (s32)func_80411DCC_de(func_80299958_de());
    for (i = 0; i < ((Cache_func_80298170_de *)D_8014D080)->count; i++) {
        if (((Cache_func_80298170_de *)D_8014D080)->entries[i].context == context && ((Cache_func_80298170_de *)D_8014D080)->entries[i].id == id
            && ((Cache_func_80298170_de *)D_8014D080)->entries[i].object != 0 && ((Cache_func_80298170_de *)D_8014D080)->entries[i].object->id == id) {
            return ((Cache_func_80298170_de *)D_8014D080)->entries[i].object;
        }
    }
    object = (Element *)func_8040EC30_de((struct Tree *)context, id & 0xFFFF);
    D_8014D0A0++;
    if (D_8014D09C < D_8014D0A0) {
        D_8014D09C = D_8014D0A0;
    }
    if (((Cache_func_80298170_de *)D_8014D080)->count < 75) {
        ((Cache_func_80298170_de *)D_8014D080)->entries[((Cache_func_80298170_de *)D_8014D080)->count].id = id;
        ((Cache_func_80298170_de *)D_8014D080)->entries[((Cache_func_80298170_de *)D_8014D080)->count].object = object;
        ((Cache_func_80298170_de *)D_8014D080)->entries[((Cache_func_80298170_de *)D_8014D080)->count].context = context;
        ((Cache_func_80298170_de *)D_8014D080)->count++;
    }
    return object;
}
