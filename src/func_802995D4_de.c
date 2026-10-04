#include "common/types.h"
#include "span_1000/code_80299FC4.h"
#include "types.h"



                                                             



extern Manager_func_802995D4_de *D_80146E00;
extern s32 func_80411DF0_de(s32 value);
extern s32 func_80297A34_de(s32, s32, s32, s32);
extern s32 func_80296E3C_de(s32, s32, s32, s32, s32);




s32 func_802995D4_de(s32 value, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Manager_func_802995D4_de *manager;
    s32 blockedValue;
    s32 index;
    s32 minusOne;
    s32 saved;
    s32 result;

    if (func_80411DF0_de(value) != 0) {
        if (value != D_80146E00->entries[D_80146E00->index].field4) {
            return 0;
        }
    }
    manager = D_80146E00;
    blockedValue = manager->blockedValue;
    index = manager->index;
    minusOne = -1;
    if ((value == blockedValue) || (index == minusOne)) {
        return 0;
    }
    if (D_80146E00->callback != 0) {
        saved = D_80146E00->dispatching;
        D_80146E00->dispatching = 0;
        result = D_80146E00->callback(arg1, arg2, arg3, arg4);
        if (D_80146E00->dispatching == 1) {
            D_80146E00->dispatching = saved;
            return result;
        }
        D_80146E00->dispatching = saved;
    }
    if (value == ((func_8021C9B4_S3 *)(D_80146E00->entries[D_80146E00->index].object))->unkC) {
        result = func_80297A34_de(arg1, arg2, arg3, arg4);
    } else {
        result = func_80296E3C_de(value, arg1, arg2, arg3, arg4);
    }
    return result;
}
