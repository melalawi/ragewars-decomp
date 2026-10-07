#include "span_1000/code_80204E78.h"
#include "shared/func_802052C4_de_closed.h"

void func_802052C4_de(void *arg0, void *arg1) {
    void *obj = ((Shared_CallbackOwner *)(arg1))->hook;
    if (obj != 0) {
        FuncPtr fn = ((Shared_CallbackHook *)(obj))->callback;
        if (fn != 0) {
            fn();
        }
    }
}
