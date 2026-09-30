#ifndef SHARED_SHARED_PROFILE_H
#define SHARED_SHARED_PROFILE_H

#include "basetypes.h"

typedef struct Shared_Profile Shared_Profile;
struct Shared_Profile {
    char pad0[0x81];
    u8 team; /* +0x81: src/func_80220EB0.c */
    char pad82[0xD];
    u8 remote; /* +0x8F: src/func_80220EB0.c */
    char pad90[0x4];
    u8 counts; /* +0x94: src/func_80220EB0.c */
};
typedef char Shared_Profile_size_check[(sizeof(Shared_Profile) == 0x95) ? 1 : -1];

#endif
