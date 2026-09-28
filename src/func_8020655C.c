#include "basetypes.h"

extern s32 D_8013B124;
extern char D_80145040;
extern void *func_8022A8E0(void *arg0);

s32 func_8020655C(s32 arg0) {
    void *node;

    if (arg0 == 0x84F) {
        node = D_8013B124;
        while (node != 0) {
            if (**(s32 **)((char *)node + 0x18) == 4) {
                return 0;
            }
            node = *(void **)((char *)node + 0x2EC);
        }
        return func_8022A8E0(&D_80145040) == 0;
    }
    return 1;
}
