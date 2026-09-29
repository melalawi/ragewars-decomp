#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028B64C_S1 func_8028B64C_S1;
typedef struct func_8028B64C_S2 func_8028B64C_S2;
typedef struct func_8028B64C_S3 func_8028B64C_S3;
struct func_8028B64C_S1 {
    char pad0[0x80];
    void* unk80;
    char pad80[0x138 - 0x80 - sizeof(void*)];
    char* unk138;
    char pad138[0x1B40C - 0x138 - sizeof(char*)];
    s32 unk1B40C;
};
struct func_8028B64C_S2 {
    char pad0[0x18];
    void* unk18;
};
struct func_8028B64C_S3 {
    char pad0[0x4];
    s32 unk4;
};

void func_8028B64C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *entry;
    void *cond;
    void *field80;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    if (*(s32 *) arg0 == 2) {
        return;
    }
    if (((func_8028B64C_S1 *)(arg0))->unk1B40C == arg1) {
        entry = ((func_8028B64C_S1 *)(arg0))->unk138 + (s32) arg2 * 0x2E8;
        cond = ((func_8028B64C_S2 *)(entry))->unk18;
        if ((u32) (*(s32 *) cond - 9) < 2) {
            if (((func_8028B64C_S3 *)(cond))->unk4 & 0x200) {
                return;
            }
        }
    }
    field80 = ((func_8028B64C_S1 *)(arg0))->unk80;
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), (s32) arg1), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (arg2 & 7);
    if (arg3 != 0) {
        idx = arg2;
        if ((s32) arg2 < 0) {
            idx = arg2 + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = arg2;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}
