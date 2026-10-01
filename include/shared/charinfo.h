#ifndef SHARED_SHARED_CHARINFO_H
#define SHARED_SHARED_CHARINFO_H

#include "basetypes.h"

typedef struct Shared_CharInfo Shared_CharInfo;
struct Shared_CharInfo {
    s32 pad0; /* +0x0: src/func_80220EB0.c */
    u16 sound; /* +0x4: src/func_80220EB0.c */
    s16 pad6; /* +0x6: src/func_80220EB0.c */
    s16 ammo; /* +0x8: src/func_80220EB0.c */
    s16 padA; /* +0xA: src/func_80220EB0.c */
    union {
        struct {
            s16 next_s; /* +0xC: src/func_80220EB0.c */
        } viewC_0;
        struct {
            u16 next_u; /* +0xC: src/func_80220EB0.c */
        } viewC_1;
    } viewsC;
    char padE[0x2];
};
typedef char Shared_CharInfo_size_check[(sizeof(Shared_CharInfo) == 0x10) ? 1 : -1];

#endif
