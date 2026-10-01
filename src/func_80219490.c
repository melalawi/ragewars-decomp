typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern s32 D_8011FAC0;
extern s32 D_800E28D8;
extern f32 D_800C73C0;
extern s32 D_800CE72C;
extern s32 D_800D297C;
extern char D_800D0EE0;

extern void func_8026D8F8(void);
extern void func_8026D914(s32 arg0);
extern void func_8026E378(s32 arg0, s32 arg1);
extern void func_8026D980(void);
extern void func_80291BF8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80272D20(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80273B08(void *arg0, f32 arg1);
extern void func_80273930(void *arg0, f32 arg1);
extern void func_802734B8(char *object, f32 x, f32 y, f32 z);
extern void func_80273DDC(void *object);
extern void func_8027302C(f32 *arg0, f32 *arg1);
extern void func_80273618(void *arg0, s32 arg1, f32 arg2, f32 arg3);
extern void func_802702EC(void *arg0, void *arg1);
extern void func_80272908(void *arg0, void *arg1, void *arg2);
extern void func_8026DF30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8026D9D0(void);

typedef struct func_80219490_S1 func_80219490_S1;
typedef struct func_80219490_S2 func_80219490_S2;
struct func_80219490_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x90 - 0x8 - sizeof(s32)];
    s32 unk90;
    char pad90[0x94 - 0x90 - sizeof(s32)];
    s32 unk94;
    char pad94[0x98 - 0x94 - sizeof(s32)];
    s32 unk98;
    char pad98[0x9C - 0x98 - sizeof(s32)];
    f32 unk9C;
    char pad9C[0xA0 - 0x9C - sizeof(f32)];
    f32 unkA0;
    char padA0[0xA8 - 0xA0 - sizeof(f32)];
    f32 unkA8;
    char padA8[0xAC - 0xA8 - sizeof(f32)];
    f32 unkAC;
    char padAC[0xB0 - 0xAC - sizeof(f32)];
    f32 unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(f32)];
    s32 unkB4;
};
struct func_80219490_S2 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};

void func_80219490(char *object, char *camera) {
    f32 first[16];
    f32 second[16];
    s32 output[4];
    Gfx *command;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    char *matrix;

    func_8026D8F8();
    if (((func_80219490_S1 *)(object))->unk8 == 0 || ((func_80219490_S1 *)(object))->unkB4 == 0) {
        return;
    }

    func_8026D914(0xC0);
    func_8026E378(1, 0x20);

    command = D_80110634++;
    command->words.w0 = 0xE3000C00;
    command->words.w1 = 0x00080000;
    command = D_80110634++;
    command->words.w0 = 0xE3001201;
    command->words.w1 = 0x2000;
    func_8026D980();

    x = ((func_80219490_S2 *)(camera))->unk2A4;
    y = ((func_80219490_S2 *)(camera))->unk2A8;
    z = ((func_80219490_S2 *)(camera))->unk2A0 + y;
    w = ((func_80219490_S2 *)(camera))->unk29C + x;
    func_80291BF8(&D_8011FAC0, (s32)x, (s32)w, (s32)y, (s32)z, 0);

    func_80272D20(first, ((func_80219490_S1 *)(object))->unk90,
                   ((func_80219490_S1 *)(object))->unk94, ((func_80219490_S1 *)(object))->unk98);
    func_80273B08(first, ((func_80219490_S1 *)(object))->unkA0);
    func_80273930(first, ((func_80219490_S1 *)(object))->unk9C);
    func_802734B8((char *)first, ((func_80219490_S1 *)(object))->unkA8,
                   ((func_80219490_S1 *)(object))->unkAC, ((func_80219490_S1 *)(object))->unkB0);
    func_80273DDC(first);

    matrix = (char *)second;
    func_8027302C(second, first);
    if (D_800E28D8 == 2) {
        func_80273618(matrix, D_800CE72C, D_800C73C0, D_800C73C0);
    }
    {
        s32 offset = (D_800D297C << 6) + 0x10;
        func_802702EC(matrix, object + offset);
    }
    func_80272908(first, object + 0xA8, output);
    {
        s32 offset = (D_800D297C << 6) + 0x10;
        func_8026DF30(((func_80219490_S1 *)(object))->unk8, (s32)(object + offset),
                       (s32)&D_800D0EE0, 0, -1);
    }
    func_8026D9D0();
    func_8026D914(0);
    func_8026E378(0, 0x20);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2200_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C73C0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2570_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C25B0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C22D0_4 = 1.0f;
#endif
