#include "basetypes.h"

extern s32 D_8013B364;
extern s32 D_8013B368;

extern void *func_8020C994(void *, s32);
extern s32 func_80274544(void);

typedef struct func_80213340_S1 func_80213340_S1;
typedef struct func_80213340_S2 func_80213340_S2;
typedef struct func_80213340_S3 func_80213340_S3;
struct func_80213340_S1 {
    char pad0[0xC];
    u16 unkC;
};
struct func_80213340_S2 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
};
struct func_80213340_S3 {
    char pad0[0xC];
    u16 unkC;
};

void func_80213340(void *arg0)
{
    s32 choices[32];
    s32 count;
    s32 result;
    s32 fill;

    result = 0;
    count = result;
    fill = -1;
    {
        s32 index = 31;
        do {
            choices[index] = fill;
            index--;
        } while (index >= 0);

        {
            s32 *table = &D_8013B364;
        index = 0;
        if (table[1] > 0) {
            do {
                if (((func_80213340_S1 *)(func_8020C994(table, index)))->unkC & 0x800) {
                    choices[count] = index;
                    count++;
                }
                index++;
            } while (index < table[1]);
        }
        }
    }

    if (count == 0) {
        s32 global_count = D_8013B368;
        s32 *table = &D_8013B364;
        s32 tries = 0;
        s32 candidate;
        if (global_count >= 2) {
            candidate = ((func_80213340_S2 *)(arg0))->unk22C;
loop:
            if (tries < 10) {
                candidate = func_80274544() % table[1];
                if (((func_80213340_S3 *)(func_8020C994(table, candidate)))->unkC & 0x400) {
                    candidate = ((func_80213340_S2 *)(arg0))->unk22C;
                }
                tries++;
                if (candidate != ((func_80213340_S2 *)(arg0))->unk22C) {
                    goto store_both;
                }
                goto loop;
            } else {
                ((func_80213340_S2 *)(arg0))->unk22C = candidate;
                goto store_c;
            }
        } else {
            candidate = 1;
        }
store_both:
        ((func_80213340_S2 *)(arg0))->unk22C = candidate;
store_c:
        ((func_80213340_S2 *)(arg0))->unkC = candidate;
    } else {
        result = choices[func_80274544() % count];
    }

    ((func_80213340_S2 *)(arg0))->unk22C = result;
    ((func_80213340_S2 *)(arg0))->unkC = result;
}
