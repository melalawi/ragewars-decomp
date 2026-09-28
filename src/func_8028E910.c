#include "basetypes.h"

typedef struct Node {
    struct Node *next;
    void *queue;
} Node;

extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, void *arg1, s32 arg2);
extern void func_8028EAAC(void *arg0);
extern void func_8028ED80(void *arg0);
extern void func_8028F258(void *arg0);
extern void func_8028FBF0(void *arg0);
extern void func_8025E338(void);
extern void func_8025E234(s32 arg0);
extern void *func_8025CC8C(void);
extern void func_8025CC0C(void *arg0);
extern void func_802BF960(f32 arg0);
extern void func_802BF7A0(void *arg0);
extern void func_802BF2A0(s32 arg0);
extern void func_802BF7F0(s32 arg0);
extern void func_8040C398(void);

extern s32 D_800D2958;
extern s32 D_800D295C;
extern f32 D_800CA440;
extern s32 D_800E28D8;
extern char D_800D87E0;
extern char D_800D8560;

void func_8028E910(void *arg0) {
    s32 event;
    Node *node;
    void *resource;

loop_1:
loop_2:
    func_802C0390((char *)arg0 + 0x40, &event, 1);
    if (event == 0x29B) {
        goto event_29b;
    }
    if (event < 0x29C) {
        if (event == 6) {
            goto event_6;
        }
        if (event == 0x29A) {
            goto event_29a;
        }
        goto loop_2;
    }
    if (event == 0x29C) {
        goto event_29c;
    }
    if (event == 0x29D) {
        goto event_29d;
    }
    goto loop_2;

event_29a:
    if (D_800D2958 != 0) {
        D_800D295C--;
        if (D_800D295C <= 0) {
            func_802BF960(D_800CA440);
            resource = &D_800D87E0;
            if (D_800E28D8 == 0) {
                resource = &D_800D8560;
            }
            func_802BF7A0(resource);
            func_802BF2A0(1);
            func_802BF7F0(2);
            for (;;) {
            }
        }
    }
    func_8028EAAC(arg0);
    func_8040C398();
    goto loop_1;

event_29b:
    func_8028ED80(arg0);
    goto loop_1;

event_29c:
    func_8028F258(arg0);
    goto loop_1;

event_29d:
    func_8025E338();
    func_8025E234(-1);
    func_8025CC0C(func_8025CC8C());
    node = *(Node **)((char *)arg0 + 0x2E0);
    D_800D2958 = 1;
    D_800D295C = 0x14;
    if (node != 0) {
        do {
            func_802C0510(node->queue, (char *)arg0 + 0x20, 0);
            node = node->next;
        } while (node != 0);
    }
    goto loop_1;

event_6:
    func_8028FBF0(arg0);
    goto loop_1;
}
