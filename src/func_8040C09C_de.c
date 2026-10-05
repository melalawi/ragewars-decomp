#include "span_16E000/code_8040B45C.h"
#include "types.h"

/* Cycles the video mode within the memory budget and chooses dimensions large enough for both active buffers. */


extern int D_80000300;
extern int D_800DE888_de;
extern int D_800DE88C;
extern int D_800DE894;

extern Mode_func_8040C09C_de D_800DE8A8[2][5];
extern int D_800DE880_de;
extern int D_800DE884_de;
extern int func_80265350_de(void);
void func_8040C09C_de(void)
{
  int region = 0;
  int budget;
  int memory;
  int w;
  int h;
  int *mode;
  switch (D_80000300)
  {
    case 0:

    case 2:
      region = 1;
      break;

    case 1:
      break;

  }

  mode = (int *) (&D_800DE8A8[region][D_800DE888_de]);
  memory = func_80265350_de();
  budget = 0xF660;
  if (memory != 0x400000)
  {
    budget = 0x2A300;
  }
  if (!D_800DE894)
  {
    D_800DE888_de = (D_800DE888_de + 1) % D_800DE8A0[region];
    while ((mode[0] * mode[1]) > budget)
    {
      D_800DE888_de = (D_800DE888_de + 1) % D_800DE8A0[region];
    }

  }
  else
  {
    D_800DE894 = 0;
  }
  memory = D_800DE8A8[region][D_800DE88C].width;
  w = D_800DE8A8[region][D_800DE888_de].width;
  if (w < memory)
  {
    w = D_800DE8A8[region][D_800DE88C].width;
  }
  D_800DE880_de = w;
  h = D_800DE8A8[region][D_800DE888_de].height;
  if (h < D_800DE8A8[region][D_800DE88C].height)
  {
    h = D_800DE8A8[region][D_800DE88C].height;
  }
  D_800DE884_de = h;
}

/* Stores its argument in D_800E28D8, which func_8040C474_de returns, and calls func_8040BBB0_de. */
extern s32 D_800DE888_de;


void func_8040C2D4_de(s32 value) {
    D_800DE888_de = value;
    func_8040BBB0_de();
}

/* Gives D_800E28E0 the value 0x14 when it is still zero. */
extern s32 D_800DE890;

void func_8040C2F8_de(void) {
    if (D_800DE890 == 0) {
        D_800DE890 = 0x14;
    }
}

/* Detects the storage configuration and updates the cached selection. */
#define NULL ((void *)0)
s32 func_80265350_de();                                /* extern */
                                  /* extern */
extern s32 D_800DE888_de;
extern u8 D_800DE88B;
extern s32 D_800DE88C;
extern s32 D_800DE890;
extern u8 D_80142788;

void func_8040C318_de(void) {
    if (D_800DE888_de == -1) {
        if (func_80265350_de() != 0x400000) {
            D_800DE888_de = 1;
        } else {
            D_800DE888_de = 0;
        }
        D_80142788 = D_800DE88B;
    }
    if ((D_800DE890 < 5) && (D_800DE88C != D_800DE888_de)) {
        func_8040BBB0_de();
        D_800DE88C = D_800DE888_de;
    }
}

/* Returns the palette for the current screen mode D_800E28D8: modes 1, 2 and 3 have their own, mode 0
   and anything else use the first. */
extern int D_800DE888_de;
extern int D_800D3610;
extern int D_800D3614;
extern int D_800D3618;
extern int D_800D3620;

int *func_8040C3BC_de(void) {
    switch (D_800DE888_de) {
    case 0:
    default:
        return &D_800D3610;
    case 1:
        return &D_800D3614;
    case 2:
        return &D_800D3618;
    case 3:
        return &D_800D3620;
    }
}

/* Requests a new value when no change is pending: if D_800E28E0 is zero and the value differs from
   D_800E28D8, remembers the old value in D_800E28DC, stores the new one, sets D_800E28E4 and starts
   the 0x14-tick countdown D_800E28E0. */
extern s32 D_800DE888_de;
extern s32 D_800DE88C;
extern s32 D_800DE890;
extern s32 D_800DE894;

void func_8040C428_de(s32 value) {
    if (D_800DE890 == 0 && value != D_800DE888_de) {
        D_800DE894 = 1;
        D_800DE88C = D_800DE888_de;
        D_800DE888_de = value;
        D_800DE890 = 0x14;
    }
}

/* Returns the word held in D_800E28D8. */
extern s32 D_800DE888_de;

s32 func_8040C474_de(void) {
    return D_800DE888_de;
}

/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
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
