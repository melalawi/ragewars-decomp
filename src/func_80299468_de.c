#include "span_1000/code_80297008.h"
#include "span_1000/code_80299FC4.h"
#include "span_1000/code_8029AC80.h"
#include "span_16E000/code_8040EBC8.h"
#include "span_16E000/code_80410E9C.h"
#include "types.h"

                                                              



extern Manager_func_80299468_de *D_80146E00;

extern void func_802547E4_de(void *arg0);




void func_80299468_de(void) {
    Manager_func_80299468_de *manager;
    s32 lowIndex;
    s32 one;

    manager = D_80146E00;
    lowIndex = manager->lowIndex;
    if (manager->index >= lowIndex) {
        one = 1;
        do {
            manager->field530 = one;
            func_80298ECC_de();
            manager = D_80146E00;
        } while (manager->index >= lowIndex);
    }
    if (D_80146E00->callback != 0) {
        D_80146E00->callback(0xE05, 0, 0, 0);
    }
    if (D_80146E00->field53C != 0) {
        func_802547E4_de(D_80146E00->field53C);
    }
    func_802547E4_de(D_80146E00->entries);
    func_802547E4_de(D_80146E00);
    D_80146E00 = 0;
    func_8029AAAC_de();
    func_8040F568_de();
    func_80411F28_de();
}
