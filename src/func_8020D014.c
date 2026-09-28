#include "basetypes.h"

extern f32 D_800C6E88;
extern f32 D_800C6E8C;

void func_8020D014(void *arg0) {
    void *var_v0;
    f32 k;

    var_v0 = *(void **) ((char *) arg0 + 0x24);
    if (var_v0 != 0) {
        k = D_800C6E88;
        do {
            *(f32 *) ((char *) var_v0 + 4) = k;
            *(s32 *) ((char *) var_v0 + 8) = -1;
            *(s32 *) ((char *) var_v0 + 0x18) = 0;
            *(s32 *) ((char *) var_v0 + 0x1C) = 0;
            *(s32 *) ((char *) var_v0 + 0x20) = 0;
            *(s32 *) ((char *) var_v0 + 0x24) = 0;
            *(s32 *) ((char *) var_v0 + 0x28) = 0;
            *(s32 *) ((char *) var_v0 + 0x2C) = 0;
            *(s32 *) ((char *) var_v0 + 0x30) = 0;
            var_v0 = *(void **) ((char *) var_v0 + 0x10);
        } while (var_v0 != 0);
    }
    *(f32 *) ((char *) arg0 + 0x1C) = D_800C6E8C;
    *(s32 *) ((char *) arg0 + 0x20) = -1;
}
