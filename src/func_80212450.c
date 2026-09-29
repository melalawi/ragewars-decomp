#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

typedef struct func_80212450_S1 func_80212450_S1;
typedef struct func_80212450_S2 func_80212450_S2;
typedef struct func_80212450_S3 func_80212450_S3;
struct func_80212450_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212450_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212450_S3 {
    char pad0[0x220];
    s32 unk220;
    char pad220[0x2D8 - 0x220 - sizeof(s32)];
    s32 unk2D8;
    char pad2D8[0x2DC - 0x2D8 - sizeof(s32)];
    s32 unk2DC;
    char pad2DC[0x2E0 - 0x2DC - sizeof(s32)];
    s32 unk2E0;
    char pad2E0[0x318 - 0x2E0 - sizeof(s32)];
    s32 unk318;
    char pad318[0x31C - 0x318 - sizeof(s32)];
    s32 unk31C;
    char pad31C[0x320 - 0x31C - sizeof(s32)];
    s32 unk320;
};

void func_80212450(void *arg0) {
    void *level1 = ((func_80212450_S1 *)(arg0))->unk1D8;
    void *inner = ((func_80212450_S2 *)(level1))->unk1454;
    s32 r1, r2, r3;

    ((func_80212450_S3 *)(inner))->unk220 = 0;
    func_80209988(inner);

    r1 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk2DC = r2 % 2;

    r3 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk320 = -1;
    ((func_80212450_S3 *)(inner))->unk318 = 0;
    ((func_80212450_S3 *)(inner))->unk31C = 0;
    ((func_80212450_S3 *)(inner))->unk2E0 = r3 % 250000 + 360000;
}
