/* Sets up a pooled object from its parameter block: free lists of 0x38-byte records and 0x1C-byte slots, then registers it as a callback node. */

#include "basetypes.h"

typedef struct {
    s32 count38;
    s32 count1C;
    u8 kind;
    u8 flags;
    u8 pad0A[2];
    s32 context;
    s32 value10;
    s32 value14;
    s32 value18;
} InitParams;

typedef struct CallbackNode CallbackNode;
struct CallbackNode {
    s32 state;
    CallbackNode *self;
    void *callback;
};

extern void *D_800D80A0;
extern char D_2B5624;

extern s32 func_802B5410(s32, s32, void *, s32, s32);
extern void func_802B6A60(void *);
extern void func_802B5090(void *, void *, s32);
extern void func_802B8080(s32, void *);

typedef struct func_802B54A0_S1 func_802B54A0_S1;
typedef struct func_802B54A0_S2 func_802B54A0_S2;
typedef union func_802B54A0_S1_U6C { s32 v0; s32* v1; } func_802B54A0_S1_U6C;
struct func_802B54A0_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s16 unk30;
    char pad30[0x32 - 0x30 - sizeof(s16)];
    s16 unk32;
    char pad32[0x34 - 0x32 - sizeof(s16)];
    u8 unk34;
    char pad34[0x35 - 0x34 - sizeof(u8)];
    u8 unk35;
    char pad35[0x38 - 0x35 - sizeof(u8)];
    s16 unk38;
    char pad38[0x5C - 0x38 - sizeof(s16)];
    s32 unk5C;
    char pad5C[0x60 - 0x5C - sizeof(s32)];
    s32 unk60;
    char pad60[0x64 - 0x60 - sizeof(s32)];
    s32 unk64;
    char pad64[0x68 - 0x64 - sizeof(s32)];
    s32 unk68;
    char pad68[0x6C - 0x68 - sizeof(s32)];
    func_802B54A0_S1_U6C unk6C;
    char pad6C[0x70 - 0x6C - sizeof(func_802B54A0_S1_U6C)];
    s32 unk70;
    char pad70[0x74 - 0x70 - sizeof(s32)];
    s32 unk74;
    char pad74[0x78 - 0x74 - sizeof(s32)];
    s32 unk78;
    char pad78[0x7C - 0x78 - sizeof(s32)];
    s32 unk7C;
    char pad7C[0x80 - 0x7C - sizeof(s32)];
    s32 unk80;
    char pad80[0x84 - 0x80 - sizeof(s32)];
    s32 unk84;
};
struct func_802B54A0_S2 {
    char pad0[0x38];
    s32 unk38;
};

void func_802B54A0(char *obj, InitParams *params) {
    s32 context = params->context;
    s32 global = D_800D80A0;
    s32 allocation;
    s32 i;

    ((func_802B54A0_S1 *)(obj))->unk20 = 0;
    ((func_802B54A0_S1 *)(obj))->unk18 = 0;
    ((func_802B54A0_S1 *)(obj))->unk14 = global;
    ((func_802B54A0_S1 *)(obj))->unk30 = 0xFF;
    ((func_802B54A0_S1 *)(obj))->unk24 = 0x1E8;
    ((func_802B54A0_S1 *)(obj))->unk28 = 0;
    ((func_802B54A0_S1 *)(obj))->unk2C = 0;
    ((func_802B54A0_S1 *)(obj))->unk32 = 0x7FFF;
    ((func_802B54A0_S1 *)(obj))->unk35 = params->flags;
    ((func_802B54A0_S1 *)(obj))->unk5C = 0x3E80;
    ((func_802B54A0_S1 *)(obj))->unk1C = 0;
    ((func_802B54A0_S1 *)(obj))->unk70 = params->value10;
    ((func_802B54A0_S1 *)(obj))->unk74 = params->value14;
    ((func_802B54A0_S1 *)(obj))->unk78 = params->value18;
    ((func_802B54A0_S1 *)(obj))->unk7C = 0;
    ((func_802B54A0_S1 *)(obj))->unk80 = 0;
    ((func_802B54A0_S1 *)(obj))->unk84 = 0;
    ((func_802B54A0_S1 *)(obj))->unk38 = 9;
    ((func_802B54A0_S1 *)(obj))->unk34 = params->kind;
    ((func_802B54A0_S1 *)(obj))->unk60 = func_802B5410(0, 0, (void *)context, params->kind, 0x10);
    func_802B6A60(obj);

    allocation = func_802B5410(0, 0, (void *)context, params->count38, 0x38);
    ((func_802B54A0_S1 *)(obj))->unk6C.v0 = 0;
    i = 0;
    if (params->count38 > 0) {
        {
            s32 *records = (s32 *)allocation;
            do {
                records[0] = ((func_802B54A0_S1 *)(obj))->unk6C.v0;
                ((func_802B54A0_S1 *)(obj))->unk6C.v1 = records;
                i++;
                records = &((func_802B54A0_S2 *)(records))->unk38;
            } while (i < params->count38);
        }
    }

    ((func_802B54A0_S1 *)(obj))->unk64 = 0;
    ((func_802B54A0_S1 *)(obj))->unk68 = 0;
    allocation = func_802B5410(0, 0, (void *)context, params->count1C, 0x1C);
    func_802B5090(obj + 0x48, (void *)allocation, params->count1C);
    {
        CallbackNode *node = (CallbackNode *)obj;
        node->state = 0;
        node->callback = &D_2B5624;
        node->self = node;
        func_802B8080(D_800D80A0, node);
    }
}
