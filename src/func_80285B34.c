#include "basetypes.h"

/* With interrupts masked, takes the first node of a pool's free list, moves it onto the pool's active list and initialises it with its key, position, two values and owner slot (storing the node there), then binds the two handles named by the key's identifiers, returning the node or null. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Key {
    s16 first;
    s16 second;
} Key;

typedef struct Node {
    char pad0[8];
    Key *key;
    Vec3f position;
    f32 value0;
    f32 value1;
    char pad20[0x18];
    struct Node **owner;
} Node;

typedef struct Pool {
    Node *free;
    char pad4[0x10];
    Node *active;
} Pool;

extern char D_8011FE88;
extern s32 func_802C2020(void);
extern void func_802C2040(s32 mask);
extern void func_80255E78(Pool *pool, Node *node);
extern void func_80255CB4(Node **list, Node *node);
extern s32 func_8028CE54(void *table, s32 id);
extern void func_80264E00(void *slot, s32 handle);

static inline void bind(Node *node, s32 offset, s32 id) {
    func_80264E00((char *)node + offset, func_8028CE54(&D_8011FE88, id));
}

static inline void init(Node *node, Key *key, Vec3f position, f32 value0, f32 value1, Node **owner) {
    node->key = key;
    node->position = position;
    node->value0 = value0;
    node->value1 = value1;
    node->owner = owner;
    if (owner != 0) {
        *owner = node;
    }
    bind(node, 0x20, key->first);
    bind(node, 0x2C, key->second);
}

Node *func_80285B34(Pool *pool, Key *key, Vec3f position, f32 value0, f32 value1, Node **owner) {
    s32 mask;
    Node *node;

    mask = func_802C2020();
    node = pool->free;
    if (node != 0) {
        func_80255E78(pool, node);
        func_80255CB4(&pool->active, node);
        init(node, key, position, value0, value1, owner);
    }
    func_802C2040(mask);
    return node;
}
