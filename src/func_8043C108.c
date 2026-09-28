/* Cancels a player's selection or schedules the menu transition according to the current selection state. */
typedef struct { char preview[0x4A8]; int state; char tail[0x24]; } Player;
typedef struct { void *screen,*menu; Player players[4]; char pad1348[0x10]; int phase,timer; char pad1360[8]; int next; } State;
extern State *D_800E59E0;
extern void func_8029A73C(void),func_8041B834(void *,int,int),func_8041CE80(void *,int),func_8043B2AC(int);
int func_8043C108(int a,int b,unsigned int player) {
 func_8029A73C();player &= 0xFFFF;
 switch(D_800E59E0->players[player].state) {
 case 1:D_800E59E0->phase=5;D_800E59E0->timer=4;D_800E59E0->next=7;break;
 case 2:D_800E59E0->players[player].state=0;func_8041B834(D_800E59E0->menu,player,0);func_8041CE80(D_800E59E0->players[player].preview,1);func_8043B2AC(player);break;
 }
 return 0;
}
