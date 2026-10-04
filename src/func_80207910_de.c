#include "span_1000/code_80206DD4.h"
#include "types.h"

extern void func_80273760_de(void *arg0, f32 arg1);
extern void func_802738C0_de(void *arg0, f32 arg1);
extern void func_80273A98_de(void *arg0, f32 arg1);
extern void func_80272FBC_de(float *arg0, float *arg1);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_8027254C_de(f32 *arg0, f32 arg1);
extern void func_80273448_de(char *, f32, f32, f32);
extern void func_80273D6C_de(void *);






void func_80207910_de(void *arg0, void *arg1) {
    f32 sp10[16];
    char *temp_s1;

    func_80273760_de(sp10, ((func_80207910_S1 *)(arg1))->unk138);
    func_802738C0_de(sp10, ((func_80207910_S1 *)(arg1))->unk134);
    func_80273A98_de(sp10, ((func_80207910_S2 *)(arg0))->unk6C);
    temp_s1 = &((func_80207910_S2 *)(arg0))->unk74;
    func_80272FBC_de((float *) temp_s1, sp10);
    func_8027347C_de(temp_s1, ((func_80207910_S2 *)(arg0))->unk50, ((func_80207910_S2 *)(arg0))->unk54, ((func_80207910_S2 *)(arg0))->unk58);
    func_8027254C_de(&((func_80207910_S2 *)(arg0))->unk8, 20000.0f);
    func_80273448_de(temp_s1, ((func_80207910_S2 *)(arg0))->unk8, ((func_80207910_S2 *)(arg0))->unkC, ((func_80207910_S2 *)(arg0))->unk10);
    func_80273D6C_de(temp_s1);
}
