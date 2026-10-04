#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_1000/types.h"
#include "types.h"







extern void func_80216288_de(void *, s32, Triple, s32);




void func_8026835C_de(void *arg0, Filter *arg1, s32 arg2, Triple arg3, struct Shape_func_802764D4_de_2 arg6) {
    switch (arg1->type) {
    case 0:
        if (((func_8024BE70_S1 *)(arg0))->unk1 != arg6.field_4) {
            return;
        }
        break;
    case 1:
        if (!(arg1->mask & (arg1->type << arg6.field_4))) {
            return;
        }
        break;
    }
    func_80216288_de(arg0, arg6.field_0, arg3, 0);
}
