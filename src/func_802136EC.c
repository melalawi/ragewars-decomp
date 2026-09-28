#include "basetypes.h"

extern s32 D_8013B364;
extern s32 D_8013B368;

extern void func_80213340(void *arg0);
extern s32 func_80274544(void);
extern void *func_8020C994(void *, s32);
extern void func_80209988(void *arg0);

void func_802136EC(void *arg0)
{
    void *actor = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);

    *(s32 *)((char *)actor + 0x220) = 0;
    {
        void *data = *(void **)((char *)*(void **)actor + 0x5D8);
        if (*(u8 *)((char *)data + 0x94) && *(s8 *)((char *)data + 0x80) == 12) {
            func_80213340(actor);
        } else {
            s32 global_count = D_8013B368;
            s32 *table = &D_8013B364;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = *(s32 *)((char *)actor + 0x22C);
loop:
                if (tries < 10) {
                    candidate = func_80274544() % table[1];
                    if (*(u16 *)((char *)func_8020C994(table, candidate) + 0xC) & 0x400) {
                        candidate = *(s32 *)((char *)actor + 0x22C);
                    }
                    tries++;
                    if (candidate != *(s32 *)((char *)actor + 0x22C)) {
                        goto store_both;
                    }
                    goto loop;
                } else {
                    *(s32 *)((char *)actor + 0x22C) = candidate;
                    goto store_c;
                }
            } else {
                candidate = 1;
            }
store_both:
            *(s32 *)((char *)actor + 0x22C) = candidate;
store_c:
            *(s32 *)((char *)actor + 0xC) = candidate;
        }
    }
    func_80209988(actor);
    *(s32 *)((char *)actor + 0x320) = -1;
}
