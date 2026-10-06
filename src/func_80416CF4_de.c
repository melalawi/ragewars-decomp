#include "span_16E000/code_804143D8.h"
#include "abi.h"
#include "types.h"
#include "gfx.h"
#include "gbi.h"

/* Switches the graphics combiner and emits a pipeline sync once per frame. */
extern int D_800DF270,D_800DF294,D_8014DCDC;
extern Gfx *D_8010C574;
static inline void sync(void){D_800DF294=1;gDPPipeSync(D_8010C574++);}

void func_80416CF4_de(int mode){
 if(mode!=D_800DF270){
 D_800DF270=mode;
 if(!D_800DF294)sync();
 gDPSetCycleType(D_8010C574++, G_CYC_1CYCLE);
 switch(mode){
 case 1: if(D_8014DCDC){gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT);}else{gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);}break;
 case 2: if(D_8014DCDC){gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, PRIMITIVE);}else{gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);}break;
 case 3: gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1);break;
 case 4: if(D_8014DCDC){gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0);}else{gDPSetCombineLERP(D_8010C574++, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1);}break;
 case 5: if(D_8014DCDC){gDPSetCombineLERP(D_8010C574++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);}else{gDPSetCombineLERP(D_8010C574++, 0, 0, 0, SHADE, 0, 0, 0, 1, 0, 0, 0, SHADE, 0, 0, 0, 1);}break;
 }
 }
}
