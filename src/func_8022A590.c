
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8022A590_S1 func_8022A590_S1;
struct func_8022A590_S1 {
    char pad0[0x4];
    s32 unk4;
};

s32 func_8022A590(void *arg0, unsigned int arg1)
{
  return (arg1 - (((func_8022A590_S1 *)(arg0))->unk4)) / 5864;
}
