#include "span_1000/code_802BDDB8.h"
#include "span_1000/types.h"
#include "types.h"



typedef struct Queue Queue;

extern s32 D_800D4360;
extern Queue *func_802B8DA0_de(void);
extern s32 func_802BB160_de(Queue *, void *, s32);
extern s32 func_802BB420_de(Queue *, s32, s32);




s32 func_802B8CF0_de(void *entry, s32 subtype, s32 arg2, s32 arg3,
                   s32 arg4, s32 arg5, s32 arg6) {
    s16 type;

    if (D_800D4360 == 0) {
        return -1;
    }
    type = 12;
    if (arg2 == 0) {
        type = 11;
    }
    ((func_802BDDC0_S1 *)(entry))->unk0 = type;
    ((func_802BDDC0_S1 *)(entry))->unk2 = subtype;
    ((func_802BDDC0_S1 *)(entry))->unk4 = arg6;
    ((func_802BDDC0_S1 *)(entry))->unk8 = arg4;
    ((func_802BDDC0_S1 *)(entry))->unkC = arg3;
    ((func_802BDDC0_S1 *)(entry))->unk10 = arg5;
    ((func_802BDDC0_S1 *)(entry))->unk14 = 0;
    if (subtype != 1) {
        return func_802BB420_de(func_802B8DA0_de(), (s32)entry, 0);
    }
    return func_802BB160_de(func_802B8DA0_de(), entry, 0);
}
