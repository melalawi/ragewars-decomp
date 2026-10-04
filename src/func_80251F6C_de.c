#include "common/types.h"
#include "span_1000/code_8024F944.h"
#include "types.h"
/* Looks a key up in the request hash table under the manager lock: an existing request bumps its
   node's reference count and flags, stamps it and hands the node to func_80255FB8_de; otherwise, unless
   a request for the key is already active, a fresh request is taken, filled in from the arguments,
   given a reference on each of the two nodes and moved to the active list. Outside the lock the
   request is then either started asynchronously through func_80255170_de and func_80252774_de, or run
   synchronously through func_802551FC_de, whose failure gives the two references back and finishes the
   request. The lock, the hash lookup and the reference bump are the inline forms of func_802524B0_de,
   func_802517B4_de and func_80252774_de. The eighth argument is never read.

   Manager is one object, which is what lets the compiler reach its lock queue from whichever of its
   members is already in a base register; D_8010515C is a separate symbol although it lies past the
   members named here, because every reference to it materialises its own address. */









extern Manager D_801007E0;
extern s32 D_80100570;

extern s32 D_80101180;
extern s32 D_80101190;
extern s32 D_80101194;
extern s32 D_80106248;

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(void *, s32, s32);
extern s32 func_802BB420_de(void *, s32, s32);
extern Request_func_80251F6C_de *func_80254ED0_de(s32, s32);
extern void func_80254E88_de(s32, Request_func_80251F6C_de *);
extern void func_80255170_de(s32 *, Request_func_80251F6C_de *);
extern s32 func_802551FC_de(s32 *, Request_func_80251F6C_de *, Manager *);
extern void func_80255CB8_de(void *, Request_func_80251F6C_de *);
extern void func_80255D14_de(void *, Request_func_80251F6C_de *);
extern void func_80255ED8_de(void *, Request_func_80251F6C_de *);
extern void func_80255FB8_de(void *, Node_func_80251F6C_de *);
extern Request_func_80251F6C_de *func_80252774_de(s32, Request_func_80251F6C_de *, s32);

static inline void addref(Node_func_80251F6C_de *node) {
    node->count += 1;
    node->flags |= 0x100;
}

static inline void stamp(Node_func_80251F6C_de *node) {
    node->stamp = D_80101180;
    func_80255FB8_de(&D_80100570, node);
}

static inline void unref(Node_func_80251F6C_de *node) {
    if (--node->count == 0) {
        node->flags &= ~0x100;
    }
}

static inline void acquire(void) {
    u32 token = func_802BCF30_de();
    s32 counter = D_8010115C + 1;

    D_8010115C = counter;
    if (counter != 1) {
        func_802BCF50_de(token);
        func_802BB2A0_de(D_801007E0.lock, 0, 1);
    } else {
        func_802BCF50_de(token);
    }
}

static inline void release(void) {
    u32 token = func_802BCF30_de();
    s32 counter = D_8010115C - 1;

    D_8010115C = counter;
    if (counter != 0) {
        func_802BCF50_de(token);
        func_802BB420_de(D_801007E0.lock, 0, 1);
    } else {
        func_802BCF50_de(token);
    }
}

Node_func_80251F6C_de *func_80251F6C_de(s32 unused, s32 key, Node_func_80251F6C_de *first, Node_func_80251F6C_de *second, s32 mode, void *owner,
                    void *tag, void *spare, s32 async) {
    HashNode_func_80251F6C_de *node;
    Request_func_80251F6C_de *found;
    Request_func_80251F6C_de **out;
    Request_func_80251F6C_de *scan;
    s32 busy;

    acquire();

    out = &found;
    node = (HashNode_func_80251F6C_de *)((s32)D_80101194 +
        ((((key << 5) ^ ((u32)key >> 1) ^ ((u32)key >> 9) ^
           ((u32)key >> 17)) & D_80101190) * 0x10));
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

    async |= D_801007E0.mask;
    scan = *(Request_func_80251F6C_de **)D_801007E0.active;
    while (scan != 0) {
        if (scan->key == key) {
            busy = 1;
            break;
        }
        scan = scan->next;
    }
    if (busy == 0) {
        found = func_80254ED0_de(0, mode);
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

            func_80255ED8_de(D_801007E0.pending, found);
            func_80255D14_de(D_801007E0.active, found);
            release();

            if (async != 0) {
                found->flags &= ~0xE;
                func_80255170_de(&D_80106248, found);
                acquire();
                found = func_80252774_de(0, found, 0);
                release();
                if (found != 0) {
                    return found->node;
                }
                return 0;
            }

            if (func_802551FC_de(&D_80106248, found, &D_801007E0) == 0) {
                acquire();
                if (first != 0) {
                    unref(first);
                }
                if (second != 0) {
                    unref(second);
                }
                func_80255ED8_de(D_801007E0.active, found);
                func_80255CB8_de(D_801007E0.pending, found);
                func_80254E88_de(0, found);
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
