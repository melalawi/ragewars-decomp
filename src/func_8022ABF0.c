#include "basetypes.h"

typedef struct {
    s32 value;
    u8 pad[0x18C];
} Entry190;

extern s32 D_80146938;
extern u8 D_801462D5;
extern Entry190 D_80102B10[];

s32 func_8022ABF0(void *arg0) {
    char *o = (char *)arg0;
    s32 value;
    s8 type;

    if (D_80146938 != 0 && *(u8 *)(*(char **)(o + 0x5D8) + 0x94) != 0) {
        type = *(s8 *)(*(char **)(o + 0x5D8) + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = *(s32 *)((char *)*(void **)(o + 0x18) + 0x18) << 8;
        }
    } else {
        value = *(s32 *)((char *)*(void **)(o + 0x18) + 0x18) << 8;
    }
    if (D_801462D5 == 1 && *(s32 *)(o + 0x1450) == 0) {
        value += D_80102B10[*(s32 *)(o + 0x5D4)].value;
    }
    return value;
}
