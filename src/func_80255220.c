
#include "basetypes.h"
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, void *arg1, s32 arg2);
extern s32 D_800D2978;
typedef void (*FuncPtr)(s32, void *);
typedef struct func_80255220_S1 func_80255220_S1;
typedef struct func_80255220_S2 func_80255220_S2;
typedef struct func_80255220_S3 func_80255220_S3;
struct func_80255220_S1 {
    char pad0[0x230];
    char unk230;
    char pad230[0x1448 - 0x230 - sizeof(char)];
    s32 unk1448;
};
struct func_80255220_S2 {
    char pad0[0x14];
    s32 unk14;
};
struct func_80255220_S3 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x20 - 0x18 - sizeof(s32)];
    void* unk20;
};

void func_80255220(void *arg0)
{
  void *sp10;
  char *new_var;
  for (;;)
  {
    func_802C0390(&((func_80255220_S1 *)(arg0))->unk230, &sp10, 1);
    new_var = (char *) sp10;
    ((func_80255220_S1 *)(arg0))->unk1448 = D_800D2978;
    ((FuncPtr) (((func_80255220_S2 *)(new_var))->unk14))(((func_80255220_S3 *)(sp10))->unk18, sp10);
    func_802C0510(((func_80255220_S3 *)(sp10))->unk20, sp10, 1);
  }

}
