#include "span_1000/code_802625B8.h"
#include "types.h"

extern void func_80255ED8_de(void *, s32);
extern s32 func_80255D14_de(void *, s32);




void func_80263080_de(s32 arg0, void *arg1) {
    s32 *temp_v1;

    temp_v1 = ((func_80262CA8_S1 *)(arg1))->unk2F0;
    ((func_80262CA8_S1 *)(arg1))->unk174 = 0;
    if (temp_v1 != 0) {
        *temp_v1 -= 1;
    }
    func_80255ED8_de((void *)(arg0 + 0x5F14), arg1);
    func_80255D14_de((void *)(arg0 + 0x5F00), (s32)arg1);
}
