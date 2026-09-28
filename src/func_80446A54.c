/* Copies a player label with spaces for empty characters and refreshes the entry. */
#include "basetypes.h"
typedef struct { char pad[0x5D8]; void *unk5D8; } Obj;
typedef struct { char pad[0x1C]; Obj *unk1C; } Entry;
extern u8 D_80145040[],D_800E63CC[];
extern s32 func_8022A590(void *,Obj *);
extern void func_804424F4(s32,Entry *,s32),func_80444260(void *);
s32 func_80446A54(s32 arg0, Entry *arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    u8 *var_a2;
    u8 *var_v1;
    u8 var_v0;
    Obj *temp_s1;

    temp_s1 = arg1->unk1C;
    temp_v0 = func_8022A590(D_80145040, temp_s1);
    var_a2 = (temp_v0 * 0x18) + D_800E63CC;
    var_v1 = (temp_v0 * 0x96) + (D_80145040 + 0x13DC);
    var_a1 = 0;
    var_a0 = 0;
    do {
        var_v0 = *var_a2;
        var_a2 += 1;
        if (var_v0 == 0) {
            var_v0 = 0x20;
        } else {
            var_a1 += 1;
        }
        *var_v1 = var_v0;
        var_a0 += 1;
        var_v1 += 1;
    } while (var_a0 < 8);
    *var_v1 = 0;
    if (var_a1 == 0) {
        func_80444260(temp_s1->unk5D8);
    }
    func_804424F4(arg0, arg1, arg2);
    return 1;
}
