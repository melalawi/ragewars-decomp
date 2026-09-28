/* Returns the name the object at offset 0x5D8 of an actor's owner holds, falling back to
   D_80146302 when the actor has no owner or the owner has no such object. */
struct Owner {
    char pad[0x5D8];
    char *name;
};

struct Actor {
    char pad[0x1C];
    struct Owner *owner;
};

extern char D_80146302[];

char *func_80444364(struct Actor *actor) {
    char *name = D_80146302;

    if (actor->owner != 0 && actor->owner->name != 0) {
        name = actor->owner->name;
    }
    return name;
}
