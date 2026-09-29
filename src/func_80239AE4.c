#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_80239AE4_S1 func_80239AE4_S1;
typedef struct func_80239AE4_S2 func_80239AE4_S2;
struct func_80239AE4_S1 {
    char pad0[0xE40];
    char unkE40;
    char padE40[0xE44 - 0xE40 - sizeof(char)];
    Node* unkE44;
};
struct func_80239AE4_S2 {
    char pad0[0xF24];
    char unkF24;
};

void func_80239AE4(s32 arg0, void *arg1) {
    Node *var_s1;
    Node *temp_s0;
    void *var_a0;

    if (arg1 != 0) {
        var_s1 = ((func_80239AE4_S1 *)(arg1))->unkE44;
        var_a0 = &((func_80239AE4_S1 *)(arg1))->unkE40;
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1->next;
                func_80255E78(var_a0, var_s1);
                func_80255C58(&((func_80239AE4_S2 *)(arg0))->unkF24, (s32)var_s1);
                var_s1 = temp_s0;
                var_a0 = &((func_80239AE4_S1 *)(arg1))->unkE40;
            } while (var_s1 != 0);
        }
    }
}
