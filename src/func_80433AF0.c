/* Initializes four player-menu slots and selects the first available child node. */
#include "basetypes.h"
typedef struct Node {char p0[16];unsigned char opacity;char p11[31];struct Node *next; s32 p34;void *text;} Node;
typedef struct {char name[12];s8 id,state;char pad[386];} Entry;
typedef struct {char p0[12];Node *menu;char p10[8];Entry entries[4];char p658[0x494];s32 active,status[4];Node *nodes[4];char pB10[0x54];s32 fieldB64;} Player;
typedef struct {s32 p0,root;char p8[0x4C];s32 mode;Player players[4];} State;
extern State *D_800E54A4;
extern void *D_800D727C[];
extern void func_8040E958(Node *,s32),func_8040E9D0(Node *,s32),func_8041B95C(s32,s32,Node *);
extern Node *func_8040ECB0(Node *,s32),*func_8041B87C(s32,s32);
extern s32 func_8040EC50(Node *),func_80435A9C(s32,s8);
void func_80433AF0(s32 player) {
 s32 i;
 Node *label,*value;
 D_800E54A4->players[player].active=0;
 D_800E54A4->players[player].nodes[0]=func_8040ECB0(D_800E54A4->players[player].menu,0x2B6);
 D_800E54A4->players[player].nodes[1]=func_8040ECB0(D_800E54A4->players[player].menu,0x2B3);
 D_800E54A4->players[player].nodes[2]=func_8040ECB0(D_800E54A4->players[player].menu,0x2B0);
 D_800E54A4->players[player].nodes[3]=func_8040ECB0(D_800E54A4->players[player].menu,0x2B4);
 for(i=0;i<4;i++) {
  D_800E54A4->players[player].status[i]=2;
  D_800E54A4->players[player].nodes[i]->opacity=255;
  label=func_8040ECB0(D_800E54A4->players[player].nodes[i],0x2B1);
  func_8040E9D0(D_800E54A4->players[player].nodes[i],0);
  value=func_8040ECB0(D_800E54A4->players[player].nodes[i],0x2B2);
  if(D_800E54A4->players[player].entries[i].state!=-1) {
   value->text=D_800E54A4->players[player].entries[i].name;
   D_800E54A4->players[player].status[i]=1;
   if(D_800E54A4->mode==1) {
    func_8040E958(func_8040ECB0(D_800E54A4->players[player].nodes[i],0x2B1),0);
    if(func_80435A9C(D_800E54A4->players[player].fieldB64,D_800E54A4->players[player].entries[i].id)!=-1) {
     D_800E54A4->players[player].status[i]=0;
     func_8040E9D0(D_800E54A4->players[player].nodes[i],1);
     func_8040E958(func_8040ECB0(D_800E54A4->players[player].nodes[i],0x2B1),1);
    }
   }
  } else {value->text=D_800D727C[0];func_8040E958(label,0);}
 }
 label=func_8041B87C(D_800E54A4->root,player);
 while(func_8040EC50(label))label=label->next;
 func_8041B95C(D_800E54A4->root,player,label);
}
