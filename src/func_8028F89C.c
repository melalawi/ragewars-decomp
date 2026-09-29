#include "basetypes.h"

extern s32 func_802C2260(s32);

typedef struct func_8028F89C_S1 func_8028F89C_S1;
struct func_8028F89C_S1 {
    char pad0[0x2E0];
    char* unk2E0;
};

void func_8028F89C(void *arg0, void *arg1) {
    s32 saved;
    char *cur;
    char *prev;

    prev = 0;
    cur = ((func_8028F89C_S1 *)(arg0))->unk2E0;
    saved = func_802C2260(1);
    while (cur != 0) {
        if (cur == arg1) {
            if (prev != 0) {
                *(char **)prev = *(char **)cur;
            } else {
                ((func_8028F89C_S1 *)(arg0))->unk2E0 = *(char **)cur;
            }
            break;
        }
        prev = cur;
        cur = *(char **)cur;
    }
    func_802C2260(saved);
}
