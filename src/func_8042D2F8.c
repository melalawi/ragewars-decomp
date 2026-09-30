#include "../splat/types/shared/entry8.h"
#include "../splat/types/shared/bigobj.h"
#include "../splat/types/shared/rec3.h"
/* For each of the 8 occupied slots without the pending-remove flag, runs its two release callbacks. */
#include "basetypes.h"

typedef Shared_Entry8 Entry8;

typedef Shared_BigObj BigObj;

typedef Shared_Rec3 Rec3;

extern BigObj *D_800E53C0;
extern Rec3 D_80146398[8];

extern void func_804245C0(s32 a0, Entry8 *a1);
extern void func_80425BC0(s32 a0);

void func_8042D2F8(void)
{
  s32 i;
  BigObj *obj;
  int temp_1;
  Rec3 *recs;
  for (i = 0; i < 8; i++)
  {
    s32 val;
    temp_1 = -1;
    obj = D_800E53C0;
    recs = D_80146398;
    val = obj->slot[i];
    if (val == temp_1)
    {
      continue;
    }
    if ((recs + val)->flag != 0)
    {
      continue;
    }
    func_804245C0(val, &obj->arr2[val]);
    recs = D_80146398;
    func_80425BC0(val);
  }

}
