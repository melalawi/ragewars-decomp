#include "basetypes.h"

typedef struct {
    s32 count38;
    s32 count1C;
    u8 kind;
    u8 pad09[3];
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
extern char D_2B3CF0;

extern s32 func_802B5410(s32, s32, void *, s32, s32);
extern void func_802B6A60(void *);
extern void func_802B5090(void *, void *, s32);
extern void func_802B8080(s32, void *);

void func_802B3B80(void *arg0, InitParams *arg1) {
    char *obj = arg0;
    InitParams *params = arg1;
    s32 context = params->context;
    s32 global = D_800D80A0;
    s32 allocation;
    s32 i;

    *(s16 *)(obj + 0x30) = 0xFF;
    *(s32 *)(obj + 0x24) = 0x1E8;
    *(s16 *)(obj + 0x32) = 0x7FFF;
    *(s32 *)(obj + 0x20) = 0;
    *(s32 *)(obj + 0x18) = 0;
    *(s32 *)(obj + 0x28) = 0;
    *(s32 *)(obj + 0x2C) = 0;
    *(s32 *)(obj + 0x5C) = 0x3E80;
    *(s32 *)(obj + 0x1C) = 0;
    *(s32 *)(obj + 0x14) = global;
    *(s32 *)(obj + 0x70) = params->value10;
    *(s32 *)(obj + 0x74) = params->value14;
    *(s32 *)(obj + 0x78) = params->value18;
    *(s16 *)(obj + 0x38) = 9;
    *(u8 *)(obj + 0x34) = params->kind;
    *(s32 *)(obj + 0x60) = func_802B5410(0, 0, (void *)context, params->kind, 0x10);
    func_802B6A60(obj);

    allocation = func_802B5410(0, 0, (void *)context, params->count38, 0x38);
    *(s32 *)(obj + 0x6C) = 0;
    i = 0;
    if (params->count38 > 0) {
        {
            s32 *records = (s32 *)allocation;
            do {
                records[0] = *(s32 *)(obj + 0x6C);
                *(s32 **)(obj + 0x6C) = records;
                i++;
                records = (s32 *)((char *)records + 0x38);
            } while (i < params->count38);
        }
    }

    *(s32 *)(obj + 0x64) = 0;
    *(s32 *)(obj + 0x68) = 0;
    allocation = func_802B5410(0, 0, (void *)context, params->count1C, 0x1C);
    func_802B5090(obj + 0x48, (void *)allocation, params->count1C);
    {
        CallbackNode *node = (CallbackNode *)obj;
        node->state = 0;
        node->callback = &D_2B3CF0;
        node->self = node;
        func_802B8080(D_800D80A0, node);
    }
}
