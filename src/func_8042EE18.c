/* Applies the selected rule settings and refreshes the menu state. */
#include "basetypes.h"
typedef struct { char pad0[0xD]; u8 trialKind; char padE[0x16]; s8 time,limit,other,score; } Settings;
typedef struct { char pad0[0x21]; u8 score,limit,other,time; } Active;
extern Settings D_801462C8;
extern Active *D_800E4680;
extern char D_8011FAC0[];
extern void func_8042EF50(f32,s32,s32,s32,s32,s32,s32);
extern s32 func_8042F014(void);
extern void func_8044EACC(void *,s32);
void func_8042EE18(void) {
 Settings *g=&D_801462C8;
 if(g->trialKind != 0) func_8042EF50((f32)D_800E4680->time,D_800E4680->limit,D_800E4680->score,D_800E4680->other,0,1,0);
 else func_8042EF50((f32)g->time,D_801462C8.limit,g->score,g->other,0,1,0);
 func_8044EACC(D_8011FAC0,func_8042F014());
}
