#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern int func_80245798_de(void);
extern void func_802472F0_de(void *arg0);
extern void func_80285DB0_de(void *, void *, s32);
extern s32 D_8011BDC8;




void func_8020682C_de(void *arg0, s32 *arg1) {
    ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    if (func_80245798_de() != 0) {
        *arg1 |= 0x200;
    }
    func_802472F0_de(arg0);
    func_80285DB0_de(&D_8011BDC8, arg0, 0);
}
