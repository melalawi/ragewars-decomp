#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_80285F28_S1 func_80285F28_S1;
typedef struct func_80285F28_S2 func_80285F28_S2;
struct func_80285F28_S1 {
    char pad0[0x100];
    s32 unk100;
};
struct func_80285F28_S2 {
    char pad0[0x80];
    void* unk80;
    char pad80[0x138 - 0x80 - sizeof(void*)];
    u32 unk138;
    char pad138[0x140 - 0x138 - sizeof(u32)];
    s32 unk140;
    char pad140[0x1B40C - 0x140 - sizeof(s32)];
    s32 unk1B40C;
};

s32 func_80285F28(void *arg0, void *arg1) {
    void *field80;
    void *temp_v0;
    u8 *base;
    s32 field1B40C;
    s32 mask;
    s32 index;
    s32 i;
    s32 lastOffset;
    u32 first;

    if (!(((func_80285F28_S1 *)(arg1))->unk100 & 0x80000)) {
        first = ((func_80285F28_S2 *)(arg0))->unk138;
        index = -1;
        if ((u32) arg1 >= first) {
            lastOffset = ((func_80285F28_S2 *)(arg0))->unk140 * 0x2E8;
            lastOffset -= 0x2E8;
            if (first + lastOffset >= (u32) arg1) {
                index = ((u32) arg1 - first) / 0x2E8;
            }
        }
    } else {
        index = -1;
    }
    if (index == -1) {
        return 0;
    }
    field80 = ((func_80285F28_S2 *)(arg0))->unk80;
    field1B40C = ((func_80285F28_S2 *)(arg0))->unk1B40C;
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base = (u8 *) func_8028FD94(temp_v0, 1);
    mask = 1 << (index & 7);
    i = index;
    if (i < 0) {
        i += 7;
    }
    return (base[i >> 3] & mask) != 0;
}
