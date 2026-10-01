#include "basetypes.h"

extern char D_8013B364;
extern char D_800C71B8;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern void *func_8020C994(void *arg0, s32 arg1);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_8020D220(void *, s32);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);
extern void func_80211020(void *arg0);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);
extern void func_8020FA10(void *arg0);

typedef struct func_80212A7C_S1 func_80212A7C_S1;
typedef struct func_80212A7C_S2 func_80212A7C_S2;
typedef struct func_80212A7C_S3 func_80212A7C_S3;
typedef struct func_80212A7C_S4 func_80212A7C_S4;
typedef struct func_80212A7C_S5 func_80212A7C_S5;
typedef struct func_80212A7C_S6 func_80212A7C_S6;
struct func_80212A7C_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212A7C_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212A7C_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x14 - 0xC - sizeof(s32)];
    char unk14;
    char pad14[0x28 - 0x14 - sizeof(char)];
    s32 unk28;
};
struct func_80212A7C_S4 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x18 - 0x4 - sizeof(s32)];
    s32 unk18;
};
struct func_80212A7C_S5 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x38 - 0x8 - sizeof(f32)];
    u32 unk38;
};
struct func_80212A7C_S6 {
    char pad0[0xC];
    u32 unkC;
};

void func_80212A7C(void *arg0)
{
    void *state;
    void *table;
    void *entry;
    f32 threshold;
    s32 index;
    s32 value;
    u32 flags;

    state = ((func_80212A7C_S2 *)(((func_80212A7C_S1 *)(arg0))->unk1D8))->unk1454;
    table = &D_8013B364;
    if (((func_80212A7C_S3 *)(state))->unkC == -1) {
        func_8020D014(table);
        func_8020D1FC((s32)table);
        threshold = *(f32 *)(&D_800C71B8 + 4);
        index = 0;
        if (((func_80212A7C_S4 *)(table))->unk4 > 0) {
            do {
                entry = func_8020C994(table, index);
                if (func_8027272C(&((func_80212A7C_S5 *)(*(void **)state))->unk8, entry) < threshold &&
                    !(((func_80212A7C_S6 *)(entry))->unkC & 0x04300000)) {
                    func_8020D220(table, index);
                }
                index++;
            } while (index < ((func_80212A7C_S4 *)(table))->unk4);
        }
        func_8020D0CC(table, ((func_80212A7C_S3 *)(state))->unk4);
        func_8020D114(table, &((func_80212A7C_S3 *)(state))->unk14, 4);
        value = ((func_80212A7C_S4 *)(table))->unk18;
        ((func_80212A7C_S3 *)(state))->unkC = value;
        ((func_80212A7C_S3 *)(state))->unk28 = value;
    }
    func_80211020(state);
    func_80208410(state);
    func_80208AAC(state);
    flags = (((func_80212A7C_S5 *)(*(void **)state))->unk38 & 0x3000) != 0;
    if (((func_80212A7C_S3 *)(state))->unk4 == ((func_80212A7C_S3 *)(state))->unkC &&
        !flags) {
        func_8020FA10(state);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1FFC_4 = 1048576.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C71BC_4 = 1048576.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C236C_4 = 1048576.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23AC_4 = 1048576.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20CC_4 = 1048576.0f;
#endif
