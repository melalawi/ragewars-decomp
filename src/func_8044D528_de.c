#include "span_16E000/code_8044D024.h"
/* Sets the resource transition state and sound, while its adjacent helper refreshes the controller-option bit. */


extern int D_800CC380;
extern void func_8025DF34_de(int),func_8044BE04_de(void);
void func_8044D528_de(State_func_8044D528_de *state,int selection,int mode) {
 state->active=1;
 state->mode=mode;
 state->selection=selection;
 if(mode==2 && selection!=999)func_8025DF34_de(0x21C);
}
void func_8044D580_de(State_func_8044D528_de *state) {
 func_8044BE04_de();
 D_800CC380=(state->input->value>>2)&1;
}
