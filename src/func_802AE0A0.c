#include "basetypes.h"

extern char D_800D34C0;

typedef struct func_802AE0A0_S1 func_802AE0A0_S1;
struct func_802AE0A0_S1 {
    char pad0[0x4];
    s16 unk4;
};

void *func_802AE0A0(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D34C0;
    i = 0xF;
    do {
        i -= 1;
        if (((func_802AE0A0_S1 *)(v1))->unk4 != arg0) {
            v1 += 0x18;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}
