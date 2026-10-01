#include "basetypes.h"

extern s32 D_8013B364;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern s32 func_8020F150(void *arg0);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void *func_8020CFE0(char *, s32);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);

typedef struct func_8020F2A8_S1 func_8020F2A8_S1;
typedef struct func_8020F2A8_S2 func_8020F2A8_S2;
typedef struct func_8020F2A8_S3 func_8020F2A8_S3;
struct func_8020F2A8_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x14 - 0xC - sizeof(s32)];
    char unk14;
    char pad14[0x68 - 0x14 - sizeof(char)];
    s32 unk68;
    char pad68[0xBC - 0x68 - sizeof(s32)];
    s32 unkBC;
};
struct func_8020F2A8_S2 {
    char pad0[0x18];
    s32 unk18;
};
struct func_8020F2A8_S3 {
    char pad0[0x34];
    s32 unk34;
};

s32 func_8020F2A8(void *arg0) {
    s32 data[30];
    s32 *cursor;
    s32 count;
    char *global;
    s32 value;
    s32 current;
    void *entry;

    global = &D_8013B364;
    func_8020D014(global);
    func_8020D1FC((s32)global);
    count = 29;
    cursor = &data[29];
    do {
        *cursor = 0;
        count--;
        cursor--;
    } while (count >= 0);
    data[0] = 0xBD7;
    if (func_8020F150(data) == 0) {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = -1;
        return 1;
    }
    value = -1;
    ((func_8020F2A8_S2 *)(global))->unk18 = value;
    func_8020D0CC(global, ((func_8020F2A8_S1 *)(arg0))->unk4);
    current = ((func_8020F2A8_S2 *)(global))->unk18;
    if (current != value) {
        entry = func_8020CFE0(global, current);
        ((func_8020F2A8_S1 *)(arg0))->unkC = ((func_8020F2A8_S2 *)(global))->unk18;
        ((func_8020F2A8_S1 *)(arg0))->unk68 = ((func_8020F2A8_S3 *)(entry))->unk34;
        func_8020D114(global, &((func_8020F2A8_S1 *)(arg0))->unk14, 4);
    } else {
        ((func_8020F2A8_S1 *)(arg0))->unk68 = 0;
        ((func_8020F2A8_S1 *)(arg0))->unkBC = current;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3BB4_4 = 1.0f;
const float unbake_rodata_800C3BB8_4 = 1.0f;
const float unbake_rodata_800C3BBC_4 = 1.0f;
const float unbake_rodata_800C3BC0_4 = 0.75f;
const float unbake_rodata_800C3BC4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8BD0_4 = 3.40282347e+38f;
const float unbake_rodata_800C8BD4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A20_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A24_4 = 1.0f;
const float unbake_rodata_800C3A28_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C3AB8_4 = 0.100000001f;
const float unbake_rodata_800C3ABC_4 = 0.5f;
const float unbake_rodata_800C3AC0_4 = 15.3599997f;
const float unbake_rodata_800C3AC4_4 = 0.699999988f;
const float unbake_rodata_800C3AC8_4 = 1.22070312f;
const float unbake_rodata_800C3ACC_4 = 200.0f;
const float unbake_rodata_800C3AD0_4 = 255.0f;
const float unbake_rodata_800C3AD4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3AD8_4 = 0.5f;
const float unbake_rodata_800C3ADC_4 = 2.14748365e+09f;
#endif
