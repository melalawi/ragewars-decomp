/* Seeks the containing frame in a variable-length stream and reloads it when the frame changes. */
#include "basetypes.h"
typedef struct {s32 unk0;char pad4[8];s32 unkC;char pad10[16];u32 unk20,unk24;s32 unk28;} Stream;
extern void func_8025FD94(Stream *);
extern u32 func_802606E4(s32,s32);
void func_80261438(Stream *arg0, u32 arg1) {
    u32 sp10[64];
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s6;
    s32 var_s1;
    s32 var_s2;
    u32 *var_s3;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_s0;
    u32 var_s4;

    temp_s6 = (arg0->unk0 * 4) + 6;
    temp_v1 = arg0->unk24;
    if (arg1 < temp_v1 || arg1 >= temp_v1 + arg0->unk20) {
        var_s2 = arg0->unk28;
        var_s4 = temp_v1;
        var_s0 = var_s4 + arg0->unk20;
        var_s1 = arg0->unkC;
        temp_s1=var_s1;
        var_s1 += var_s2 * temp_s6;
        if(arg1 < temp_v1) {
            var_s1=temp_s1;var_s2=0;var_s4=0;
            var_s0=func_802606E4(var_s1,6);
        }
        for (;;) {
            var_s1 += temp_s6;
            if(arg1>=var_s4 && arg1<var_s0) {
                if(var_s2!=arg0->unk28) {
                    arg0->unk24=var_s4;arg0->unk28=var_s2;func_8025FD94(arg0);
                }
                break;
            }
            var_s2++;
            var_s4=var_s0;
            sp10[var_s2]=func_802606E4(var_s1,6);
            var_s0+=sp10[var_s2];
        }
    }
}
