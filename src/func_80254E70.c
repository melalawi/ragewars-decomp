/* Obtains a free node, marks it active and moves it to the active list, retrying while processing permits. */
#include "basetypes.h"
typedef struct Node { char pad[16]; s32 unk10; } Node;
extern Node *D_801050F8;
extern char D_8010510C;
extern s32 func_802512C8(s32,s32,s32);
extern void func_80255C58(void *,Node *);
extern void func_80255E78(Node **,Node *);
#define NULL ((void *)0)
static inline Node *take(s32 active) {
 Node *node=D_801050F8;
 if(node) {func_80255E78(&D_801050F8,node); node->unk10=active;func_80255C58(&D_8010510C,node);}
 return node;
}
Node *func_80254E70(s32 unused,s32 flags) {
 Node *node=take(1);
 if (!node) {
  s32 active=1;
  flags &= 0x10;
  while(func_802512C8(0,2,flags==0)) {node=take(active);if(node)break;}
 }
 return node;
}
