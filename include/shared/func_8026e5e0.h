#ifndef SHARED_FUNC_8026E5E0_H
#define SHARED_FUNC_8026E5E0_H

#include "basetypes.h"
#include "shared/player_types.h"

typedef struct { s32 x, y, z, w; } Func_8026E5E0_Quad;
typedef struct { s32 x, y; } Func_8026E5E0_Pair;

typedef struct func_8026E5E0_S1 func_8026E5E0_S1;
typedef struct func_8026E5E0_S2 func_8026E5E0_S2;
typedef struct func_8026E5E0_S3 func_8026E5E0_S3;
typedef struct func_8026E5E0_S4 func_8026E5E0_S4;
struct func_8026E5E0_S1 {
    char pad0[0xC];
    u32 unkC;
    u16 bone;
    u16 reserved;
};
struct func_8026E5E0_S2 {
    u32 unk0;
    u16 unk4;
    char pad4[0xE];
};
struct func_8026E5E0_S3 {
    char pad0[0x18];
    s32 *unk18;
    char pad18[0x188];
    s8 unk1A4;
    char pad1A4[0xB];
    f32 unk1B0;
    char pad1B0[0x24];
    func_8026E5E0_S4 *unk1D8;
    char pad1D8[0x6C];
    Triple unk248;
    Triple unk254;
    Triple unk260;
    char pad268[0x74];
    s32 unk2E0;
};
typedef struct {
    s32 stride;
    u8 pad4[0x6A];
    u8 bytes[1];
} AttachmentTable;
struct func_8026E5E0_S4 {
    char pad0[0x650];
    s16 unk650;
};
typedef struct { f32 elements[4][4]; } Transform;

#endif
