#include "basetypes.h"

extern void func_802398F8(void *arg0, void *arg1, s32 arg2, void *arg3,
                          f32 arg4);
extern void func_8025E13C(s32 arg0);
extern f32 D_800C6B5C;
extern s32 *D_800D7F84[];
extern s32 D_800D7F88;
extern char D_80145088;
extern char D_801450C8;

typedef struct func_80204308_S1 func_80204308_S1;
typedef struct func_80204308_S2 func_80204308_S2;
typedef struct func_80204308_S3 func_80204308_S3;
typedef struct func_80204308_S4 func_80204308_S4;
typedef struct func_80204308_S5 func_80204308_S5;
typedef struct func_80204308_S6 func_80204308_S6;
struct func_80204308_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_80204308_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80204308_S3 {
    char pad0[0x16];
    s16 unk16;
    char pad16[0x18 - 0x16 - sizeof(s16)];
    s16 unk18;
};
struct func_80204308_S4 {
    char pad0[0x34];
    s8 unk34;
};
struct func_80204308_S5 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_80204308_S6 {
    char pad0[0x5DC];
    void* unk5DC;
};

s32 func_80204308(void *arg0, void *arg1, void *arg2) {
    char *rec;
    void *table;
    void *value;
    void *fallback;
    s16 index;
    s32 callback;

    rec = &((func_80204308_S2 *)(((func_80204308_S1 *)(arg0))->unk18))->unk14;
    if (((func_80204308_S3 *)(rec))->unk16 == 0) {
        return 1;
    }
    if (((func_80204308_S4 *)(arg1))->unk34 != 0) {
        return 1;
    }
    if (*(u8 *)arg2 != 1) {
        return 1;
    }
    if ((((func_80204308_S5 *)(arg2))->unk100 & 0x300000) == 0) {
        return 1;
    }

    index = ((func_80204308_S3 *)(rec))->unk18;
    table = ((func_80204308_S5 *)(arg2))->unk1D8;
    if (index == 0) {
        return 0;
    }

    value = ((func_80204308_S6 *)(table))->unk5DC;
    fallback = &D_801450C8;
    if (value != 0) {
        fallback = value;
    }
    func_802398F8(&D_80145088, fallback,
                  *D_800D7F84[index * 2], arg0,
                  D_800C6B5C);

    index = ((func_80204308_S3 *)(rec))->unk18;
    callback = (&D_800D7F88)[index * 2];
    if (callback != 0) {
        func_8025E13C(callback);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C199C_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B5C_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A6C_4 = 4.0f;
#endif
