#include "basetypes.h"

typedef struct Node {
    s32 unk0;
    struct Node *next;
    s32 value;
    s32 state;
} Node;

extern void func_8025E194(s32 arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_8025CC0C_S1 func_8025CC0C_S1;
typedef union func_8025CC0C_S1_U14 { Node* v0; char v1; } func_8025CC0C_S1_U14;
struct func_8025CC0C_S1 {
    char pad0[0x14];
    func_8025CC0C_S1_U14 unk14;
};

void func_8025CC0C(void *arg0) {
    Node *cur;
    Node *next;
    s32 value;

    cur = ((func_8025CC0C_S1 *)(arg0))->unk14.v0;
    if (cur != 0) {
        do {
            value = cur->value;
            next = cur->next;
            func_8025E194(value);
            cur->state = -1;
            cur->value = -1;
            func_80255E78(&((func_8025CC0C_S1 *)(arg0))->unk14.v1, cur);
            func_80255CB4(arg0, (s32)cur);
            cur = next;
        } while (cur != 0);
    }
}
