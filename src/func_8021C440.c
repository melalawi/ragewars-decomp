#include "basetypes.h"

typedef struct AudioState {
    char pad0[0x98];
    s32 field98;
    char pad9C[4];
    s32 fieldA0;
} AudioState;

extern AudioState D_801468A0;

extern s32 func_8022C450(void *arg0);
extern void func_8022B68C(void *arg0, f32 arg1, void *arg2);
extern void func_8022B540(void *arg0, f32 arg1, f32 arg2, void *arg3,
                          s32 arg4);
extern void func_8022B5FC(void *arg0, f32 arg1, void *arg2);
extern void func_8022B7E8(void *arg0, void *arg1);
extern void func_802227D0(void *, void *, s32);

typedef struct func_8021C440_S1 func_8021C440_S1;
typedef struct func_8021C440_S2 func_8021C440_S2;
struct func_8021C440_S1 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x5E4 - 0x5D8 - sizeof(char*)];
    s32 unk5E4;
    char pad5E4[0x670 - 0x5E4 - sizeof(s32)];
    f32 unk670;
    char pad670[0x11D8 - 0x670 - sizeof(f32)];
    s32 unk11D8;
    char pad11D8[0x11E4 - 0x11D8 - sizeof(s32)];
    s32 unk11E4;
    char pad11E4[0x122C - 0x11E4 - sizeof(s32)];
    s32 unk122C;
    char pad122C[0x13D8 - 0x122C - sizeof(s32)];
    void* unk13D8;
};
struct func_8021C440_S2 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x12C - 0x4 - sizeof(u16)];
    void* unk12C;
};

void func_8021C440(void *arg0, void *arg1, s32 arg2, void *arg3) {
    char *actor = arg0;
    char *event = arg3;
    AudioState *audio;
    u16 type;

    if (((func_8021C440_S1 *)(actor))->unk5E4 == 0) {
        return;
    }
    if (func_8022C450(actor) != 0) {
        return;
    }
    if (((func_8021C440_S1 *)(actor))->unk670 > 0.0f) {
        return;
    }
    audio = &D_801468A0;
    if (audio->field98 != 0 &&
        *(s8 *)(((func_8021C440_S1 *)(actor))->unk5D8 + 0x80) == 0xB &&
        audio->fieldA0 > 0) {
        return;
    }
    if (((func_8021C440_S1 *)(actor))->unk122C & 0x8000) {
        return;
    }

    type = ((func_8021C440_S2 *)(event))->unk4;
    switch (type) {
    case 0x3FB:
    case 0x4CD:
        func_8022B68C(actor, 0.1f, ((func_8021C440_S2 *)(event))->unk12C);
        return;
    case 0x3FD:
    case 0x4CF:
        func_8022B68C(actor, 0.125f, ((func_8021C440_S2 *)(event))->unk12C);
        return;
    case 0x3FE:
    case 0x4D0:
        func_8022B68C(actor, 0.3f, ((func_8021C440_S2 *)(event))->unk12C);
        return;
    case 0x432:
    case 0x4E3:
        func_8022B540(actor, 80.0f, 2.0f, ((func_8021C440_S2 *)(event))->unk12C, 1);
        return;
    case 0x408:
    case 0x4E0:
        func_8022B5FC(actor, 0.25f, ((func_8021C440_S2 *)(event))->unk12C);
        return;
    case 0x419:
    case 0x4D3:
        func_8022B7E8(actor, ((func_8021C440_S2 *)(event))->unk12C);
        return;
    case 0x129:
        ((func_8021C440_S1 *)(actor))->unk11D8 = 0;
        ((func_8021C440_S1 *)(actor))->unk11E4 = 0;
        if (!(((func_8021C440_S1 *)(actor))->unk122C & 0x8000)) {
            if (((func_8021C440_S1 *)(actor))->unk13D8 == 0) {
                ((func_8021C440_S1 *)(actor))->unk13D8 = ((func_8021C440_S2 *)(event))->unk12C;
            }
            func_802227D0(actor, actor, 0x26);
        }
        return;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4DF0_4 = 1.0f;
const float unbake_rodata_800C4DF4_4 = 1.0f;
const float unbake_rodata_800C4DF8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9FB0_4 = 1.0f;
const float unbake_rodata_800C9FB4_4 = 1.0f;
const float unbake_rodata_800C9FB8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4DE0_4 = 4.0f;
#endif
