#include "span_1000/code_80283D24.h"
#include "types.h"

extern s32 func_802744D4_de(void);

s32 func_8028480C_de(s32 arg0) {
    if (arg0 != 0) {
        return func_802744D4_de() % (arg0 + 1);
    }
    return 0;
}
