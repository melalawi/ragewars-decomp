#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80212C90.h"
#include "types.h"

extern s32 D_801372A4;


extern void *func_8020C994_de(void *, s32);
extern s32 func_802744D4_de(void);








void func_80213340_de(void *arg0)
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
            s32 *table = &D_801372A4;
        index = 0;
        if (table[1] > 0) {
            do {
                if (((func_8020CA10_S2 *)(func_8020C994_de(table, index)))->unkC & 0x800) {
                    choices[count] = index;
                    count++;
                }
                index++;
            } while (index < table[1]);
        }
        }
    }

    if (count == 0) {
        s32 global_count = D_801372A8;
        s32 *table = &D_801372A4;
        s32 tries = 0;
        s32 candidate;
        if (global_count >= 2) {
            candidate = ((func_80213340_S2 *)(arg0))->unk22C;
loop:
            if (tries < 10) {
                candidate = func_802744D4_de() % table[1];
                if (((func_8020CA10_S2 *)(func_8020C994_de(table, candidate)))->unkC & 0x400) {
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
        result = choices[func_802744D4_de() % count];
    }

    ((func_80213340_S2 *)(arg0))->unk22C = result;
    ((func_80213340_S2 *)(arg0))->unkC = result;
}
