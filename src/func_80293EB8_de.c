#include "span_1000/code_80293E60.h"
#include "types.h"

extern void func_8025E2D4_de(s32 a);
extern void func_80293334_de(void *arg0, void *arg1, void *arg2);
extern void func_80286AA8_de(void *arg0, void *arg1, void *arg2);
extern void func_8044A370_de(void *arg0, s32 arg1);
extern void func_80296004_de(unsigned int value);
extern u8 D_801427E0;
extern s32 D_8011BDC8;




void func_80293EB8_de(void *arg0) {
    s8 *p1;
    s8 *p2;
    int new_var;

    func_8025E2D4_de(0);
    new_var = 0x5D8;
    p1 = ((s8 *)(&D_801427E0)) - new_var;
    ((struct IntegerStateB0 *) ((char *) (&D_801427E0)))->unk_AC = 0;
    ((struct IntegerStateB0 *) ((char *) (&D_801427E0)))->unk_88 = 0;
    p1[0xB2] = 1;
    p1[0x1D] = 0;
    p1[0x1E] = 1;
    func_80293334_de(arg0, 0, 0);
    func_80286AA8_de(&D_8011BDC8, 0, 0);
    p2 = ((s8 *)(&D_801427E0)) - 0x1818;
    func_8044A370_de(p2, 1);
    ((IntegerState164 *)(p2))->unk_160 = 0;
    func_80296004_de(0);
}
