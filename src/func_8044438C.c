/* Updates the selected menu option in response to the current input state. */
#include "basetypes.h"
#define NULL ((void *)0)
s32 func_8026439C(char *);                             /* extern */
s32 func_802643A8(char *);                             /* extern */
s32 func_802643C0(char *);                          /* extern */
extern char D_8010F0E0;
extern u32 D_801462D0[];

s32 func_8044438C(void) {
 if(func_802643A8(&D_8010F0E0)) {
 switch(D_801462D0[0]) {
 case 8: D_801462D0[0]=32; break;
 case 16: D_801462D0[0]=8; break;
 case 32: D_801462D0[0]=16; break;
 }
 }
 if(func_802643C0(&D_8010F0E0) || func_8026439C(&D_8010F0E0)) {
 switch(D_801462D0[0]) {
 case 8: D_801462D0[0]=16; break;
 case 16: D_801462D0[0]=32; break;
 case 32: D_801462D0[0]=8; break;
 }
 }
 return 0;
}
