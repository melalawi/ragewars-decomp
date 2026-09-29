
#include "basetypes.h"
extern s32 D_800C86F0;
extern s32 D_80103254;
void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
void **func_802533DC(s32 arg0, s32 arg1, s32 arg2, void *arg3);
void func_802C0510(void *arg0, void *arg1, s32 arg2);
void func_802C0390(void *arg0, void *arg1, s32 arg2);
typedef struct 
{
  s16 f28;
  s16 pad;
  s32 f2C;
  void *f30;
  void **f34;
} Block;
typedef struct func_8023C77C_S1 func_8023C77C_S1;
struct func_8023C77C_S1 {
    char pad0[0xC];
    void** unkC;
};

s32 func_8023C77C(s32 arg0, s32 arg1_unused, s32 arg2)
{
  char sp10[0x18];
  int new_var2;
  Block blk;
  s32 sp38;
  u32 temp_s1;
  s32 sp3C;
  u32 rounded;
  void **temp_v0;
  void *temp_v1;
  int new_var;
  temp_s1 = ((u32) (arg0 + 0xFFF)) >> 0xC;
  new_var = (temp_s1 + 1) & (~1);
  if (1)
  {
    func_802BFD50(sp10, (s32) (&sp38), 1);
    blk.f28 = 3;
    blk.f2C = arg0;
    blk.f34 = (void **) sp10;
    new_var2 = temp_s1 * 4;
    rounded = new_var + 0x18;
    temp_v0 = func_802533DC(0, new_var2 + rounded, 3, &D_800C86F0);
    temp_v1 = *temp_v0;
    blk.f30 = temp_v1;
    ((func_8023C77C_S1 *)(temp_v1))->unkC = temp_v0;
  }
  *((s32 *) (((char *) blk.f30) + 8)) = arg2;
  func_802C0510(&D_80103254, &blk.f28, 1);
  func_802C0390(sp10, &sp3C, 1);
  return sp3C;
}
