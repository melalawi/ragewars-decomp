#include "common/types.h"
#include "span_1000/code_802406DC.h"


extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern void func_80272018_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8027207C_de(Vec3 *out);




void func_80240CAC_de(void *arg0) {
    Vec3 sp10;
    Vec3 sp20;
    Vec3 *temp_s1;
    Vec3 *temp_s0;

    temp_s1 = &((func_80240C9C_S1 *)(arg0))->unk24;
    func_80271F68_de(&sp10, temp_s1, &((func_80240C9C_S1 *)(arg0))->unk18);
    func_80271F68_de(&sp20, &((func_80240C9C_S1 *)(arg0))->unk30, temp_s1);
    temp_s0 = &((func_80240C9C_S1 *)(arg0))->unk48;
    func_80272018_de(temp_s0, &sp20, &sp10);
    func_8027207C_de(temp_s0);
}
