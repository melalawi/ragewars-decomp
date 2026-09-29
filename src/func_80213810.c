#include "basetypes.h"

extern s32 D_8013B364;

extern void *func_8020C994(void *, s32);
extern s32 func_80274544(void);

typedef struct func_80213810_S1 func_80213810_S1;
typedef struct func_80213810_S2 func_80213810_S2;
struct func_80213810_S1 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
};
struct func_80213810_S2 {
    char pad0[0xC];
    u16 unkC;
};

void func_80213810(void *arg0)
{
    s32 *table = &D_8013B364;
    s32 tries = 0;
    s32 candidate;

    if (table[1] >= 2) {
        candidate = ((func_80213810_S1 *)(arg0))->unk22C;
loop:
        if (tries < 10) {
            candidate = func_80274544() % table[1];
            if (((func_80213810_S2 *)(func_8020C994(table, candidate)))->unkC & 0x400) {
                candidate = ((func_80213810_S1 *)(arg0))->unk22C;
            }
            tries++;
            if (candidate != ((func_80213810_S1 *)(arg0))->unk22C) {
                goto store_both;
            }
            goto loop;
        } else {
            ((func_80213810_S1 *)(arg0))->unk22C = candidate;
            goto store_c;
        }
    } else {
        candidate = 1;
    }
store_both:
    ((func_80213810_S1 *)(arg0))->unk22C = candidate;
store_c:
    ((func_80213810_S1 *)(arg0))->unkC = candidate;
}
