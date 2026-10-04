#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"
#ifndef FUNC_802796F4_DE
#define FUNC_802796F4_DE
#include "types.h"
#ifndef UNBAKE_FUNC_802796F4_DE_H
#define UNBAKE_FUNC_802796F4_DE_H
#include "types.h"



















#endif



#endif










void func_802796F4_de(Lists18 *arg0, Link_func_802596B4_de *arg1) {
    List802795C0 *inactive;
    Link_func_802596B4_de *tail;

    inactive = &arg0->inactive;
    if (arg1->prev != 0) {
        arg1->prev->next = arg1->next;
    }
    if (arg1->next != 0) {
        arg1->next->prev = arg1->prev;
    }
    if (inactive->head == arg1) {
        inactive->head = arg1->prev;
    }
    if (inactive->tail == arg1) {
        inactive->tail = arg1->next;
    }
    inactive->count -= 1;

    if (arg0->active.count == 0) {
        arg0->active.head = arg1;
        arg0->active.tail = arg1;
        arg1->next = 0;
        arg1->prev = 0;
    } else {
        tail = arg0->active.tail;
        arg1->prev = 0;
        arg1->next = tail;
        arg0->active.tail->prev = arg1;
        arg0->active.tail = arg1;
    }
    arg0->active.count += 1;
}
