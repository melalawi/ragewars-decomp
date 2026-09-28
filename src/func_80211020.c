#include "basetypes.h"

typedef s32 (*Handler)(void *arg0);

extern Handler *D_800CE000[];

void func_80211020(void *arg0) {
    s32 origIdx;
    s32 idx;
    s32 idx2;
    Handler *table;
    Handler fn;
    s32 result;

    origIdx = *(s32 *)((char *)arg0 + 0x21C);
    if ((u32)origIdx >= 0xE) {
        *(s32 *)((char *)arg0 + 0x21C) = 0;
    }
    idx = *(s32 *)((char *)arg0 + 0x21C);
    table = D_800CE000[idx];
    if (table != 0) {
        idx2 = *(s32 *)((char *)arg0 + 0x220);
        fn = table[idx2];
        if (fn == 0) {
            *(s32 *)((char *)arg0 + 0x220) = 0;
            fn = table[0];
        }
        if (fn != 0) {
            result = fn(arg0);
            if (result != 0) {
                *(s32 *)((char *)arg0 + 0x220) = *(s32 *)((char *)arg0 + 0x220) + 1;
            }
            if (*(s32 *)((char *)arg0 + 0x21C) != origIdx) {
                *(s32 *)((char *)arg0 + 0x220) = 0;
            }
        }
    }
}
