#include "basetypes.h"

extern s32 D_8013B364;
extern s32 D_8013B368;

extern void *func_8020C994(void *, s32);
extern s32 func_80274544(void);

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
                if (*(u16 *)((char *)func_8020C994(table, index) + 0xC) & 0x800) {
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
            candidate = *(s32 *)((char *)arg0 + 0x22C);
loop:
            if (tries < 10) {
                candidate = func_80274544() % table[1];
                if (*(u16 *)((char *)func_8020C994(table, candidate) + 0xC) & 0x400) {
                    candidate = *(s32 *)((char *)arg0 + 0x22C);
                }
                tries++;
                if (candidate != *(s32 *)((char *)arg0 + 0x22C)) {
                    goto store_both;
                }
                goto loop;
            } else {
                *(s32 *)((char *)arg0 + 0x22C) = candidate;
                goto store_c;
            }
        } else {
            candidate = 1;
        }
store_both:
        *(s32 *)((char *)arg0 + 0x22C) = candidate;
store_c:
        *(s32 *)((char *)arg0 + 0xC) = candidate;
    } else {
        result = choices[func_80274544() % count];
    }

    *(s32 *)((char *)arg0 + 0x22C) = result;
    *(s32 *)((char *)arg0 + 0xC) = result;
}
