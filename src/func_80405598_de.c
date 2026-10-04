#include "span_16E000/code_80405454.h"
#include "types.h"

/* Returns whether entry i of D_80153500 is -4 when entry i of the state table D_801534F0 is 3,
   otherwise zero. */



s32 func_80405598_de(s32 index) {
    if (D_8014D260[index] != 3) {
        return 0;
    }
    return D_8014D270[index] == -4;
}
