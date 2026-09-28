#include "basetypes.h"

extern void func_8024B690(void *a, s32 c, s32 flag);
extern void func_802472E0(void *arg0);

void func_802065C0(void *a, void *b, s32 c) {
    *(s8 *) ((char *) b + 0x35) = -1;
    *(s8 *) ((char *) b + 0xCB) = 0;
    *(s32 *) ((char *) b + 0x124) = c;
    func_8024B690(a, c, 1);
    func_802472E0(a);
}
