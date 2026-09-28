/* Reclaims one pool node: finds the first unlocked node (none of flags 0x702) in the D_80104574 list that
 * was last used five or more frames ago, falling back unless keep_recent is set to the first unlocked node
 * even if recent; the node's resource is released through func_80254D70 and func_80255ACC, it is unlinked
 * from its lists, cleared, and pushed back on the free stack, returning func_80255ACC's result (0 when no
 * node could be reclaimed). */
#include "basetypes.h"

typedef struct Node {
    s32 resource;
    char pad4[8];
    s32 flags;
    s32 lastUsed;
    char pad14[4];
    struct Node *next;
} Node;

extern Node *D_80104574;
extern Node *D_80104568;
extern Node **D_80104564;
extern s32 D_8010513C;
extern s32 D_80105180;
extern char D_801051A0;
extern char D_80104570;
extern char D_80104584;
extern void func_80254D70(void *, Node *);
extern s32 func_80255ACC(void *, s32);
extern void func_80255E78(void *, Node *);

static inline Node *find_stale(Node **recent) {
    Node *node;

    for (node = D_80104574; node != 0; node = node->next) {
        if (!(node->flags & 0x702)) {
            if ((u32)(D_80105180 - node->lastUsed) >= 5) {
                return node;
            }
            *recent = node;
            break;
        }
    }
    for (; node != 0; node = node->next) {
        if (!(node->flags & 0x702) && (u32)(D_80105180 - node->lastUsed) >= 5) {
            return node;
        }
    }
    return 0;
}

s32 func_802512C8(s32 unused0, s32 unused1, s32 keep_recent) {
    Node *recent;
    Node *node;
    s32 result;

    recent = 0;
    node = find_stale(&recent);
    if (node == 0) {
        if (keep_recent == 0) {
            node = recent;
        }
    }
    if (node != 0) {
        func_80254D70(0, node);
        result = func_80255ACC(&D_801051A0, node->resource);
        func_80255E78(&D_80104570, node);
        if (node->flags & 0x1000) {
            func_80255E78(&D_80104584, node);
        }
        if (D_80104568 == node) {
            D_80104568 = 0;
            node->flags = 0;
        } else {
            node->flags = 0;
        }
        *(Node **)(D_8010513C * 4 + (char *)D_80104564) = node;
        D_8010513C++;
        return result;
    }
    return 0;
}
