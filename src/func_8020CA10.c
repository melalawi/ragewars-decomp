
#include "basetypes.h"
extern f32 D_800C6E7C;
extern f32 D_800C6E80;
extern s32 *D_8013B364;
extern s32 func_80274544(void);
void func_8020CA10(void *arg0, s32 arg1)
{
  char *entry;
  u16 flags;
  char *new_var;
  *((f32 *) (((char *) arg0) + 0x4)) = D_800C6E7C;
  *((s32 *) (((char *) arg0) + 0x0)) = arg1;
  *((s32 *) (((char *) arg0) + 0x8)) = -1;
  *((s32 *) (((char *) arg0) + 0xC)) = 0;
  *((s32 *) (((char *) arg0) + 0x10)) = 0;
  new_var = ((char *) D_8013B364) + ((arg1 * (*D_8013B364)) + 8);
  entry = new_var;
  flags = *((u16 *) (entry + 0xC));
  if (flags & 2)
  {
    *((f32 *) (((char *) arg0) + 0x14)) = D_800C6E80;
  }
  *((s32 *) (((char *) arg0) + 0x34)) = 0;
  *((s32 *) (((char *) arg0) + 0x38)) = 0;
  *((s32 *) (((char *) arg0) + 0x3C)) = 0;
  *((s32 *) (((char *) arg0) + 0x40)) = 0;
  *((s32 *) (((char *) arg0) + 0x44)) = 0;
  *((s32 *) (((char *) arg0) + 0x48)) = 0;
  *((s32 *) (((char *) arg0) + 0x4C)) = 0;
  flags = *((u16 *) (entry + 0xC));
  if (flags & 0x40)
  {
    *((s32 *) (((char *) arg0) + 0x38)) = (func_80274544() % 5) + 5;
  }
  flags = *((u16 *) (entry + 0xC));
  if (flags & 0x80)
  {
    *((s32 *) (((char *) arg0) + 0x3C)) = (func_80274544() % 5) + 5;
  }
}
