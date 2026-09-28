/* Selects a cached RDP color-combiner mode and emits the corresponding display-list command. */
#include "basetypes.h"
typedef struct {u32 w0,w1;} Gfx;
extern Gfx *D_80110634;
extern u32 D_800D15B0;
void func_80268CE0(u32 mode) {
 if (D_800D15B0 != mode) {
 D_800D15B0=mode;
 switch(mode) {
 case 0: {Gfx *p=D_80110634++; p->w0=0xFC30C3FF; p->w1=0x5FFEFE38;} break;
 case 1: {Gfx *p=D_80110634++; p->w0=0xFC30C3FF; p->w1=0x5F16FE3F;} break;
 case 2: {Gfx *p=D_80110634++; p->w0=0xFC3097FF; p->w1=0x5FFEFE38;} break;
 case 3: {Gfx *p=D_80110634++; p->w0=0xFC30C204; p->w1=0x5FFEFFF8;} break;
 case 4: {Gfx *p=D_80110634++; p->w0=0xFC309604; p->w1=0x5FFEFFF8;} break;
 case 5: {Gfx *p=D_80110634++; p->w0=0xFC26A1FF; p->w1=0x1FFC923C;} break;
 case 6: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFFFCFE38;} break;
 case 7: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFF14FE3F;} break;
 case 8: {Gfx *p=D_80110634++; p->w0=0xFCFF96AC; p->w1=0xF0FCFE38;} break;
 case 9: {Gfx *p=D_80110634++; p->w0=0xFCFF96A4; p->w1=0xF0FCFE38;} break;
 case 10: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFF14FF7F;} break;
 case 11: {Gfx *p=D_80110634++; p->w0=0xFCFF96AC; p->w1=0xF00CFE3F;} break;
 case 12: {Gfx *p=D_80110634++; p->w0=0xFC26A004; p->w1=0x1FFC93FC;} break;
 case 13: {Gfx *p=D_80110634++; p->w0=0xFC1217FF; p->w1=0xFFFFFE38;} break;
 case 14: {Gfx *p=D_80110634++; p->w0=0xFC1217FF; p->w1=0xFF17FE3F;} break;
 case 15: {Gfx *p=D_80110634++; p->w0=0xFC1216AC; p->w1=0xF0FFFE38;} break;
 case 16: {Gfx *p=D_80110634++; p->w0=0xFC1217FF; p->w1=0xFF17FF7F;} break;
 case 17: {Gfx *p=D_80110634++; p->w0=0xFC1216AC; p->w1=0xF00FFE3F;} break;
 case 18: {Gfx *p=D_80110634++; p->w0=0xFCFFFFFF; p->w1=0xFFFDF638;} break;
 case 19: {Gfx *p=D_80110634++; p->w0=0xFC327FFF; p->w1=0xFFFFF638;} break;
 case 20: {Gfx *p=D_80110634++; p->w0=0xFC327FFF; p->w1=0xFF17F63F;} break;
 case 21: {Gfx *p=D_80110634++; p->w0=0xFC327EAC; p->w1=0xF0FFF638;} break;
 case 22: {Gfx *p=D_80110634++; p->w0=0xFCFFFEA4; p->w1=0xF0FDF638;} break;
 case 23: {Gfx *p=D_80110634++; p->w0=0xFC327FFF; p->w1=0xFF17F77F;} break;
 case 24: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFF2CFE7F;} break;
 case 25: {Gfx *p=D_80110634++; p->w0=0xFCFFFFFF; p->w1=0xFFFDF6FB;} break;
 case 26: {Gfx *p=D_80110634++; p->w0=0xFC511BFF; p->w1=0x3FFDFE38;} break;
 case 27: {Gfx *p=D_80110634++; p->w0=0xFC12ABFF; p->w1=0xFFFFFE38;} break;
 case 28: {Gfx *p=D_80110634++; p->w0=0xFCFFFFFF; p->w1=0xFFFE793C;} break;
 case 29: {Gfx *p=D_80110634++; p->w0=0xFC309661; p->w1=0x552EFF7F;} break;
 case 30: {Gfx *p=D_80110634++; p->w0=0xFCFFFFFF; p->w1=0xFFFDFCFE;}
 case 31: {Gfx *p=D_80110634++; p->w0=0xFCFFFFFF; p->w1=0xFFFEFD7E;} break;
 case 32: {Gfx *p=D_80110634++; p->w0=0xFC50C2A1; p->w1=0x44867F3F;} break;
 case 33: {Gfx *p=D_80110634++; p->w0=0xFC127E24; p->w1=0xFFFFF9FC;} break;
 case 34: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFFFFFE38;} break;
 case 35: {Gfx *p=D_80110634++; p->w0=0xFC26FE60; p->w1=0x15FCF778;} break;
 case 36: {Gfx *p=D_80110634++; p->w0=0xFC322007; p->w1=0xF5FF937B;} break;
 case 37: {Gfx *p=D_80110634++; p->w0=0xFC522067; p->w1=0xF0FF923B;} break;
 case 38: {Gfx *p=D_80110634++; p->w0=0xFCFF97FF; p->w1=0xFFFF7E38;} break;
 case 39: {Gfx *p=D_80110634++; p->w0=0xFCFF99FF; p->w1=0xFFFF7E38;} break;
 case 40: {Gfx *p=D_80110634++; p->w0=0xFC121824; p->w1=0xFF33FFFF;} break;
 case 41: {Gfx *p=D_80110634++; p->w0=0xFC30C261; p->w1=0x5586FF7F;} break;
 }
 }
}
