#include "span_16E000/code_8044ACCC.h"
#include "span_16E000/code_8044ACCC.h"
#include "types.h"
/* Loads the preview resource into the sound buffer when idle, while the adjacent helper resets a changed selection. */

extern char D_00285160[],D_800C50CC_de[],D_800F41F0[];
extern int func_80264B6C_de(void);
extern int *func_8025193C_de(int,int,int,int,int,int,void *,void *,int);
extern void func_802BD3A0_de(void *,int,int);
extern void func_80253838_de(int,int *);
extern void func_8044D528_de(State_func_8044D0F0_de *,int,int);


void func_8044D178_de(State_func_8044D0F0_de *state,int selection) {
 if(selection!=state->selection) {
  state->changed=0;
  func_8044D528_de(state,~selection,0);
 }
}
