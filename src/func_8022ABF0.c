#include "basetypes.h"

typedef struct {
    s32 value;
    u8 pad[0x18C];
} Entry190;

extern s32 D_80146938;
extern u8 D_801462D5;
extern Entry190 D_80102B10[];

typedef struct func_8022ABF0_S1 func_8022ABF0_S1;
typedef struct func_8022ABF0_S2 func_8022ABF0_S2;
struct func_8022ABF0_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x5D4 - 0x18 - sizeof(void*)];
    s32 unk5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char* unk5D8;
    char pad5D8[0x1450 - 0x5D8 - sizeof(char*)];
    s32 unk1450;
};
struct func_8022ABF0_S2 {
    char pad0[0x18];
    s32 unk18;
};

s32 func_8022ABF0(void *arg0) {
    char *o = (char *)arg0;
    s32 value;
    s8 type;

    if (D_80146938 != 0 && *(u8 *)(((func_8022ABF0_S1 *)(o))->unk5D8 + 0x94) != 0) {
        type = *(s8 *)(((func_8022ABF0_S1 *)(o))->unk5D8 + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_8022ABF0_S2 *)(((func_8022ABF0_S1 *)(o))->unk18))->unk18 << 8;
        }
    } else {
        value = ((func_8022ABF0_S2 *)(((func_8022ABF0_S1 *)(o))->unk18))->unk18 << 8;
    }
    if (D_801462D5 == 1 && ((func_8022ABF0_S1 *)(o))->unk1450 == 0) {
        value += D_80102B10[((func_8022ABF0_S1 *)(o))->unk5D4].value;
    }
    return value;
}
