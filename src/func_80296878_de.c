#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80296014.h"
#include "types.h"

extern void func_80271F68_de(void *out, void *a, void *b);
extern void func_80272018_de(void *out, void *a, void *b);
extern void func_8027207C_de(void *out);






void func_80296878_de(void *arg0, void *arg1, void *arg2, void *arg3) {
    u8 sp10[12];
    u8 sp20[12];

    func_80271F68_de(sp10, arg2, arg1);
    func_80271F68_de(sp20, arg3, arg2);
    func_80272018_de(arg0, sp20, sp10);
    func_8027207C_de(arg0);
    ((func_8024C8B4_S1 *)(arg0))->unkC = (((func_8024C8B4_S1 *)(arg0))->unk0 * ((func_8024C864_S1 *)(arg1))->unk0)
                                  + (((func_8024C8B4_S1 *)(arg0))->unk4 * ((func_8024C864_S1 *)(arg1))->unk4)
                                  + (((func_8024C8B4_S1 *)(arg0))->unk8 * ((func_8024C864_S1 *)(arg1))->unk8);
}
