#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern void *D_801450A8;
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void func_80239B54(s32 arg0) {
    Node *temp_s0;
    Node *temp_s0_2;
    Node *var_s1;
    Node *var_s1_2;
    void *temp_s2;
    void *var_s2;

    temp_s2 = (void *)(arg0 + 0x40);
    if (temp_s2 != 0) {
        var_s1 = *(Node **)((char *)temp_s2 + 0xE44);
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1->next;
                func_80255E78((char *)temp_s2 + 0xE40, var_s1);
                func_80255C58((void *)(arg0 + 0xF24), (s32)var_s1);
                var_s1 = temp_s0;
            } while (var_s1 != 0);
        }
    }

    var_s2 = D_801450A8;
    if (var_s2 != 0) {
        do {
            var_s1_2 = *(Node **)((char *)var_s2 + 0xE44);
            if (var_s1_2 != 0) {
                do {
                    temp_s0_2 = var_s1_2->next;
                    func_80255E78((char *)var_s2 + 0xE40, var_s1_2);
                    func_80255C58((void *)(arg0 + 0xF24), (s32)var_s1_2);
                    var_s1_2 = temp_s0_2;
                } while (var_s1_2 != 0);
            }
            var_s2 = *(void **)((char *)var_s2 + 4);
        } while (var_s2 != 0);
    }
}
