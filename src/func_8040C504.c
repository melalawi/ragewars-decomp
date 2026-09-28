/* Selects the video mode and resets viewport dimensions on the linked objects. */
typedef struct Node {int unused; struct Node *next; char pad[0x294];float width,height;int x,y;} Node;
extern int D_80000300,D_800D15C4;
extern unsigned short D_800E2A4E[],D_80153790;
extern Node D_801450C8;
extern int D_800E28D0,D_800E28D4;
extern void func_8040BE38(unsigned,int,int,int,int,int);
void func_8040C504(unsigned width,int a1,int a2,int a3,int a4,int a5) {
 int flags=0,region=0; Node *node; float h;
 switch(D_80000300) {case 0:region=1;break;case 1:break;case 2:region=2;break;}
 if(width>320) flags|=4;
 if(D_800D15C4) flags|=2;
 if(width>320) flags|=1;
 D_80153790=*(unsigned short *)((char *)D_800E2A4E+flags*4+region*32);
 func_8040BE38(width,a1,a2,a3,a4,a5);
 node=&D_801450C8;
 if(node) {node->width=D_800E28D0;h=D_800E28D4;node->x=0;node->y=0;node->height=h;}
 node=*(Node **)((char *)node-32);
 while(node) {node->x=0;node->y=0;node->width=D_800E28D0;node->height=D_800E28D4;node=node->next;}
}
