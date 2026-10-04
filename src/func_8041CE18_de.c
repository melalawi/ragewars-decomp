#include "span_16E000/code_8041BC50.h"
#include "types.h"



extern void func_8041C610_de(Unk8041CE88 *arg0);

/* Sets field 0x274 of arg0 to 0xFFFF and then calls func_8041C610_de on it. */
void func_8041CE18_de(Unk8041CE88 *arg0) {
    arg0->unk274 = 0xFFFF;
    func_8041C610_de(arg0);
}
