#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8026AC38.h"
#include "span_1000/code_8028FC98.h"
#include "types.h"




extern s32 D_800CC390;

extern f32 D_800CC3A0;



extern s32 func_80296B74_de(void *arg0, void *arg1);
extern void func_8024EB90_de(void *arg0);








void func_802905F4_de(char *arg0, char *arg1) {
    char *entry;
    f32 value;
    f32 upper;
    f32 scale;
    f32 zero;

    func_8026D980_de();
    entry = ((func_802905D4_S1 *)(arg0))->unk3C04;
    if (entry != 0) {
        zero = 0.0f;
        upper = D_800C53A8_de;
        scale = ((D_800C7470_Pair *)&D_800C53A8_de)->second;
        do {
            if ((((func_802905D4_S2 *)(arg1))->unk35C > ((func_802905D4_S3 *)(entry))->unk17C) &&
                (((func_802905D4_S2 *)(arg1))->unk350 < ((func_802905D4_S3 *)(entry))->unk188) &&
                (((func_802905D4_S2 *)(arg1))->unk364 > ((func_802905D4_S3 *)(entry))->unk184) &&
                (((func_802905D4_S2 *)(arg1))->unk358 < ((func_802905D4_S3 *)(entry))->unk190) &&
                (((func_802905D4_S2 *)(arg1))->unk360 > ((func_802905D4_S3 *)(entry))->unk180) &&
                (((func_802905D4_S2 *)(arg1))->unk354 < ((func_802905D4_S3 *)(entry))->unk18C) &&
                (func_80296B74_de(arg1 + 0x2F0, &((func_802905D4_S3 *)entry)->unk17C) != 0)) {
                value = ((func_802905D4_S3 *)(entry))->unk1C8;
                D_800CC390 = 0;
                if ((value > zero) && (value <= upper)) {
                    D_800CC390 = 1;
                    D_800CC3A0 = value * scale;
                }
                func_8024EB90_de(entry);
                D_800CC390 = 0;
            }
            entry = ((func_802905D4_S3 *)(entry))->unk1DC;
        } while (entry != 0);
    }
    func_8026D9D0_de();
}
