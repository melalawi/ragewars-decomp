/* Runs the resource manager thread: waits for messages on its queue D_801047E0 and, under the manager lock, frees the heap for messages 0 and 1, retries or completes a pending load request (flag 8) by unlinking it, draining its node's reference count, releasing an unused node's data and handle, and finishing the request, or otherwise (flag 4) starts it through func_80252714. The flag 8 path clears its reference loop with an inner do-while, and each branch unlocks itself. */
#include "basetypes.h"

typedef struct Node {
    void *data;
    s32 pad4;
    s32 count;
    s32 flags;
} Node;

typedef struct Request {
    Node *node;
    s32 pad4[3];
    s32 flags;
} Request;

typedef struct Manager {
    char queue[0x92C];
    char pending[0x14];
    char active[0x20];
    char lock[0x18];
} Manager;

extern Manager D_801047E0;
extern s32 D_8010515C;
extern char D_8010A248;
extern char D_801051A0;

extern void func_802C0390(void *, void *, s32);
extern s32 func_802C0510(void *, s32, s32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_80254F3C(s32, Request *);
extern s32 func_8025519C(void *, Request *, Manager *);
extern void func_80255E78(void *, Request *);
extern void func_80255C58(void *, Request *);
extern void func_80254D70(s32, Node *);
extern void func_80255ACC(void *, void *);
extern void func_80254A70(s32, Node *);
extern void func_80254E28(s32, Request *);
extern void func_80252714(s32, Request *, s32);

static inline void lock(void) {
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

static inline void unlock(void) {
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

void func_80252450(void *arg) {
    Request *request;
    Node *node;
    s32 flags;

    for (;;) {
        func_802C0390(&D_801047E0, &request, 1);
        if ((u32)request < 2) {
            lock();
            func_80254F3C(0, request);
            unlock();
        } else {
            request->flags &= ~2;
            flags = request->flags;
            if (flags & 8) {
                request->flags = flags & ~8;
                if (func_8025519C(&D_8010A248, request, &D_801047E0) == 0) {
                    lock();
                    func_80255E78(D_801047E0.active, request);
                    func_80255C58(D_801047E0.pending, request);
                    node = request->node;
                    node->flags &= ~2;
                    while (node->count != 0) {
                        do {
                        } while (--node->count != 0);
                        node->flags &= ~0x100;
                    }
                    if (!(node->flags & 0x702)) {
                        func_80254D70(0, node);
                        func_80255ACC(&D_801051A0, node->data);
                        func_80254A70(0, node);
                    }
                    func_80254E28(0, request);
                    unlock();
                }
            } else {
                request->flags = flags & ~4;
                lock();
                func_80252714(0, request, 1);
                unlock();
            }
        }
    }
}
