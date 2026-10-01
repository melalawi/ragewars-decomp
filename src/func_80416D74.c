#include "unbake_gbi.h"
/* Switches the graphics combiner and emits a pipeline sync once per frame. */
#include "basetypes.h"
#include "basetypes.h"
#include "n64sdk.h"
extern int D_800E32C0,D_800E32E4,D_80153F6C;
extern Gfx *D_80110634;
static inline void sync(void){Gfx *g; D_800E32E4=1;gDPPipeSync(D_80110634++);}

void func_80416D74(int mode){
 if(mode!=D_800E32C0){
 D_800E32C0=mode;
 if(!D_800E32E4)sync();
 gDPSetCycleType(D_80110634++, G_CYC_1CYCLE);
 switch(mode){
 case 1: if(D_80153F6C){gDPSetCombineLERP(D_80110634++, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT);}else{gDPSetCombineLERP(D_80110634++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);}break;
 case 2: if(D_80153F6C){gDPSetCombineLERP(D_80110634++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, PRIMITIVE);}else{gDPSetCombineLERP(D_80110634++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);}break;
 case 3: gDPSetCombineLERP(D_80110634++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);break;
 case 4: if(D_80153F6C){gDPSetCombineLERP(D_80110634++, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0);}else{gDPSetCombineLERP(D_80110634++, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1);}break;
 case 5: if(D_80153F6C){gDPSetCombineLERP(D_80110634++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);}else{gDPSetCombineLERP(D_80110634++, 0, 0, 0, SHADE, 0, 0, 0, 1, 0, 0, 0, SHADE, 0, 0, 0, 1);}break;
 }
 }
}
