#include "basetypes.h"

extern s32 D_8013B124;
extern char D_80145040;
extern void *func_8022A8E0(void *arg0);

typedef struct func_8020655C_S1 func_8020655C_S1;
struct func_8020655C_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x2EC - 0x18 - sizeof(s32*)];
    void* unk2EC;
};

s32 func_8020655C(s32 arg0) {
    void *node;

    if (arg0 == 0x84F) {
        node = D_8013B124;
        while (node != 0) {
            if (*((func_8020655C_S1 *)(node))->unk18 == 4) {
                return 0;
            }
            node = ((func_8020655C_S1 *)(node))->unk2EC;
        }
        return func_8022A8E0(&D_80145040) == 0;
    }
    return 1;
}
