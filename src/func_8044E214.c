/* Processes both pending object lists between update barriers. */
#include "basetypes.h"
typedef struct {char p[0x11C0];s32 unk11C0,unk11C4;char q[8];s32 unk11D0,unk11D4;} State;
void func_802458B4();                                  /* extern */
void func_802458C8();                                  /* extern */
void func_8028784C(void *, s32);                       /* extern */

void func_8044E214(State *arg0) {
 s32 i,n;
 func_802458C8();
 n=arg0->unk11C0;
 for(i=0;i<n;i++) func_8028784C(arg0,arg0->unk11D0+i*20);
 n=arg0->unk11C4;
 for(i=0;i<n;i++) func_8028784C(arg0,arg0->unk11D4+i*20);
 func_802458B4();
}
