#include "span_1000/code_8022E120.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_8024E62C_de(void *arg0);
extern void func_802227F4_de(void *, void *, s32);




s32 func_8022EBD4_de(void *arg0, void *arg1) {
    if (((func_8022CA04_S3 *)(arg1))->unk20 <= 0.0f && func_8024E62C_de(arg1) != 0) {
        func_802227F4_de(arg0, arg1, 2);
        return 1;
    }
    return 0;
}
