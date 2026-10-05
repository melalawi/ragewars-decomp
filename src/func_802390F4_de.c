#include "span_1000/code_80233920.h"
#include "types.h"
typedef void (*FuncPtr)(void);

extern char D_800CB380_de[];




void func_802390F4_de(void *arg0, s16 arg1) {
    FuncPtr fn;

    ((func_802390E4_S1 *)(arg0))->unk14 = arg1;
    ((func_802390E4_S1 *)(arg0))->unk18 = 0;
    ((func_802390E4_S1 *)(arg0))->unk1C = 0;
    ((func_802390E4_S1 *)(arg0))->unk20 = 0;
    fn = *(FuncPtr *)(D_800CB380_de + (((func_802390E4_S1 *)(arg0))->unk14 * 8));
    if (fn != 0) {
        fn();
    }
}
