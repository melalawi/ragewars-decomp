#include "span_1000/code_8028FD24.h"
#include "span_1000/types.h"
#include "types.h"
#ifndef FUNC_802908C0_DE
#define FUNC_802908C0_DE
#include "types.h"
#ifndef UNBAKE_FUNC_802908C0_DE_H
#define UNBAKE_FUNC_802908C0_DE_H
#include "types.h"



















#endif

#include "types.h"


#endif


#include "types.h"

extern void func_80290950_de(void *arg0, void *arg1);
extern void func_80246184_de(void *arg0);







void *func_802908C0_de(void *arg0)
{
  void *new_var;
  void *node;
  void *next;
  if ((((ObjectLinks3C0C *)(arg0))->unk_3C00) == 0)
  {
    func_80290950_de(arg0, ((ObjectLinks3C0C *)arg0)->unk_3C08);
  }
  node = ((ObjectLinks3C0C *)(arg0))->unk_3C00;
  next = ((ObjectLinks3C0C *)(arg0))->next;
  ((ObjectLinks3C0C *)(arg0))->unk_3C00 = ((ObjectLinks1E0 *)(node))->unk_1DC;
  if (next != 0)
  {
    ((func_8020A028_S3 *)(next))->unk1D8 = node;
  }
  new_var = ((ObjectLinks3C0C *)(arg0))->next;
  ((ObjectLinks1E0 *)(node))->unk_1D8 = 0;
  ((ObjectLinks1E0 *)(node))->unk_1DC = new_var;
  ((ObjectLinks3C0C *)(arg0))->next = node;
  if ((((ObjectLinks3C0C *)(arg0))->unk_3C08) == 0)
  {
    ((ObjectLinks3C0C *)(arg0))->unk_3C08 = node;
  }
  ((ObjectLinks1E0 *)(node))->unk_1D0 |= 1;
  func_80246184_de(node);
  ((ObjectLinks1E0 *)(node))->unk_1C8 = 0;
  return node;
}
