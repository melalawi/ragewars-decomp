#ifndef SHARED_SHARED_FUNC_802ACBCC_S1_H
#define SHARED_SHARED_FUNC_802ACBCC_S1_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S1 Shared_func_802ACBCC_S1;
struct Shared_func_802ACBCC_S1 {
    char pad0[0x8];
    s32 unk8; /* +0x8: src/func_802ACBCC.c */
    s32 unkC; /* +0xC: src/func_802ACBCC.c */
    s32 unk10; /* +0x10: src/func_802ACBCC.c */
    char pad14[0x4];
    struct Shared_func_802ACBCC_S3 * unk18; /* +0x18: src/func_802ACBCC.c */
    char pad1C[0x5B8];
    s32 unk5D4; /* +0x5D4: src/func_802ACBCC.c */
    struct Shared_func_802ACBCC_S6 * unk5D8; /* +0x5D8: src/func_802ACBCC.c */
    void * unk5DC; /* +0x5DC: src/func_802ACBCC.c */
    char pad5E0[0x4];
    s32 unk5E4; /* +0x5E4: src/func_802ACBCC.c */
    char pad5E8[0xC];
    u16 unk5F4; /* +0x5F4: src/func_802ACBCC.c */
    u16 unk5F6; /* +0x5F6: src/func_802ACBCC.c */
    u16 unk5F8; /* +0x5F8: src/func_802ACBCC.c */
    char pad5FA[0xBEA];
    f32 unk11E4; /* +0x11E4: src/func_802ACBCC.c */
    char pad11E8[0x44];
    s32 unk122C; /* +0x122C: src/func_802ACBCC.c */
    f32 unk1230; /* +0x1230: src/func_802ACBCC.c */
    char pad1234[0x4];
    s32 unk1238; /* +0x1238: src/func_802ACBCC.c */
    u8 unk123C; /* +0x123C: src/func_802ACBCC.c */
    u8 unk123D; /* +0x123D: src/func_802ACBCC.c */
    u8 unk123E; /* +0x123E: src/func_802ACBCC.c */
    char pad123F[0x1];
    f32 unk1240; /* +0x1240: src/func_802ACBCC.c */
    f32 unk1244; /* +0x1244: src/func_802ACBCC.c */
    char pad1248[0x198];
    s32 unk13E0; /* +0x13E0: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S1_size_check[(sizeof(Shared_func_802ACBCC_S1) == 0x13E4) ? 1 : -1];

#endif
