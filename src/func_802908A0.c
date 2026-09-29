
#include "basetypes.h"
extern void func_80290930(void *arg0, void *arg1);
extern void func_80246174(void *arg0);
typedef struct func_802908A0_S1 func_802908A0_S1;
typedef struct func_802908A0_S2 func_802908A0_S2;
typedef struct func_802908A0_S3 func_802908A0_S3;
struct func_802908A0_S1 {
    char pad0[0x3C00];
    void* unk3C00;
    char pad3C00[0x3C04 - 0x3C00 - sizeof(void*)];
    void* unk3C04;
    char pad3C04[0x3C08 - 0x3C04 - sizeof(void*)];
    void* unk3C08;
};
struct func_802908A0_S2 {
    char pad0[0x1C8];
    s32 unk1C8;
    char pad1C8[0x1D0 - 0x1C8 - sizeof(s32)];
    s32 unk1D0;
    char pad1D0[0x1D8 - 0x1D0 - sizeof(s32)];
    void* unk1D8;
    char pad1D8[0x1DC - 0x1D8 - sizeof(void*)];
    void* unk1DC;
};
struct func_802908A0_S3 {
    char pad0[0x1D8];
    void* unk1D8;
};

void *func_802908A0(void *arg0)
{
  void *new_var;
  void *node;
  void *next;
  if ((((func_802908A0_S1 *)(arg0))->unk3C00) == 0)
  {
    func_80290930(arg0, *((void * volatile *) ((char *)arg0 + 0x3C08)));
  }
  node = ((func_802908A0_S1 *)(arg0))->unk3C00;
  next = ((func_802908A0_S1 *)(arg0))->unk3C04;
  ((func_802908A0_S1 *)(arg0))->unk3C00 = ((func_802908A0_S2 *)(node))->unk1DC;
  if (next != 0)
  {
    ((func_802908A0_S3 *)(next))->unk1D8 = node;
  }
  new_var = ((func_802908A0_S1 *)(arg0))->unk3C04;
  ((func_802908A0_S2 *)(node))->unk1D8 = 0;
  ((func_802908A0_S2 *)(node))->unk1DC = new_var;
  ((func_802908A0_S1 *)(arg0))->unk3C04 = node;
  if ((((func_802908A0_S1 *)(arg0))->unk3C08) == 0)
  {
    ((func_802908A0_S1 *)(arg0))->unk3C08 = node;
  }
  ((func_802908A0_S2 *)(node))->unk1D0 |= 1;
  func_80246174(node);
  ((func_802908A0_S2 *)(node))->unk1C8 = 0;
  return node;
}
