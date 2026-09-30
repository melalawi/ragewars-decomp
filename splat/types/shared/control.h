#ifndef SHARED_SHARED_CONTROL_H
#define SHARED_SHARED_CONTROL_H

#include "basetypes.h"

typedef struct Shared_Control Shared_Control;
struct Shared_Control {
    u8 pad[1361]; /* +0x0: src/func_8021A2D4.c */
    u8 color; /* +0x551: src/func_8021A2D4.c */
};
typedef char Shared_Control_size_check[(sizeof(Shared_Control) == 0x552) ? 1 : -1];

#endif
