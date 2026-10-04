#include "common/types.h"
#include "span_16E000/code_8043847C.h"
/* Updates the two menu options and plays their change sounds. */

extern struct Shape_func_802764D4_de_2 *D_800E1854_de;
extern unsigned char D_80142221[];
extern int func_8041A6E0_de(int);
extern void func_8025DF34_de(int),func_8025E2D4_de(int);
extern int func_8025E2C4_de(void);
int func_80439308_de(void) {
 int value;
 unsigned char *options;
 int sound;
 value=func_8041A6E0_de(D_800E1854_de->field_4);
 options=D_80142221;
 if(value!=options[0]){options[0]=value;func_8025DF34_de(0x460);}
 value=func_8041A6E0_de(D_800E1854_de->field_0);
 if(value!=options[-1]){
  options[-1]=value;
  if((unsigned char)value<5) sound=0;
  else {if(func_8025E2C4_de()!=0)goto end; sound=0x34;}
  func_8025E2D4_de(sound);
 }
 end: return 0;
}
