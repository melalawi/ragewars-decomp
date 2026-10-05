#include "span_16E000/code_8044ACCC.h"
#include "types.h"
/* Loads the preview resource into the sound buffer when idle, while the adjacent helper resets a changed selection. */

extern char D_00285160[],D_800C50CC_de[],D_800F41F0[];
extern int func_80264B6C_de(void);
extern int *func_8025193C_de(int,int,int,int,int,int,void *,void *,int);
extern void func_802BD3A0_de(void *,int,int),func_80253838_de(int,int *),func_8044D528_de(State_func_8044D0F0_de *,int,int);
void func_8044D0F0_de(State_func_8044D0F0_de *state) {
 int *resource;
 int id;
 if(func_80264B6C_de()==0) {
  resource=func_8025193C_de(0,state->resource,state->resource,state->bank,0,0,D_00285160,D_800C50CC_de,1);
  func_802BD3A0_de(D_800F41F0,*resource,0x5000);
  func_80253838_de(0,resource);
 }
}
