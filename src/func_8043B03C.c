/* Steps through available equipment choices, skipping duplicates and locked items before updating the menu. */
typedef struct Node { int pad0; struct Node *next; char pad8[6]; unsigned short type; char pad10[0x1C]; int item; } Node;
typedef struct { char pad0[8]; Node *child; char padc[0x2C]; int label; } Widget;
typedef struct { char preview[0x4A8]; int mode,selection,picks[6]; Widget *widget; int state; } Player;
typedef struct { void *screen,*menu; Player players[4]; char pad1348[0x28]; char descriptions[4][0xC0]; } State;
typedef struct { int item,resource,kind; int *label; } Entry;
extern State *D_800E59E0;
extern Entry D_800E5BC4[],D_800E5B44[],D_800E5B14[];
extern unsigned short D_800E5A1A[][38];
extern void func_8040E958(void *,int),func_80439E60(void *,int);
extern Widget *func_8040ECB0(void *,int);
extern int D_801462C8;
extern char D_80102B00[][0x190];
extern int D_800E5B4C[];
extern int func_8022F4CC(void *,int);
extern void func_8043B67C(int,int,int);
void func_8043B03C(int player,int step) {
 int count,low,high,category,value,valid,i;
 if(D_800E59E0->players[player].state==2) {
 count=0;low=0;high=0;
 category=D_800E59E0->players[player].selection;
 switch(category) {
 case 0:case 1:count=4;low=0;high=1;break;
 case 2:case 3:count=8;low=2;high=3;break;
 case 4:count=3;low=4;high=4;break;
 case 5:return;
 }
 value=D_800E59E0->players[player].picks[category]; value+=step;
 do {
 if(value>=count)value=0;
 if(value<0)value=count-1;
 valid=1;
 for(i=low;i<high+1;i++) {
 if(valid!=1)break;
 if(D_800E59E0->players[player].picks[i]==value) { value+=step;valid=0; }
 }
 if(valid==1 && (category==2 || category==3) && D_800E5B4C[value*4]==15 && !(D_801462C8&0x10000000) && !func_8022F4CC(D_80102B00[player],15)) {value+=step;valid=0;}
 } while(!valid);
 func_8043B67C(player,category,value);
 D_800E59E0->players[player].picks[category]=value;
 }
}
