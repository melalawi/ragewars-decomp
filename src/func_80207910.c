#include "basetypes.h"

extern void func_802737D0(void *arg0, f32 arg1);
extern void func_80273930(void *arg0, f32 arg1);
extern void func_80273B08(void *arg0, f32 arg1);
extern void func_8027302C(float *arg0, float *arg1);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(void *);

void func_80207910(void *arg0, void *arg1) {
    f32 sp10[16];
    char *temp_s1;

    func_802737D0(sp10, *(f32 *)((char *) arg1 + 0x138));
    func_80273930(sp10, *(f32 *)((char *) arg1 + 0x134));
    func_80273B08(sp10, *(f32 *)((char *) arg0 + 0x6C));
    temp_s1 = (char *) arg0 + 0x74;
    func_8027302C((float *) temp_s1, sp10);
    func_802734EC(temp_s1, *(f32 *)((char *) arg0 + 0x50), *(f32 *)((char *) arg0 + 0x54), *(f32 *)((char *) arg0 + 0x58));
    func_802725BC((f32 *)((char *) arg0 + 8), 20000.0f);
    func_802734B8(temp_s1, *(f32 *)((char *) arg0 + 8), *(f32 *)((char *) arg0 + 0xC), *(f32 *)((char *) arg0 + 0x10));
    func_80273DDC(temp_s1);
}
