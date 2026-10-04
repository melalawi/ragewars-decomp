#include "common/types.h"
#include "span_1000/code_80256234.h"
#include "span_1000/code_80259014.h"
#include "types.h"
/* Stops every voice playing a sound id while holding the manager's recursive lock at 0x110: tells
 * func_802598B4_de about the id, then for each of the 17 voice records whose sound matches it counts the voice
 * and either resets the spare record 16 or clears the voice's pending flag and stops its channel through
 * func_8025BA9C_de when it has a handle; returns the number of voices found (0 for id -1). Lock handling
 * adapted from func_802588D4_de; the voice records are addressed by offset from the manager.
 */





extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *, s32, s32);

extern void func_8025BA9C_de(void *, s16);






s32 func_80257A14_de(void *arg0, s32 id) {
    void *temp_s0;
    void *var_a0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_v0;
    s32 found;
    s32 i;
    Voice *voice;

    found = 0;
    if (id == -1) {
        return found;
    }
    temp_s0 = &((func_80257A34_S1 *)(arg0))->unk110;
    temp_a0 = func_802BCF30_de();
    temp_v1 = ((MenuRules *)(temp_s0))->locked + 1;
    ((MenuRules *)(temp_s0))->locked = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)temp_s0, 0, 1);
        var_a0 = &((func_80257A34_S1 *)(arg0))->unk138;
    } else {
        func_802BCF50_de(temp_a0);
        var_a0 = &((func_80257A34_S1 *)(arg0))->unk138;
    }
    func_802598B4_de(var_a0, id);
    for (i = 0; i < 17; i++) {
        if (((Voice *)(&((func_80257A34_S1 *)(arg0))->unk1DBC + i * sizeof(Voice)))->sound == id) {
            found++;
            voice = &((Voice *)&((func_80257A34_S1 *)arg0)->unk1DBC)[i];
            if (i == 16) {
                voice->sound = -1;
                voice->priority = 0;
                voice->channel = -1;
                voice->unkC = -1;
                voice->unk8 = -1;
            } else {
                if (voice->pending > 0) {
                    voice->pending = 0;
                    voice->flags &= ~0x10;
                }
                if ((&((func_80257A34_S1 *)(arg0))->unk7C)[0].handles[i] != -1) {
                    func_8025BA9C_de(&((func_80257A34_S1 *)(arg0))->unk1DB8, i);
                }
            }
        }
    }
    temp_s0 = &((func_80257A34_S1 *)(arg0))->unk110;
    temp_v0 = func_802BCF30_de();
    temp_v1 = ((MenuRules *)(temp_s0))->locked - 1;
    ((MenuRules *)(temp_s0))->locked = temp_v1;
    if (temp_v1 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de(temp_s0, 0, 1);
    } else {
        func_802BCF50_de(temp_v0);
    }
    return found;
}
