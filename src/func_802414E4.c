/* Tests a point against every edge plane of a polygon. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char p[0x14];s32 unk14;} Arg;
void func_80271FD8(f32 *, void *, void *);             /* extern */
void func_80272088(f32 *, void *, f32 *);              typedef struct func_802414E4_S1 func_802414E4_S1;
struct func_802414E4_S1 {
    char pad0[0x18];
    char unk18;
    char pad18[0x48 - 0x18 - sizeof(char)];
    char unk48;
};

/* extern */

s32 func_802414E4(Arg *arg0, void *arg1) {
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30[3];
    s32 temp_v1;
    void *var_s1;
    s32 var_s0;
    void *var_s2;

    temp_v1 = arg0->unk14;
    if (temp_v1 == 1) {
        return 1;
    }
    var_s2 = (char *)arg0 + ((temp_v1 * 0xC) + 0xC);
    var_s1 = &((func_802414E4_S1 *)(arg0))->unk18;
    var_s0 = temp_v1;
    var_s0 = var_s0 - 1;
    for (; var_s0 != -1; var_s1 += 0xC, var_s0--) {
        func_80271FD8(sp20, var_s1, var_s2);
        func_80272088(sp10, &((func_802414E4_S1 *)(arg0))->unk48, sp20);
        func_80271FD8(sp30, arg1, var_s2);
        var_s2 = var_s1;
        if (sp10[0]*sp30[0]+sp10[1]*sp30[1]+sp10[2]*sp30[2] > 0.0f) return 0;
    }
    return 1;
}
