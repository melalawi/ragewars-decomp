/* Finds the first of the object's listed actors (count at 0xE50, pointers from 0xC50) linked to an id
   at 0x1D8, clears that actor's link and relinks every other actor with that id to it; returns the
   actor, or 0. */
typedef struct Actor {
    char pad[0x1D8];
    int link;
} Actor;

typedef struct {
    char pad[0xC50];
    Actor *actors[0x80];
    int count;
} Obj;

Actor *func_8028CC10(Obj *obj, int id) {
    int i;
    Actor *found;
    int count;
    Actor **list;

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
