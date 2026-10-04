#include "common/types.h"
#include "span_1000/code_802555C8.h"
#include "types.h"




void func_80256214_de(void *arg0) {
    s32 node = *(s32 *)arg0;
    if (node != 0) {
        s32 offset = ((func_80205628_S3 *)(arg0))->unkC;
        node = *(s32 *)(node + offset);
        while (node != 0) {
            node = *(s32 *)(node + offset);
        }
    }
}
