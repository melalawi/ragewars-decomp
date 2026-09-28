#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void func_80239AE4(s32 arg0, void *arg1) {
    Node *var_s1;
    Node *temp_s0;
    void *var_a0;

    if (arg1 != 0) {
        var_s1 = *(Node **)((char *)arg1 + 0xE44);
        var_a0 = (char *)arg1 + 0xE40;
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1->next;
                func_80255E78(var_a0, var_s1);
                func_80255C58((char *)arg0 + 0xF24, (s32)var_s1);
                var_s1 = temp_s0;
                var_a0 = (char *)arg1 + 0xE40;
            } while (var_s1 != 0);
        }
    }
}
