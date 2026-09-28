#include "basetypes.h"

extern void func_80273744(void *, s32);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_802734B8(char *object, float x, float y, float z);
extern void func_80273DDC(void *object);
extern void func_802702EC(void *arg0, void *arg1);

extern s32 D_8013B190;
extern s32 D_800D297C;

void func_8024F624(void *arg0) {
    char *o = (char *) arg0;
    f32 sp10[16];
    s32 var_a1;

    if (*(s32 *) (*(s32 **) (o + 0x18)) == 8) {
        var_a1 = D_8013B190;
    } else {
        var_a1 = *(s32 *) (o + 0x174);
    }
    func_80273744(sp10, var_a1);

    func_802734EC(sp10, *(f32 *) (o + 0x194), *(f32 *) (o + 0x194), *(f32 *) (o + 0x194));

    func_802725BC((f32 *) (o + 8), 20000.0f);

    func_802734B8((char *) sp10, *(f32 *) (o + 8), *(f32 *) (o + 0xC) + *(f32 *) (o + 0x198), *(f32 *) (o + 0x10));

    func_80273DDC(sp10);

    func_802702EC(sp10, (D_800D297C << 6) + 0x68 + o);
}
