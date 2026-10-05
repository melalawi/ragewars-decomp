#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802624A0.h"
#include "types.h"

extern void func_80255ED8_de(void *, s32);
extern s32 func_80255D14_de(void *, s32);

extern s32 D_80137050;




s32 func_80262C88_de(void *arg0) {
    s32 *counter;

    counter = ((func_80262CA8_S1 *)(arg0))->unk2F0;
    ((func_80262CA8_S1 *)(arg0))->unk174 = 0;
    if (counter != 0) {
        *counter -= 1;
    }
    func_80255ED8_de(&D_80137064, arg0);
    return func_80255D14_de(&D_80137050, (s32)arg0);
}
