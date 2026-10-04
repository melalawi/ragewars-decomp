#include "span_1000/code_802B3A80.h"
#include "span_1000/types.h"
#include "types.h"






extern void *D_800D4070;
extern char D_002AEC20;

extern s32 func_802B0340_de(s32, s32, void *, s32, s32);
extern void func_802B1990_de(void *);
extern void func_802AFFC0_de(void *, void *, s32);
extern void func_802B2FB0_de(s32, void *);







void func_802AEAB0_de(void *arg0, InitParams *arg1) {
    char *obj = arg0;
    InitParams *params = arg1;
    s32 context = params->context;
    s32 global = D_800D4070;
    s32 allocation;
    s32 i;

    ((func_802B3B80_S1 *)(obj))->unk30 = 0xFF;
    ((func_802B3B80_S1 *)(obj))->unk24 = 0x1E8;
    ((func_802B3B80_S1 *)(obj))->unk32 = 0x7FFF;
    ((func_802B3B80_S1 *)(obj))->unk20 = 0;
    ((func_802B3B80_S1 *)(obj))->unk18 = 0;
    ((func_802B3B80_S1 *)(obj))->unk28 = 0;
    ((func_802B3B80_S1 *)(obj))->unk2C = 0;
    ((func_802B3B80_S1 *)(obj))->unk5C = 0x3E80;
    ((func_802B3B80_S1 *)(obj))->unk1C = 0;
    ((func_802B3B80_S1 *)(obj))->unk14 = global;
    ((func_802B3B80_S1 *)(obj))->unk70 = params->value10;
    ((func_802B3B80_S1 *)(obj))->unk74 = params->value14;
    ((func_802B3B80_S1 *)(obj))->unk78 = params->value18;
    ((func_802B3B80_S1 *)(obj))->unk38 = 9;
    ((func_802B3B80_S1 *)(obj))->unk34 = params->kind;
    ((func_802B3B80_S1 *)(obj))->unk60 = func_802B0340_de(0, 0, (void *)context, params->kind, 0x10);
    func_802B1990_de(obj);

    allocation = func_802B0340_de(0, 0, (void *)context, params->count38, 0x38);
    ((func_802B3B80_S1 *)(obj))->unk6C.v0 = 0;
    i = 0;
    if (params->count38 > 0) {
        {
            s32 *records = (s32 *)allocation;
            do {
                records[0] = ((func_802B3B80_S1 *)(obj))->unk6C.v0;
                ((func_802B3B80_S1 *)(obj))->unk6C.v1 = records;
                i++;
                records = &((func_8020D1FC_S1 *)(records))->unk38;
            } while (i < params->count38);
        }
    }

    ((func_802B3B80_S1 *)(obj))->unk64 = 0;
    ((func_802B3B80_S1 *)(obj))->unk68 = 0;
    allocation = func_802B0340_de(0, 0, (void *)context, params->count1C, 0x1C);
    func_802AFFC0_de(obj + 0x48, (void *)allocation, params->count1C);
    {
        CallbackNode *node = (CallbackNode *)obj;
        node->state = 0;
        node->callback = &D_002AEC20;
        node->self = node;
        func_802B2FB0_de(D_800D4070, node);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2D20_10[] = {0x00, 0x00, 0x00, 0x00, 0x43, 0x4B, 0x59, 0x5F, 0x42, 0x4F, 0x4D, 0x42, 0x65, 0x71, 0x75, 0x52};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D80A0_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x4E, 0x00, 0x00, 0x05, 0x00, 0x04, 0x65, 0x1E, 0x39};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E46F0_10[] = {0x00, 0x00, 0x00, 0x00, 0x73, 0x70, 0x65, 0x63, 0x69, 0x61, 0x6C, 0x20, 0x6F, 0x62, 0x6A, 0x65};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF8B0_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x4E, 0x00, 0x00, 0x05, 0x00, 0x04, 0x65, 0x1E, 0x39};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D4070_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x70};
#endif
