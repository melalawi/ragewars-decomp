#include "common/types.h"
#include "span_1000/code_8026565C.h"
#include "types.h"





                                                                                             



extern CallbackEntry_func_802671FC_de D_800CC130[];

void func_802671FC_de(void *arg0, void *arg1, s32 arg2, Triple arg3, ResourceManagerState arg6) {
    if (D_800CC130[arg2].callback != 0) {
        D_800CC130[arg2].callback(arg0, arg1, arg2, arg3, arg6);
    }
}
