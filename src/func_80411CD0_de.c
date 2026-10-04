#include "common/types.h"
#include "span_16E000/code_80410E9C.h"
extern char *D_8014D998;

short func_80411CD0_de(int index) {
    return ((struct func_8021C9B4_S3 *) ((struct ObjectLinks490 *) (D_8014D998 + (index * 1180)))->unk_48C)->unkC;
}
