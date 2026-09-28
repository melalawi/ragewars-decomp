/* Dispatches a pending menu event and clears its pending state. */
#include "basetypes.h"
#define NULL ((void*)0)
typedef struct {char pad[12];short unkC;} Item;
typedef struct {char pad[8]; Item *unk8; char rest[16];} Entry;
typedef struct {int (*unk0)(int,int,int,int);int unk4;int unk8;Entry *unkC;char pad[0x510];int unk520;char pad2[12];int unk530;} State;
int func_80298310(int, int, s32, int, s32);                 /* extern */
int func_8029A5D4(s16, int, int, int, s32);                 /* extern */
int func_8029ACC4();                                  /* extern */
extern State *D_8014D080;

int func_80298EA4(int arg0) {
 int index,event,result; Item *item; int (*callback)(int,int,int,int);
 index=D_8014D080->unk4;
 if(index>=0 && D_8014D080->unk530) {
 item=D_8014D080->unkC[index].unk8;
 if(item) func_8029A5D4(item->unkC,0x10,0,0,0);
 event=arg0;
 func_8029ACC4();
 if(D_8014D080->unk4 != -1) {
 callback=D_8014D080->unk0;
 if(callback) {
 arg0=D_8014D080->unk520;
 D_8014D080->unk520=0;
 callback(0xE03,event,0,0);
 result=D_8014D080->unk520;
 if(result==1) { D_8014D080->unk520=arg0; goto done; }
 D_8014D080->unk520=arg0;
 }
 func_80298310(1,0xE03,event,0,0);
 }
 done:
 D_8014D080->unk530=0;
 }
 return 1;
}
