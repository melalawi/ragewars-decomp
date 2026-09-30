#ifndef SHARED_SHARED_NODE_H
#define SHARED_SHARED_NODE_H

#include "basetypes.h"

typedef struct Shared_Node Shared_Node;
struct Shared_Node {
    s32 unk0; /* +0x0: src/func_8020AA40.c */
    char pad4[0xC];
    struct Shared_Node * unk10; /* +0x10: src/func_8020AA40.c */
    char pad14[0x20];
    void * unk34; /* +0x34: src/func_8020AA40.c */
};
typedef char Shared_Node_size_check[(sizeof(Shared_Node) == 0x38) ? 1 : -1];

#endif
