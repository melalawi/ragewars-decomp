#ifndef SHARED_SHARED_MODEL_H
#define SHARED_SHARED_MODEL_H

#include "basetypes.h"

typedef struct Shared_Model Shared_Model;
struct Shared_Model {
    u16 unk0; /* +0x0: src/func_80220EB0.c */
    u16 flags; /* +0x2: src/func_80220EB0.c */
};
typedef char Shared_Model_size_check[(sizeof(Shared_Model) == 0x4) ? 1 : -1];

#endif
