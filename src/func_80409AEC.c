/* Restores saved player and global state and copies the variable length byte table. */
#include "basetypes.h"
#define NULL ((void *)0)
#define M(t,p,o) (*(t *)((char *)(p)+(o)))
typedef struct { s32 data[28]; } Small;
typedef struct { s32 data[353]; } Large;
extern void *D_800E28BC;
extern Large D_801462C8;
extern f32 D_801468A0[];
extern s32 D_8013B2D4;
extern u8 D_80146848;
extern u8 D_800FD1F0[];
extern s32 D_8011FE88[];
void func_80409AEC(void *arg0) {
 s32 i;
 u8 *from,*to;
 s32 *info=D_8011FE88;
 u8 saved=D_80146848;
 *(Small *)(arg0+0x5E0)=*(Small *)(D_800E28BC+0x18);
 D_801462C8=*(Large *)(D_800E28BC+0x88);
 D_801468A0[0]=M(f32,D_800E28BC,8);
 D_801468A0[1]=M(f32,D_800E28BC,12);
 D_801468A0[2]=M(f32,D_800E28BC,16);
 D_801468A0[3]=M(f32,D_800E28BC,20);
 D_8013B2D4=M(s32,D_801468A0,-0x5D4);
 M(u8,D_801468A0,-0x58)=saved;
 from=D_800E28BC+0x60C;
 to=D_800FD1F0;
 for(i=0;i<info[17];i++) *to++=*from++;
}
