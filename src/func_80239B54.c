#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern void *D_801450A8;
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_80239B54_S1 func_80239B54_S1;
typedef struct func_80239B54_S2 func_80239B54_S2;
struct func_80239B54_S1 {
    char pad0[0xE40];
    char unkE40;
    char padE40[0xE44 - 0xE40 - sizeof(char)];
    Node* unkE44;
};
struct func_80239B54_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0xE40 - 0x4 - sizeof(void*)];
    char unkE40;
    char padE40[0xE44 - 0xE40 - sizeof(char)];
    Node* unkE44;
};

void func_80239B54(s32 arg0) {
    Node *temp_s0;
    Node *temp_s0_2;
    Node *var_s1;
    Node *var_s1_2;
    void *temp_s2;
    void *var_s2;

    temp_s2 = (void *)(arg0 + 0x40);
    if (temp_s2 != 0) {
        var_s1 = ((func_80239B54_S1 *)(temp_s2))->unkE44;
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1->next;
                func_80255E78(&((func_80239B54_S1 *)(temp_s2))->unkE40, var_s1);
                func_80255C58((void *)(arg0 + 0xF24), (s32)var_s1);
                var_s1 = temp_s0;
            } while (var_s1 != 0);
        }
    }

    var_s2 = D_801450A8;
    if (var_s2 != 0) {
        do {
            var_s1_2 = ((func_80239B54_S2 *)(var_s2))->unkE44;
            if (var_s1_2 != 0) {
                do {
                    temp_s0_2 = var_s1_2->next;
                    func_80255E78(&((func_80239B54_S2 *)(var_s2))->unkE40, var_s1_2);
                    func_80255C58((void *)(arg0 + 0xF24), (s32)var_s1_2);
                    var_s1_2 = temp_s0_2;
                } while (var_s1_2 != 0);
            }
            var_s2 = ((func_80239B54_S2 *)(var_s2))->unk4;
        } while (var_s2 != 0);
    }
}
