#ifndef SHARED_SHARED_OBJECTINFO_H
#define SHARED_SHARED_OBJECTINFO_H

#include "basetypes.h"

typedef struct Shared_ObjectInfo Shared_ObjectInfo;
struct Shared_ObjectInfo {
    u8 pad[4]; /* +0x0: src/func_8021A2D4.c */
    u16 id; /* +0x4: src/func_8021A2D4.c */
};
typedef char Shared_ObjectInfo_size_check[(sizeof(Shared_ObjectInfo) == 0x6) ? 1 : -1];

#endif
