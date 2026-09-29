#include "basetypes.h"

extern f32 D_800D2988;
extern void func_80278C80(void *);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct func_8028C5E8_S1 func_8028C5E8_S1;
typedef struct func_8028C5E8_S2 func_8028C5E8_S2;
typedef struct func_8028C5E8_S3 func_8028C5E8_S3;
typedef union func_8028C5E8_S1_U11D8 { void* v0; char v1; } func_8028C5E8_S1_U11D8;
struct func_8028C5E8_S1 {
    char pad0[0x11D8];
    func_8028C5E8_S1_U11D8 unk11D8;
    char pad11D8[0x11EC - 0x11D8 - sizeof(func_8028C5E8_S1_U11D8)];
    char unk11EC;
};
struct func_8028C5E8_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    f32 unkC;
};
struct func_8028C5E8_S3 {
    char pad0[0xE];
    u8 unkE;
};

void func_8028C5E8(void *arg0) {
    void *node;
    void *next;
    void *object;
    s32 remove;
    s32 expired;
    f32 zero;
    f32 value;

    node = ((func_8028C5E8_S1 *)(arg0))->unk11D8.v0;
    remove = 0;
    if (node != 0) {
        zero = 0.0f;
        do {
            object = ((func_8028C5E8_S2 *)(node))->unk8;
            next = ((func_8028C5E8_S2 *)(node))->unk4;
            expired = remove;
            if (((func_8028C5E8_S3 *)(object))->unkE & 2) {
                value = ((func_8028C5E8_S2 *)(node))->unkC - D_800D2988;
                ((func_8028C5E8_S2 *)(node))->unkC = value;
                if (value <= zero) {
                    expired = 1;
                    remove = 1;
                }
            }
            if (expired != 0) {
                func_80278C80(object);
            }
            if (remove != 0) {
                func_80255E78(&((func_8028C5E8_S1 *)(arg0))->unk11D8.v1, (s32)node);
                func_80255C58(&((func_8028C5E8_S1 *)(arg0))->unk11EC, (s32)node);
            }
            node = next;
            remove = 0;
        } while (node != 0);
    }
}
