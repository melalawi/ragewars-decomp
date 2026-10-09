#include "span_1000/code_80291054.h"
/* Advances the frame ring and alternates the color and depth buffer pointers for the next frame. */


extern unsigned int D_800CD728,D_800DE850;
extern int D_800CD730,D_800CD72C;
extern int D_8014D464,D_8014D460,D_8014D42C,D_8014D430_de;
void func_80293054_de(Display *display) {
 unsigned int index; Frame_func_80293054_de *frame;
 index=++D_800CD728%D_800DE850;
 D_800CD730++;
 D_800CD72C^=1;
 display->current=&display->frames[index];
 ((Frame_func_80293054_de *)display->current)->color = D_800CD72C ? D_8014D464 : D_8014D460;
 frame = display->current;
 frame->depth = D_800CD72C ? D_8014D42C : D_8014D430_de;
}
