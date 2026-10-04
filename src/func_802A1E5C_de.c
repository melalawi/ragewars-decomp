#include "common/types.h"
#include "span_1000/code_802A26F8.h"
#include "types.h"

extern s32 func_8025DF34_de(s32);






s32 func_802A1E5C_de(void *arg0) {
    void *p;

    ((func_802A2E5C_S1 *)(arg0))->unk5C = 2;
    ((func_802A2E5C_S1 *)(arg0))->unk48 = 0;
    func_8025DF34_de(0xE74);
    p = ((func_802A2E5C_S1 *)(arg0))->unk8;
    if (p != 0) {
        do {
            if (((func_802A2E5C_S2 *)(p))->unkE != 8) {
                ((func_802A2E5C_S2 *)(p))->unk10 = 0x64;
            }
            p = ((func_802A2E5C_S2 *)(p))->unk4;
        } while (p != 0);
    }
    return 0;
}
