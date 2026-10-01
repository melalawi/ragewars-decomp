/* Looks a key up in the request hash table under the manager lock: an existing request bumps its
   node's reference count and flags, stamps it and hands the node to func_80255F58; otherwise, unless
   a request for the key is already active, a fresh request is taken, filled in from the arguments,
   given a reference on each of the two nodes and moved to the active list. Outside the lock the
   request is then either started asynchronously through func_80255110 and func_80252714, or run
   synchronously through func_8025519C, whose failure gives the two references back and finishes the
   request. The lock, the hash lookup and the reference bump are the inline forms of func_80252450,
   func_80251754 and func_80252714. The eighth argument is never read.

   Manager is one object, which is what lets the compiler reach its lock queue from whichever of its
   members is already in a base register; D_8010515C is a separate symbol although it lies past the
   members named here, because every reference to it materialises its own address. */
#include "basetypes.h"

typedef struct Node {
    void *data;        /* 0x00 */
    s32 unk04;         /* 0x04 */
    s32 count;         /* 0x08 */
    s32 flags;         /* 0x0C */
    s32 stamp;         /* 0x10 */
} Node;

typedef struct Request {
    Node *node;             /* 0x00 */
    Node *extra;            /* 0x04 */
    s32 key;                /* 0x08 */
    s32 priority;           /* 0x0C */
    s32 flags;              /* 0x10 */
    void *unk14;            /* 0x14 */
    void *owner;            /* 0x18 */
    s32 mode;               /* 0x1C */
    void *unk20;            /* 0x20 */
    struct Request *next;   /* 0x24 */
} Request;

typedef struct HashNode {
    s32 key;                /* 0x00 */
    Request *value;         /* 0x04 */
    s32 unk08;              /* 0x08 */
    struct HashNode *next;  /* 0x0C */
} HashNode;

typedef struct Manager {
    char queue[0x92C];      /* 0x000 */
    char pending[0x14];     /* 0x92C */
    char active[0x20];      /* 0x940 */
    char lock[0x18];        /* 0x960 */
    char unk978[0x24];      /* 0x978 */
    s32 mask;               /* 0x99C */
} Manager;

extern Manager D_801047E0;
extern s32 D_80104570;
extern s32 D_8010515C;
extern s32 D_80105180;
extern s32 D_80105190;
extern s32 D_80105194;
extern s32 D_8010A248;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(void *, s32, s32);
extern s32 func_802C0510(void *, s32, s32);
extern Request *func_80254E70(s32, s32);
extern void func_80254E28(s32, Request *);
extern void func_80255110(s32 *, Request *);
extern s32 func_8025519C(s32 *, Request *, Manager *);
extern void func_80255C58(void *, Request *);
extern void func_80255CB4(void *, Request *);
extern void func_80255E78(void *, Request *);
extern void func_80255F58(void *, Node *);
extern Request *func_80252714(s32, Request *, s32);

static inline void addref(Node *node) {
    node->count += 1;
    node->flags |= 0x100;
}

static inline void stamp(Node *node) {
    node->stamp = D_80105180;
    func_80255F58(&D_80104570, node);
}

static inline void unref(Node *node) {
    if (--node->count == 0) {
        node->flags &= ~0x100;
    }
}

static inline void acquire(void) {
    u32 token = func_802C2020();
    s32 counter = D_8010515C + 1;

    D_8010515C = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390(D_801047E0.lock, 0, 1);
    } else {
        func_802C2040(token);
    }
}

static inline void release(void) {
    u32 token = func_802C2020();
    s32 counter = D_8010515C - 1;

    D_8010515C = counter;
    if (counter != 0) {
        func_802C2040(token);
        func_802C0510(D_801047E0.lock, 0, 1);
    } else {
        func_802C2040(token);
    }
}

Node *func_80251F0C(s32 unused, s32 key, Node *first, Node *second, s32 mode, void *owner,
                    void *tag, void *spare, s32 async) {
    HashNode *node;
    Request *found;
    Request **out;
    Request *scan;
    s32 busy;

    acquire();

    out = &found;
    node = (HashNode *)((s32)D_80105194 +
        ((((key << 5) ^ ((u32)key >> 1) ^ ((u32)key >> 9) ^
           ((u32)key >> 17)) & D_80105190) * 0x10));
    if (node->key != key) {
        goto not_initial;
    }
    found = node->value;
    goto done;
loop_found:
    *out = node->value;
    goto done;
not_initial:
    found = 0;
    if (node == 0) {
        goto done;
    }
loop:
    if (node->key == key) {
        goto loop_found;
    }
    node = node->next;
    if (node != 0) {
        goto loop;
    }
done:

    busy = 0;
    if (found != 0) {
        addref(found->node);
        stamp(found->node);
        release();
        return found->node;
    }

    async |= D_801047E0.mask;
    scan = *(Request **)D_801047E0.active;
    while (scan != 0) {
        if (scan->key == key) {
            busy = 1;
            break;
        }
        scan = scan->next;
    }
    if (busy == 0) {
        found = func_80254E70(0, mode);
        if (found != 0) {
            found->key = key;
            found->priority = 0;
            found->owner = owner;
            found->unk14 = tag;
            found->mode = mode;
            found->node = first;
            found->extra = second;

            if (first != 0) {
                addref(first);
            }
            if (second != 0) {
                addref(second);
            }

            func_80255E78(D_801047E0.pending, found);
            func_80255CB4(D_801047E0.active, found);
            release();

            if (async != 0) {
                found->flags &= ~0xE;
                func_80255110(&D_8010A248, found);
                acquire();
                found = func_80252714(0, found, 0);
                release();
                if (found != 0) {
                    return found->node;
                }
                return 0;
            }

            if (func_8025519C(&D_8010A248, found, &D_801047E0) == 0) {
                acquire();
                if (first != 0) {
                    unref(first);
                }
                if (second != 0) {
                    unref(second);
                }
                func_80255E78(D_801047E0.active, found);
                func_80255C58(D_801047E0.pending, found);
                func_80254E28(0, found);
                release();
            }
            return 0;
        }
    }
    release();
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FF120_14[] = {0x0A, 0x60, 0x16, 0x05, 0x2C, 0x04, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x62, 0x1A, 0x05, 0x2C, 0x04, 0x03};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1448_98[] = {0x00, 0x42, 0x72, 0xC8, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x74, 0x58, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x93, 0x60, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x78, 0x24, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x6E, 0x50, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x93, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x99, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x99, 0x78, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x93, 0xB8, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x95, 0x1C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x97, 0xE4, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x42, 0x96, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xAD, 0x00, 0x10};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EB238_4[] = {0x00, 0x00, 0x00, 0x23};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800F2CE0_20[] = {0x00, 0x00, 0x01, 0x63, 0x00, 0x00, 0x01, 0xB6, 0x00, 0x00, 0x01, 0x64, 0x00, 0x00, 0x01, 0x63, 0x00, 0x00, 0x01, 0x97, 0x00, 0x00, 0x01, 0x63, 0x00, 0x00, 0x01, 0x8F, 0x00, 0x00, 0x01, 0x94};
#endif
