#include "span_1000/code_80283D24.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80284434_de(void *arg0);
extern void *func_8025CC6C_de(void);
extern void *func_8025C95C_de(void *, s32, void *, void *, s32);






void func_802843B8_de(void *arg0, s32 arg1) {
    void *node;

    node = ((func_8028438C_S1 *)(arg0))->unk1DC;
    if (node != 0) {
        if (((func_80254930_S1 *)(node))->unkC == arg1 && ((func_80254930_S1 *)(node))->unk8 != -1) {
            return;
        }
        func_80284434_de(arg0);
    }
    ((func_8028438C_S1 *)(arg0))->unk1DC =
        func_8025C95C_de(func_8025CC6C_de(), arg1, &((func_8028438C_S1 *)(arg0))->unk8, &((func_8028438C_S1 *)(arg0))->unk8, -1);
}
