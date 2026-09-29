#include "basetypes.h"

typedef struct func_802561B4_S1 func_802561B4_S1;
struct func_802561B4_S1 {
    char pad0[0xC];
    s32 unkC;
};

void func_802561B4(void *arg0) {
    s32 node = *(s32 *)arg0;
    if (node != 0) {
        s32 offset = ((func_802561B4_S1 *)(arg0))->unkC;
        node = *(s32 *)(node + offset);
        while (node != 0) {
            node = *(s32 *)(node + offset);
        }
    }
}
