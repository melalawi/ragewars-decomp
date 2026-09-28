/* Switches the graphics combiner and emits a pipeline sync once per frame. */
#include "basetypes.h"
typedef struct {u32 w0,w1;} Gfx;
extern int D_800E32C0,D_800E32E4,D_80153F6C;
extern Gfx *D_80110634;
static inline void sync(void){Gfx *g; D_800E32E4=1;g=D_80110634++;g->w0=0xE7000000;g->w1=0;}
#define EMIT(a,b) {Gfx *g=D_80110634++;g->w0=(a);g->w1=(b);}
void func_80416D74(int mode){
 if(mode!=D_800E32C0){
 D_800E32C0=mode;
 if(!D_800E32E4)sync();
 EMIT(0xE3000A01,0);
 switch(mode){
 case 1: if(D_80153F6C){EMIT(0xFC12B225,0xFF67DBED);}else{EMIT(0xFC12FE25,0xFFFFFDFE);}break;
 case 2: if(D_80153F6C){EMIT(0xFC12FE25,0xFFFFF7FB);}else{EMIT(0xFC12FE25,0xFFFFFDFE);}break;
 case 3: EMIT(0xFC12FE25,0xFFFFFDFE);break;
 case 4: if(D_80153F6C){EMIT(0xFC121824,0xFF33FFFF);}else{EMIT(0xFC127E24,0xFFFFFDFE);}break;
 case 5: if(D_80153F6C){EMIT(0xFCFFFFFF,0xFFFE793C);}else{EMIT(0xFCFFFFFF,0xFFFE7D3E);}break;
 }
 }
}
