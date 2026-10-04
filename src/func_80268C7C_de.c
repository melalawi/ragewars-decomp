#include "span_1000/code_802688AC.h"
#include "span_1000/types.h"
#include "types.h"
typedef s32 M2C_UNK;





M2C_UNK func_80255CB8_de(void *, s32);
M2C_UNK func_80255ED8_de();
void func_80268C7C_de(void *a, s32 b) {
    (((struct Limit *) ((s8 *) b))->limit) = 0;
    func_80255ED8_de();
    func_80255CB8_de(a + 0x14, b);
}
