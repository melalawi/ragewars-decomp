#include "common/types.h"
#include "span_1000/code_802AD4B4.h"
#include "span_1000/types.h"
#include "types.h"

extern char D_800CDEF0;




void *func_802AC91C_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800CDEF0;
    i = 3;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x18;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}
