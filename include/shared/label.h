#ifndef SHARED_SHARED_LABEL_H
#define SHARED_SHARED_LABEL_H

#include "basetypes.h"

typedef struct Shared_Label Shared_Label;
struct Shared_Label {
    char pad0[0x38];
    void * text; /* +0x38: src/func_80433F14.c */
};
typedef char Shared_Label_size_check[(sizeof(Shared_Label) == 0x3C) ? 1 : -1];

#endif
