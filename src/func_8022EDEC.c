#include "basetypes.h"

extern s32 D_80146910;

extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_80218464(void *arg0);
extern s32 func_80214178(void *arg0, void *arg1, s32 arg2);
extern void func_8021B1E4(void *, s32, s32, s32);
extern void func_802266E4(void *arg0);

typedef struct func_8022EDEC_S1 func_8022EDEC_S1;
typedef struct func_8022EDEC_S2 func_8022EDEC_S2;
struct func_8022EDEC_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x2E8 - 0x10 - sizeof(s32)];
    char unk2E8;
    char pad2E8[0x458 - 0x2E8 - sizeof(char)];
    char unk458;
    char pad458[0x5D8 - 0x458 - sizeof(char)];
    void* unk5D8;
    char pad5D8[0x5EC - 0x5D8 - sizeof(void*)];
    void* unk5EC;
    char pad5EC[0x11B4 - 0x5EC - sizeof(void*)];
    s32 unk11B4;
};
struct func_8022EDEC_S2 {
    char pad0[0x8F];
    char unk8F;
};

void func_8022EDEC(void *arg0) {
    s32 mode;

    ((func_8022EDEC_S2 *)(((func_8022EDEC_S1 *)(arg0))->unk5D8))->unk8F = 1;
    mode = D_80146910;
    switch (mode) {
    case 0:
        func_8025DE74(0x18A1,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 1:
        func_8025DE74(0x1969,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 2:
        func_8025DE74(0x1905,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    }
    func_80218464((char *)arg0 + 0x938);
    ((func_8022EDEC_S1 *)(arg0))->unk11B4 = 0;
    func_80214178(&((func_8022EDEC_S1 *)(arg0))->unk2E8, &((func_8022EDEC_S1 *)(arg0))->unk458, 1);
    func_8021B1E4(arg0, ((func_8022EDEC_S1 *)(arg0))->unk5EC, 0, 1);
    func_802266E4(arg0);
}
