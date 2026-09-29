
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8023EBC4_S1 func_8023EBC4_S1;
struct func_8023EBC4_S1 {
    s32 unk0;
    char pad0[0x88 - 0x0 - sizeof(s32)];
    s32 unk88;
    char pad88[0x9C - 0x88 - sizeof(s32)];
    s32 unk9C;
    char pad9C[0xB0 - 0x9C - sizeof(s32)];
    s32 unkB0;
    char padB0[0xC4 - 0xB0 - sizeof(s32)];
    s32 unkC4;
    char padC4[0xFC - 0xC4 - sizeof(s32)];
    s32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(s32)];
    s32 unk100;
};

extern func_8023EBC4_S1 *D_80103FCC;
void func_8023EBC4(void)
{
  D_80103FCC->unk100 = (D_80103FCC->unkFC = (D_80103FCC->unkC4 = (D_80103FCC->unkB0 = (D_80103FCC->unk9C = (D_80103FCC->unk88 = (D_80103FCC->unk0 = 0))))));
}
