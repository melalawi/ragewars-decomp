#ifndef UNBAKE_SPAN_1000_CODE_802BA7E4_H
#define UNBAKE_SPAN_1000_CODE_802BA7E4_H
#include "acmd.h"
#include "span_1000/types.h"
#include "../types.h"
struct CallbackStateC;
typedef struct CallbackStateC CallbackStateC;

struct IntegerState34;
typedef struct IntegerState34 IntegerState34;

struct CallbackStateC;
struct CallbackStateC {
    unsigned char padding_0[8];
    void (*callback)(void *, s32, s32);
};
struct IntegerState34;
struct IntegerState34 {
    char pad0[0x18];
    s32 unk_18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk_1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk_20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk_24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    s32 unk_30;
};
extern void func_802BAD68_de(void);
extern void func_802BB008_eu(void);
#endif
