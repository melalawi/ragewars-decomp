#include "common/types.h"
#include "span_1000/code_80278C80.h"
#include "span_1000/types.h"
#include "types.h"
#ifndef FUNC_8027963C_DE
#define FUNC_8027963C_DE
#include "types.h"
#ifndef UNBAKE_FUNC_8027963C_DE_H
#define UNBAKE_FUNC_8027963C_DE_H
#include "types.h"



















#endif



#endif










Link_func_802596B4_de *func_8027963C_de(Lists18 *arg0) {
    Link_func_802596B4_de *node;
    Link_func_802596B4_de *tail;
    List802795C0 *inactive;

    node = arg0->active.head;
    if (node != 0) {
        if (node->prev != 0) {
            node->prev->next = node->next;
        }
        if (node->next != 0) {
            node->next->prev = node->prev;
        }
        if (arg0->active.head == node) {
            arg0->active.head = node->prev;
        }
        if (arg0->active.tail == node) {
            arg0->active.tail = node->next;
        }
        arg0->active.count -= 1;

        inactive = &arg0->inactive;
        if (inactive->count == 0) {
            inactive->head = node;
            inactive->tail = node;
            node->next = 0;
            node->prev = 0;
        } else {
            tail = inactive->tail;
            node->prev = 0;
            node->next = tail;
            inactive->tail->prev = node;
            inactive->tail = node;
        }
        inactive->count += 1;
    }
    return node;
}
