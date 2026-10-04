#include "common/types.h"
#include "span_1000/code_802647BC.h"
#include "span_1000/code_8029193C.h"
#include "span_C76B0/data.h"
#include "types.h"
typedef void (*Handler8029382C)(void *);


extern void func_80292900_de(void *arg0);
extern s32 D_800CD724;

extern char D_800CD78C[];





void func_80293848_de(void *arg0) {
    s32 field;
    Handler8029382C fn;

    if (D_800CD724 != 0) {
        D_800CD724 = 0;
    }
    func_80264CB8_de();
    field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    fn = *(Handler8029382C *)(D_800CD78C + field * 0xC);
    if (fn != 0) {
        fn(arg0);
        field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    }
    if (field != 0x14 && D_80142CA8 != 0) {
        D_80142CA8 -= 1;
        func_80292900_de(arg0);
    }
    D_800CD734 += 1;
}
