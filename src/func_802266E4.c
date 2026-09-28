#include "basetypes.h"

typedef struct {
    s32 value;
    u8 pad[0x18C];
} Entry190;

extern s32 D_801468F4;
extern s32 D_80146938;
extern u8 D_801462D5;
extern char D_8011FE80;
extern char D_8011FE88;
extern char D_8011FE94;
extern Entry190 D_80102B10[];
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

void func_802266E4(void *arg0) {
    char *o = (char *)arg0;
    s32 resource_type;
    void *result;
    s32 value;
    s8 type;

    resource_type = *(s32 *)(o + 0x5E0);
    if (D_801468F4 != 0 && *(u8 *)(*(char **)(o + 0x5D8) + 0x8F) == 1) {
        resource_type = 0x13;
    }
    result = func_8028CF7C(&D_8011FE80 + 8, 0xB, resource_type);
    if (result != 0) {
        *(void **)(o + 0x18) = result;
    } else {
        result = func_8028CF7C(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            *(void **)(o + 0x18) = result;
        } else {
            result = func_8028CF7C(&D_8011FE94 - 12, -1, -1);
            *(void **)(o + 0x18) = result;
        }
    }
    *(f32 *)(o + 0x50) = *(f32 *)((char *)result + 0xFC);
    *(f32 *)(o + 0x54) = *(f32 *)((char *)result + 0x100);
    *(f32 *)(o + 0x58) = *(f32 *)((char *)result + 0x104);

    if (D_801468F4 != 0 && *(u8 *)(*(char **)(o + 0x5D8) + 0x8F) != 0) {
        *(s32 *)(o + 0x5E4) = 0xA00;
        *(s32 *)(o + 0x174) = 0xA00;
        return;
    }

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
    *(s32 *)(o + 0x5E4) = value;

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
    *(s32 *)(o + 0x174) = value;
    *(s8 *)(o + 3) = -1;
}
