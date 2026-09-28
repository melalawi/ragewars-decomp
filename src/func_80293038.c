/* Advances the frame ring and alternates the color and depth buffer pointers for the next frame. */
typedef struct { char pad[0x114]; int color,depth; char tail[0x24]; } Frame;
typedef struct { Frame frames[3]; void *current; } Display;
extern unsigned int D_800D2978,D_800E28A0;
extern int D_800D2980,D_800D297C;
extern int D_801536F4,D_801536F0,D_801536BC,D_801536C0;
void func_80293038(Display *display) {
 unsigned int index; Frame *frame;
 index=++D_800D2978%D_800E28A0;
 D_800D2980++;
 D_800D297C^=1;
 display->current=&display->frames[index];
 ((Frame *)display->current)->color = D_800D297C ? D_801536F4 : D_801536F0;
 frame = display->current;
 frame->depth = D_800D297C ? D_801536BC : D_801536C0;
}
