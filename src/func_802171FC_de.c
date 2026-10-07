#include "span_1000/code_80213ED4.h"
#include "shared/func_802171FC_de_closed.h"

void func_802171FC_de(void *arg0, void *arg1) {
    FuncPtr fn = ((struct CallbackState114 *)(arg1))->callback;
    if (fn != 0) {
        fn();
    }
}
