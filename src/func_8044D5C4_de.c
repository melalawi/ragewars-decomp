#include "span_16E000/code_8044D024.h"
#include "types.h"
/* Processes both pending object lists between update barriers. */

void func_802458C4_de();                                  /* extern */
void func_802458D8_de();                                  /* extern */
void func_8028787C_de(void *, s32);                       /* extern */

void func_8044D5C4_de(State_func_8044D5C4_de *arg0) {
 s32 i,n;
 func_802458D8_de();
 n=arg0->unk11C0;
 for(i=0;i<n;i++) func_8028787C_de(arg0,arg0->unk11D0+i*20);
 n=arg0->unk11C4;
 for(i=0;i<n;i++) func_8028787C_de(arg0,arg0->unk11D4+i*20);
 func_802458C4_de();
}
