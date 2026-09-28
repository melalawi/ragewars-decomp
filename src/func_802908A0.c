
#include "basetypes.h"
extern void func_80290930(void *arg0, void *arg1);
extern void func_80246174(void *arg0);
void *func_802908A0(void *arg0)
{
  void *new_var;
  void *node;
  void *next;
  if ((*((void **) (((char *) arg0) + 0x3C00))) == 0)
  {
    func_80290930(arg0, *((void * volatile *) (((char *) arg0) + 0x3C08)));
  }
  node = *((void **) (((char *) arg0) + 0x3C00));
  next = *((void **) (((char *) arg0) + 0x3C04));
  *((void **) (((char *) arg0) + 0x3C00)) = *((void **) (((char *) node) + 0x1DC));
  if (next != 0)
  {
    *((void **) (((char *) next) + 0x1D8)) = node;
  }
  new_var = *((void **) (((char *) arg0) + 0x3C04));
  *((void **) (((char *) node) + 0x1D8)) = 0;
  *((void **) (((char *) node) + 0x1DC)) = new_var;
  *((void **) (((char *) arg0) + 0x3C04)) = node;
  if ((*((void **) (((char *) arg0) + 0x3C08))) == 0)
  {
    *((void **) (((char *) arg0) + 0x3C08)) = node;
  }
  *((s32 *) (((char *) node) + 0x1D0)) |= 1;
  func_80246174(node);
  *((s32 *) (((char *) node) + 0x1C8)) = 0;
  return node;
}
