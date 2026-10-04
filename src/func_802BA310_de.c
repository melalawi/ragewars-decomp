#include "common/types.h"
#include "span_1000/code_802BEDA0.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);



extern Field_void_4 *D_800D4410;

void *func_802BA310_de(void) {
    void *result = func_802BCF30_de();
    void *saved = D_800D4410->value;
    func_802BCF50_de(result);
    return saved;
}
