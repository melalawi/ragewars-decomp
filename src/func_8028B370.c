#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

typedef struct func_8028B370_S0 { char pad0[0x6C]; void *unk6C; } func_8028B370_S0;

typedef struct func_8028B370_S1 func_8028B370_S1;
struct func_8028B370_S1 {
    char pad0[0x4];
    s32 unk4;
};

s32 func_8028B370(void *arg0, s32 arg1) {
    s32 raw;
    s32 base;

    raw = func_8028FD94(((func_8028B370_S0 *)arg0)->unk6C, 2);
    base = raw + 8;
    if (arg1 < 0 || arg1 >= ((func_8028B370_S1 *)((raw)))->unk4) {
        return 0;
    }
    return base + (arg1 << 5);
}
