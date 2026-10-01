#ifndef SHARED_HEAP_USAGE_GRAPH_H
#define SHARED_HEAP_USAGE_GRAPH_H
#include "basetypes.h"
#include "n64sdk.h"
typedef struct HeapUsageBlock
{
  u32 start;
  u32 size;
  s32 unk8;
  /* FAKEMATCH: ordering-only volatile preserves the separate flag loads. */
  volatile u32 flags;
  u32 frame;
  char pad14[0x10];
  struct HeapUsageBlock *next;
} HeapUsageBlock;
typedef struct HeapUsageRegion
{
  char pad0[0xC];
  struct HeapUsageRegion *next;
  u32 base;
  u32 size;
} HeapUsageRegion;
extern Gfx *D_80110634;
extern HeapUsageBlock *D_80104584;
typedef struct HeapUsageState
{
  char pad0[0x70];
  HeapUsageRegion *regions;
} HeapUsageState;
extern HeapUsageState D_80105140;
extern s32 D_8010515C;
/* FAKEMATCH: ordering-only volatile preserves the frame-counter load position. */
extern volatile u32 D_80105180;
extern void func_80268CE0(s32);
extern void func_8026925C(s32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(void *, s32, s32);
extern void func_802C0510(void *, s32, s32);
#endif
