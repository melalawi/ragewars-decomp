#include "span_16E000/code_8040BBC0.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"
/* Selects the video mode and resets viewport dimensions on the linked objects. */

extern int D_80000300,D_800CC374;
extern unsigned short D_800DE9FE[],D_8014D500;
extern Node_func_8040C484_de D_80141008;
extern int D_800DE880_de,D_800DE884_de;
extern void func_8040BDB8_de(unsigned,int,int,int,int,int);
void func_8040C484_de(unsigned width,int a1,int a2,int a3,int a4,int a5) {
 int flags=0,region=0; Node_func_8040C484_de *node; float h;
 switch(D_80000300) {case 0:region=1;break;case 1:break;case 2:region=2;break;}
 if(width>320) flags|=4;
 if(D_800CC374) flags|=2;
 if(width>320) flags|=1;
 D_8014D500=*(unsigned short *)((char *)D_800DE9FE+flags*4+region*32);
 func_8040BDB8_de(width,a1,a2,a3,a4,a5);
 node=&D_80141008;
 if(node) {node->width=D_800DE880_de;h=D_800DE884_de;node->x=0;node->y=0;node->height=h;}
 node=*(Node_func_8040C484_de **)((char *)node-32);
 while(node) {node->x=0;node->y=0;node->width=D_800DE880_de;node->height=D_800DE884_de;node=node->next;}
}
