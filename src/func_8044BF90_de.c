#include "common/types.h"
#include "span_1000/code_8025DB64.h"
#include "span_1000/code_8025E35C.h"
#include "span_16E000/code_80449968.h"
#define NULL ((void *)0)
int func_8022A414_de(void *);
void func_80253838_de(void *, void *);
void func_802547E4_de(void *);
void func_80255ED8_de(void *, s32);
void func_8025CBEC_de(void *);
s32 * func_8025CC6C_de(void);


void func_8028D59C_de(void *);
void func_8044A07C_de(void *);
extern s32 D_80140F80;







/* Shut down the subsystem, free its owned resources, and unlink its list. */
void func_8044BF90_de(func_8044CBE0_S1 *arg0) {
    s32 temp_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_s0;
    void *temp_s1;
    func_8020D0CC_S2 *var_a1;

    temp_v0 = func_8022A414_de(&D_80140F80);
    if (temp_v0 != 0) {
        func_8044A07C_de((void *) temp_v0);
    }
    func_8025CBEC_de(func_8025CC6C_de());
    func_8025E468_de();
    func_8025E1EC_de(0x1000);
    func_80253838_de(NULL, arg0->unk100);
    func_80253838_de(NULL, arg0->unkB8);
    func_80253838_de(NULL, arg0->unkBC);
    func_80253838_de(NULL, arg0->unkC0);
    func_80253838_de(NULL, arg0->unkC4);
    func_80253838_de(NULL, arg0->unkC8);
    func_80253838_de(NULL, arg0->unkD0);
    func_80253838_de(NULL, arg0->unkD4);
    func_80253838_de(NULL, arg0->unkEC);
    func_80253838_de(NULL, arg0->unkCC);
    func_80253838_de(NULL, arg0->unkE8);
    temp_a1 = arg0->unkF0;
    if (temp_a1 != NULL) {
        func_80253838_de(NULL, temp_a1);
    }
    temp_a1_2 = arg0->unkF4;
    if (temp_a1_2 != NULL) {
        func_80253838_de(NULL, temp_a1_2);
    }
    temp_a1_3 = arg0->unkFC;
    if (temp_a1_3 != NULL) {
        func_80253838_de(NULL, temp_a1_3);
    }
    func_8028D59C_de(arg0);
    temp_s1 = arg0->unk1B500.v0;
    var_a1 = temp_s1;
    if (temp_s1 != NULL) {
        do {
            temp_s0 = var_a1->unk10;
            func_80255ED8_de(&arg0->unk1B500.v1, (s32) var_a1);
            var_a1 = temp_s0;
        } while (var_a1 != NULL);
    }
    func_802547E4_de(temp_s1);
}
