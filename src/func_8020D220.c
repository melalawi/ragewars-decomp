/* Stores an id in the first free (-1) of the object's 64 id slots at 0x38 and flags the node with that
   id in the object's list at 0x24 as active. */
typedef struct Node {
    int id;
    char pad4[0xC];
    struct Node *next;
    char pad14[0x18];
    int active;
} Node;

typedef struct {
    char pad[0x24];
    Node *list;
    char pad28[0x10];
    int ids[64];
} Obj;

static inline Node *find_node(Obj *obj, int id) {
    Node *node;

    for (node = obj->list; node != 0; node = node->next) {
        if (node->id == id) {
            return node;
        }
    }
    return 0;
}

void func_8020D220(Obj *obj, int id) {
    int i;

    for (i = 0; i < 64; i++) {
        if (obj->ids[i] == -1) {
            obj->ids[i] = id;
            find_node(obj, id)->active = 1;
            return;
        }
    }
}
