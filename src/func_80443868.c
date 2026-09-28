#include "basetypes.h"

/* Sets the byte at offset 0x8E of the object reached through offset 0x1C of the second argument
   and then offset 0x5D8, and returns one. */
struct Leaf {
    char pad[0x8E];
    u8 flag;
};

struct Middle {
    char pad[0x5D8];
    struct Leaf *leaf;
};

struct Root {
    char pad[0x1C];
    struct Middle *middle;
};

s32 func_80443868(void *unused, struct Root *root) {
    root->middle->leaf->flag = 1;
    return 1;
}
