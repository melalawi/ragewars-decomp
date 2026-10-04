#include "span_16E000/code_8042ED84.h"
#include "span_16E000/types.h"
#include "types.h"
/* Applies the selected rule settings and refreshes the menu state. */


extern Settings_func_8042EB10_de D_80142208_de;
extern Active *D_800E0630;
extern char D_8011BA00[];
extern void func_8042ED70_de(f32,s32,s32,s32,s32,s32,s32);
extern s32 func_8042EE34_de(void);
extern void func_8044DE7C_de(void *,s32);
void func_8042EC38_de(void) {
 Settings_func_8042EB10_de *g=&D_80142208_de;
 if(g->trialKind != 0) func_8042ED70_de((f32)D_800E0630->time,D_800E0630->limit,D_800E0630->score,D_800E0630->other,0,1,0);
 else func_8042ED70_de((f32)g->time,D_80142208_de.limit,g->score,g->other,0,1,0);
 func_8044DE7C_de(D_8011BA00,func_8042EE34_de());
}
