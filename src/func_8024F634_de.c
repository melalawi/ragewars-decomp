#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "types.h"

extern void func_802736D4_de(void *, s32);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_8027254C_de(f32 *arg0, f32 arg1);
extern void func_80273448_de(char *object, float x, float y, float z);
extern void func_80273D6C_de(void *object);
extern void func_8027027C_de(void *arg0, void *arg1);


extern s32 D_800CD72C;




void func_8024F634_de(void *arg0) {
    char *o = (char *) arg0;
    f32 sp10[16];
    s32 var_a1;

    if (*(s32 *) (((func_8024F624_S1 *)(o))->unk18) == 8) {
        var_a1 = D_801370D0;
    } else {
        var_a1 = ((func_8024F624_S1 *)(o))->unk174;
    }
    func_802736D4_de(sp10, var_a1);

    func_8027347C_de(sp10, ((func_8024F624_S1 *)(o))->unk194, ((func_8024F624_S1 *)(o))->unk194, ((func_8024F624_S1 *)(o))->unk194);

    func_8027254C_de(&((func_8024F624_S1 *)(o))->unk8, 20000.0f);

    func_80273448_de((char *) sp10, ((func_8024F624_S1 *)(o))->unk8, ((func_8024F624_S1 *)(o))->unkC + ((func_8024F624_S1 *)(o))->unk198, ((func_8024F624_S1 *)(o))->unk10);

    func_80273D6C_de(sp10);

    func_8027027C_de(sp10, (D_800CD72C << 6) + 0x68 + o);
}
