
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C7EA0;
typedef struct func_8022D154_S1 func_8022D154_S1;
typedef struct func_8022D154_S2 func_8022D154_S2;
typedef struct func_8022D154_S3 func_8022D154_S3;
struct func_8022D154_S1 {
    char pad0[0x6C0];
    s32 unk6C0;
};
struct func_8022D154_S2 {
    char pad0[0x6C4];
    s32 unk6C4;
    char pad6C4[0x6E0 - 0x6C4 - sizeof(s32)];
    f32 unk6E0;
};
struct func_8022D154_S3 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
};

void func_8022D154(void *arg0, void *arg1)
{
  f32 new_var3;
  f32 *new_var;
  s8 *new_var2;
  new_var2 = (s8 *) arg0;
  new_var3 = (f32) D_800C7EA0;
  ((func_8022D154_S1 *)(new_var2))->unk6C0 = 0;
  new_var = &((func_8022D154_S2 *)(arg0))->unk6E0;
  ((func_8022D154_S2 *)(arg0))->unk6C4 = 0;
  *new_var = new_var3;
  ((func_8022D154_S3 *)(arg1))->unk1C = 0;
  ((func_8022D154_S3 *)(arg1))->unk20 = 0;
  ((func_8022D154_S3 *)(arg1))->unk24 = 0;
}
