#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
/* Finds the first of the object's listed actors (count at 0xE50, pointers from 0xC50) linked to an id
   at 0x1D8, clears that actor's link and relinks every other actor with that id to it; returns the
   actor, or 0. */




Actor_func_8028CC34_de *func_8028CC34_de(Obj_func_8028CC34_de *obj, int id) {
    int i;
    Actor_func_8028CC34_de *found;
    int count;
    Actor_func_8028CC34_de **list;

    i = 0;
    found = 0;
    count = obj->count;
    list = obj->actors;
    for (; i < count; i++) {
        if (list[i]->link == id) {
            found = list[i];
            found->link = 0;
            break;
        }
    }
    for (i = 0; i < count; i++) {
        if (list[i]->link == id) {
            list[i]->link = (int)found;
        }
    }
    return found;
}
