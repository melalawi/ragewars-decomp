#include "basetypes.h"

typedef struct {
    s32 value;
    u8 pad[0x18C];
} Entry190;

typedef struct { s32 unk0; } func_802266E4_G1;
extern func_802266E4_G1 D_801468F4;
typedef struct { s32 unk0; } func_802266E4_G2;
extern func_802266E4_G2 D_80146938;
typedef struct { u8 unk0; } func_802266E4_G3;
extern func_802266E4_G3 D_801462D5;
extern char D_8011FE80;
extern char D_8011FE88;
extern char D_8011FE94;
extern Entry190 D_80102B10[];
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

typedef struct func_802266E4_S1 func_802266E4_S1;
typedef struct func_802266E4_S2 func_802266E4_S2;
typedef struct func_802266E4_S3 func_802266E4_S3;
struct func_802266E4_S1 {
    char pad0[0x3];
    s8 unk3;
    char pad3[0x18 - 0x3 - sizeof(s8)];
    void* unk18;
    char pad18[0x50 - 0x18 - sizeof(void*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x174 - 0x58 - sizeof(f32)];
    s32 unk174;
    char pad174[0x5D4 - 0x174 - sizeof(s32)];
    s32 unk5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char* unk5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(char*)];
    s32 unk5E0;
    char pad5E0[0x5E4 - 0x5E0 - sizeof(s32)];
    s32 unk5E4;
    char pad5E4[0x1450 - 0x5E4 - sizeof(s32)];
    s32 unk1450;
};
struct func_802266E4_S2 {
    char pad0[0xFC];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};
struct func_802266E4_S3 {
    char pad0[0x18];
    s32 unk18;
};

void func_802266E4(void *arg0) {
    char *o = (char *)arg0;
    s32 resource_type;
    void *result;
    s32 value;
    s8 type;

    resource_type = ((func_802266E4_S1 *)(o))->unk5E0;
    if (D_801468F4.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x8F) == 1) {
        resource_type = 0x13;
    }
    result = func_8028CF7C(&D_8011FE80 + 8, 0xB, resource_type);
    if (result != 0) {
        ((func_802266E4_S1 *)(o))->unk18 = result;
    } else {
        result = func_8028CF7C(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            ((func_802266E4_S1 *)(o))->unk18 = result;
        } else {
            result = func_8028CF7C(&D_8011FE94 - 12, -1, -1);
            ((func_802266E4_S1 *)(o))->unk18 = result;
        }
    }
    ((func_802266E4_S1 *)(o))->unk50 = ((func_802266E4_S2 *)(result))->unkFC;
    ((func_802266E4_S1 *)(o))->unk54 = ((func_802266E4_S2 *)(result))->unk100;
    ((func_802266E4_S1 *)(o))->unk58 = ((func_802266E4_S2 *)(result))->unk104;

    if (D_801468F4.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x8F) != 0) {
        ((func_802266E4_S1 *)(o))->unk5E4 = 0xA00;
        ((func_802266E4_S1 *)(o))->unk174 = 0xA00;
        return;
    }

    if (D_80146938.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x94) != 0) {
        type = *(s8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
        }
    } else {
        value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
    }
    if (D_801462D5.unk0 == 1 && ((func_802266E4_S1 *)(o))->unk1450 == 0) {
        value += D_80102B10[((func_802266E4_S1 *)(o))->unk5D4].value;
    }
    ((func_802266E4_S1 *)(o))->unk5E4 = value;

    if (D_80146938.unk0 != 0 && *(u8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x94) != 0) {
        type = *(s8 *)(((func_802266E4_S1 *)(o))->unk5D8 + 0x80);
        if (type == 0xB) {
            value = 0x19000;
        } else if (type == 0xC) {
            value = 0x19000;
        } else if (type == 0xE) {
            value = 0x12C00;
        } else if (type == 0xD) {
            value = 0x12C00;
        } else {
            value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
        }
    } else {
        value = ((func_802266E4_S3 *)(((func_802266E4_S1 *)(o))->unk18))->unk18 << 8;
    }
    if (D_801462D5.unk0 == 1 && ((func_802266E4_S1 *)(o))->unk1450 == 0) {
        value += D_80102B10[((func_802266E4_S1 *)(o))->unk5D4].value;
    }
    ((func_802266E4_S1 *)(o))->unk174 = value;
    ((func_802266E4_S1 *)(o))->unk3 = -1;
}
