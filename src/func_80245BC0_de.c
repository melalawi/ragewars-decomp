#include "span_1000/code_80245980.h"
#include "shared/func_80245BC0_de_closed.h"

void func_80245BC0_de(void) {
    if (D_800DE7E0->closed == 0) {
        {
            void *temp_a1 = D_800DE7E0->owner;
            if (temp_a1 != 0) {
                func_80253838_de(0, temp_a1);
            }
        }
        {
            void *record = D_800DE7E0;
            FuncPtr fn = ((Shared_MenuContext *)(record))->onClose;

            ((Shared_MenuContext *)(record))->owner = 0;
            ((Shared_MenuContext *)(record))->resource = 0;
            ((Shared_MenuContext *)(record))->active = 0;
            ((Shared_MenuContext *)(record))->state3C = 0;
            ((Shared_MenuContext *)(record))->unknown60 = 0;
            if (fn != 0) {
                ((Shared_MenuContext *)(record))->onClose = 0;
                fn();
            }
        }
        D_800DE7E0->closed = 1;
    }
}
