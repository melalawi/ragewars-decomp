#include "span_1000/code_802BB67C.h"
#include "shared/func_802BB8B0_de_closed.h"

void func_802BB8B0_de(void)
{
    OSTimer_s *t;
    u32 count;
    u32 elapsed_cycles;
    u32 *counter;

    if (((OSTimer_s *)D_800D5280)->next == D_800D5280) {
        return;
    }
    counter = &D_80149BA0;
    for (;;) {
        t = ((OSTimer_s *)D_800D5280)->next;

        if (t == D_800D5280) {
            func_802BD150_de(0);
            D_80149BA0 = 0;
            break;
        }

        count = func_802BCF00_de();
        elapsed_cycles = count - *counter;
        *counter = count;

        if (elapsed_cycles < t->value) {
            t->value -= elapsed_cycles;
            func_802BBA4C_de(t->value);
            break;
        }

        t->prev->next = t->next;
        t->next->prev = t->prev;
        t->next = 0;
        t->prev = 0;

        if (t->mq != 0) {
            func_802BB420_de(t->mq, t->msg, 0);
        }

        if (t->interval != 0) {
            t->value = t->interval;
            func_802BBAAC_de(t);
        }
    }
}
