#include "span_16E000/code_80403BCC.h"
#include "types.h"

/* Returns entry i of D_80153500 when entry i of the state table D_801534F0 is 3, otherwise -2. */
extern s32 D_8014D260[];
extern s32 D_8014D270[];

s32 func_80404F04_de(s32 index) {
    if (D_8014D260[index] != 3) {
        return -2;
    }
    return D_8014D270[index];
}
