#include "basetypes.h"

extern s32 D_801468C4;
extern f32 D_800C73B8;
extern void func_80219124(void *arg0, s32 arg1, void *arg2);
extern s32 func_80218988(void *arg0);

typedef struct func_802191B8_S1 func_802191B8_S1;
typedef struct func_802191B8_S2 func_802191B8_S2;
typedef struct func_802191B8_S3 func_802191B8_S3;
struct func_802191B8_S1 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x670 - 0x5D8 - sizeof(char*)];
    f32 unk670;
    char pad670[0x698 - 0x670 - sizeof(f32)];
    char* unk698;
    char pad698[0x11B4 - 0x698 - sizeof(char*)];
    s32 unk11B4;
    char pad11B4[0x11B8 - 0x11B4 - sizeof(s32)];
    s32 unk11B8;
};
struct func_802191B8_S2 {
    char pad0[0x6C];
    s32 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(s32)];
    s32 unk70;
};
struct func_802191B8_S3 {
    char pad0[0x1E];
    u16 unk1E;
    char pad1E[0x20 - 0x1E - sizeof(u16)];
    s32 unk20;
};

void func_802191B8(volatile char *arg0, void *arg1) {
    s32 flags;
    s32 state;
    s32 result;
    s32 value;
    char *entry;

    flags = *(s32 *)(((func_802191B8_S1 *)(arg1))->unk698 + 0xB0) & 0x8000;
    state = *(volatile s32 *)arg0;
    if ((state == 0) || (state == 3)) {
        if ((D_801468C4 != 0) &&
            (*(u8 *)(((func_802191B8_S1 *)(arg1))->unk5D8 + 0x92) == 0xFF)) {
            func_80219124((void *)arg0, flags, arg1);
            *(volatile s32 *)arg0 = 1;
        } else {
            return;
        }
    }

    ((func_802191B8_S1 *)(arg1))->unk670 = D_800C73B8;
    ((func_802191B8_S1 *)(arg1))->unk11B4 = 1;
    ((func_802191B8_S1 *)(arg1))->unk11B8 = 1;
    result = func_80218988(arg1);
    if (result != ((func_802191B8_S2 *)(arg0))->unk70) {
        if (result != -1) {
            entry = (char *)arg0 + result * 0x14;
            value = ((func_802191B8_S3 *)(entry))->unk1E;
            if (((func_802191B8_S3 *)(entry))->unk20 != 0) {
                if ((s16)value < 0) {
                    ((func_802191B8_S2 *)(arg0))->unk70 = -1;
                    return;
                }
                if (result != ((func_802191B8_S2 *)(arg0))->unk6C) {
                    ((func_802191B8_S2 *)(arg0))->unk6C = result;
                }
                *(u8 *)(((func_802191B8_S1 *)(arg1))->unk5D8 + 0x92) = value;
            } else {
                return;
            }
        }
        ((func_802191B8_S2 *)(arg0))->unk70 = result;
    }
}
