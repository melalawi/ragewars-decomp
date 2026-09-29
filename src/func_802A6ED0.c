
#include "basetypes.h"
extern f32 D_800D2988;
extern void func_80279764(void *arg0, void *arg1);
typedef struct func_802A6ED0_S1 func_802A6ED0_S1;
typedef struct func_802A6ED0_S2 func_802A6ED0_S2;
struct func_802A6ED0_S1 {
    char pad0[0x7588];
    char unk7588;
    char pad7588[0x7594 - 0x7588 - sizeof(char)];
    void* unk7594;
};
struct func_802A6ED0_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk10;
};

void func_802A6ED0(void *arg0)
{
  void *node;
  char *new_var;
  void *next;
  f32 value;
  s32 count;
  node = ((func_802A6ED0_S1 *)(arg0))->unk7594;
  if (node != 0)
  {
    do
    {
      value = (((func_802A6ED0_S2 *)(node))->unk8 = (((func_802A6ED0_S2 *)(node))->unk8) - D_800D2988);
      next = ((func_802A6ED0_S2 *)(node))->unk4;
      if (value <= 0.0f)
      {
        value += ((func_802A6ED0_S2 *)(node))->unkC;
        ((func_802A6ED0_S2 *)(node))->unk8 = value;
        if (value < 0.0f)
        {
          ((func_802A6ED0_S2 *)(node))->unk8 = 0.0f;
        }
        (*((void (**)(void *)) ((char *)node + 0x18)))(node);
        count = (*((s32 *) ((new_var = (char *) node) + 0x10))) - 1;
        ((func_802A6ED0_S2 *)(node))->unk10 = count;
        if (count <= 0)
        {
          func_80279764(&((func_802A6ED0_S1 *)(arg0))->unk7588, node);
        }
      }
      node = next;
    }
    while (node != 0);
  }
}
