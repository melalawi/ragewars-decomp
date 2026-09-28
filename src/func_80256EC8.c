
#include "basetypes.h"
typedef struct Work56EC8
{
  void *owner;
  s16 id;
  char pad6[2];
  char payload[0x40];
  void *base;
  s32 offset;
} Work56EC8;
extern s32 D_800D0948;
extern void *D_8010BE20[];
extern char D_8010BE80;
extern u16 D_8010BE9A;
extern char D_801469E8;
extern void func_80256FE0(Work56EC8 *arg0);
extern s32 func_802C0CB0(s32);
extern void func_8025E4AC(void);
extern void *func_802B8B14(void *arg0, s32 *arg1, s32 arg2, s16 arg3);
extern void func_8025E4D0(void);
extern void func_802C23E0(void);
extern void func_8028FD2C(void *arg0, void *arg1);
extern void func_8025E25C(void);
extern void func_802C0390(s32, s32, s32);
extern void func_802BC4D0(void *arg0, s32 arg1);
s32 func_80256EC8(Work56EC8 *arg0)
{
  s32 completed;
  s32 event;
  s32 value;
  void *item;
  func_80256FE0(arg0);
  value = func_802C0CB0(arg0->owner);
  arg0->id = D_8010BE9A;
  func_8025E4AC();
  item = func_802B8B14(D_8010BE20[D_800D0948], &completed, value, arg0->id);
  func_8025E4D0();
  if (completed != 0)
  {
    arg0->base = D_8010BE20[D_800D0948];
    arg0->offset = ((((s32) item) - ((s32) D_8010BE20[D_800D0948])) >> 3) << 3;
    func_802C23E0();
    func_8028FD2C(&D_801469E8, arg0->payload);
    D_800D0948 ^= 1;
    func_8025E25C();
    func_802C0390(&D_8010BE80, &event, 1);
    func_802BC4D0(arg0->owner, arg0->id << 2);
    return 1;
  }
  if (completed || arg0->id)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}
