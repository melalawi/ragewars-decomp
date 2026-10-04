#include "common/types.h"
#include "span_1000/code_802AD4B4.h"
#include "span_1000/types.h"
#include "types.h"

extern char D_800CE0B0;




void *func_802ACA20_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800CE0B0;
    i = 2;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x10;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}
