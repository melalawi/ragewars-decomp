#include "span_1000/code_80293E60.h"
#include "span_C76B0/data.h"

/* func_80245A00_de: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
extern void func_80245A00_de(float arg0);
/* func_8028D90C_de: types.declaration: solved callee prototype */
extern void func_8028D90C_de(void);
/* func_80293998_de: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
extern void func_80293998_de(s32 arg0, s32 arg1);

                                                  /* size = 0x18 */

void func_80294434_de(s32 arg0) {
    D_800CD770 += 1;
    func_8028D90C_de();
    func_80245A00_de(0.5f);
    func_80293998_de(arg0, 0x6F);
}
