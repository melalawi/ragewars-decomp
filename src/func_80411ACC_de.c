#include "span_16E000/code_80410E9C.h"
#include "types.h"

/* Returns entry i of the word array D_80153C14 points to. */
extern s32 *D_8014D984;

s32 func_80411ACC_de(s32 index) {
    return D_8014D984[index];
}
