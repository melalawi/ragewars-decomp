#include "basetypes.h"

void func_802561B4(void *arg0) {
    s32 node = *(s32 *)arg0;
    if (node != 0) {
        s32 offset = *(s32 *)((char *)arg0 + 0xC);
        node = *(s32 *)(node + offset);
        while (node != 0) {
            node = *(s32 *)(node + offset);
        }
    }
}
