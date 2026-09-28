/* Append one selected character to an eight-character entry buffer. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad[0x14]; u8 **unk14; } Obj;
typedef struct { char pad[0x1c]; s32 unk1C; } Params;
extern char D_80145040;
typedef struct { s32 value; f32 timer; s32 count; u8 text[12]; } Entry;
extern Entry D_800E63C0[];
extern s32 func_8022A590(void *,s32);
s32 func_80446704(Obj *arg0, Params *arg1) {
 s32 value; s32 count; s32 index=func_8022A590(&D_80145040,arg1->unk1C);
 D_800E63C0[index].timer=0;
 if(D_800E63C0[index].count == 8) return 0;
 {
 D_800E63C0[index].text[D_800E63C0[index].value]=**arg0->unk14;
 value=D_800E63C0[index].value+1;
 count=D_800E63C0[index].count+1;
 D_800E63C0[index].value=value;
 D_800E63C0[index].count=count;
 D_800E63C0[index].text[count]=0;
 }
 return 0;
}
