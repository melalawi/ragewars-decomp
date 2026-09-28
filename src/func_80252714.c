/* Activates a load request: moves it from the pending to the active list and, when its node is set, looks its key up in the request hash table; an existing request with lower priority is removed from the table and finished, releasing its node's data and node when nothing else holds them, while an existing request with at least the same priority wins and this request's node is released and the request finished, returning the existing one; otherwise, or after replacing, the request is inserted, owns its node and optionally drops the node's pending reference. The hash lookup and node release are the inline forms of func_80251754's lookup and func_80254A70. */
#include "basetypes.h"

typedef struct Node {
    void *data;
    s32 pad4;
    s32 count;
    s32 flags;
    s32 pad10;
    struct Request *owner;
} Node;

typedef struct Request {
    Node *node;
    s32 pad4;
    s32 key;
    s32 priority;
} Request;

typedef struct HashNode {
    s32 key;
    Request *value;
    s32 pad8;
    struct HashNode *next;
} HashNode;

extern char D_80105120;
extern char D_801051A0;
extern s32 D_80104570;
extern Node **D_80104564;
extern Node *D_80104568;
extern s32 D_8010513C;
extern u32 D_80105190;
extern HashNode *D_80105194;

extern void func_80255E78(void *, void *);
extern void func_80255C58(void *, void *);
extern void func_80254E28(s32, Request *);
extern void func_80255428(s32);
extern void func_80255ACC(void *, void *);
extern void func_80255354(s32, Request *);

static inline void find(s32 key, Request **out) {
    HashNode *node = D_80105194 + (((key << 5) ^ ((u32)key >> 1) ^ ((u32)key >> 9) ^ ((u32)key >> 17)) & D_80105190);

    if (node->key == key) {
        *out = node->value;
        return;
    }
    *out = 0;
    while (node != 0) {
        if (node->key == key) {
            *out = node->value;
            return;
        }
        node = node->next;
    }
}

static inline void release(s32 node) {
    func_80255E78(&D_80104570, (void *)node);
    if (*(s32 *)(node + 0xC) & 0x1000) {
        func_80255E78((char *)&D_80104570 + 0x14, (void *)node);
    }
    if (*(&D_80104570 - 2) == node) {
        *(&D_80104570 - 2) = 0;
    }
    *(s32 *)(node + 0xC) = 0;
    D_80104564[D_8010513C] = (Node *)node;
    *(&D_80104570 + 0x2F3) += 1;
}

Request *func_80252714(s32 unused, Request *request, s32 dropReference) {
    Request *existing;
    Node *node;

    func_80255E78(&D_80105120, request);
    func_80255C58((char *)&D_80105120 - 0x14, request);
    if (request->node != 0) {
        find(request->key, &existing);
        if (existing != 0) {
            if (existing->priority < request->priority) {
                func_80255428(existing->key);
                existing->node->owner = 0;
                if (!(existing->node->flags & 0x702)) {
                    func_80255ACC(&D_801051A0, existing->node->data);
                    release((s32)existing->node);
                }
                func_80254E28(0, existing);
            } else {
                func_80255ACC(&D_801051A0, request->node->data);
                release((s32)request->node);
                func_80254E28(0, request);
                return existing;
            }
        }
        func_80255354(request->key, request);
        request->node->owner = request;
        if (dropReference != 0) {
            node = request->node;
            if (--node->count == 0) {
                node->flags &= ~0x100;
            }
        }
        return request;
    }
    func_80254E28(0, request);
    return 0;
}
