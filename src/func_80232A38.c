#include "basetypes.h"

extern void func_8022FD9C(void *arg0, void *arg1);
extern char D_22FC10;
extern char D_23292C;
extern f32 D_800C8108;
extern char D_800CF298;

typedef struct func_80232A38_S1 func_80232A38_S1;
typedef struct func_80232A38_S2 func_80232A38_S2;
struct func_80232A38_S1 {
    char pad0[0x2C];
    char* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(char*)];
    char* unk108;
    char pad108[0x10C - 0x108 - sizeof(char*)];
    char* unk10C;
    char pad10C[0x124 - 0x10C - sizeof(char*)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x12C - 0x128 - sizeof(s32)];
    f32 unk12C;
    char pad12C[0x130 - 0x12C - sizeof(f32)];
    s32 unk130;
    char pad130[0x138 - 0x130 - sizeof(s32)];
    s32 unk138;
    char pad138[0x13C - 0x138 - sizeof(s32)];
    s32 unk13C;
    char pad13C[0x144 - 0x13C - sizeof(s32)];
    s32 unk144;
    char pad144[0x148 - 0x144 - sizeof(s32)];
    s32 unk148;
    char pad148[0x14C - 0x148 - sizeof(s32)];
    s32 unk14C;
    char pad14C[0x150 - 0x14C - sizeof(s32)];
    s32 unk150;
};
struct func_80232A38_S2 {
    char pad0[0x1];
    s8 unk1;
};

void func_80232A38(void *arg0, void *arg1) {
    f32 k = D_800C8108;

    ((func_80232A38_S1 *)(arg1))->unk2C = &D_800CF298;
    ((func_80232A38_S1 *)(arg1))->unk108 = &D_22FC10;
    ((func_80232A38_S1 *)(arg1))->unk10C = &D_23292C;
    ((func_80232A38_S1 *)(arg1))->unk124 = 0;
    ((func_80232A38_S1 *)(arg1))->unk128 = 0;
    ((func_80232A38_S1 *)(arg1))->unk130 = 0;
    ((func_80232A38_S1 *)(arg1))->unk138 = 0;
    ((func_80232A38_S1 *)(arg1))->unk13C = 1;
    ((func_80232A38_S1 *)(arg1))->unk12C = k;
    ((func_80232A38_S2 *)(arg0))->unk1 = 0;
    ((func_80232A38_S1 *)(arg1))->unk148 = 0;
    ((func_80232A38_S1 *)(arg1))->unk144 = 1;
    ((func_80232A38_S1 *)(arg1))->unk14C = 0;
    ((func_80232A38_S1 *)(arg1))->unk150 = 0;
    func_8022FD9C(arg0, arg1);
}
