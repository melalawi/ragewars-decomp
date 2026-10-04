#include "span_1000/code_8022A8E0.h"
#include "span_1000/types.h"
#include "types.h"







extern f32 D_800CD738;
extern void func_8024BE3C_de(void *arg0);
extern void func_80246E44_de(char *);






void func_8022A95C_de(void *arg0) {
    Block *base;
    s32 old_value;
    s32 new_value;
    f32 saved_value;

    base = &((func_8022A94C_S1 *)(arg0))->unk2E8;
    old_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    saved_value = D_800CD738;
    base->value = 0x10;
    base->flags &= 0xFFFDFFFF;
    func_8024BE3C_de(base);
    if (((func_8022A94C_S1 *)(arg0))->unk11D8 <= 0.0f) {
        func_80246E44_de(base);
    }
    new_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    D_800CD738 = saved_value;
    if (old_value != new_value) {
        ((func_8022A94C_S1 *)(arg0))->unk10E = 0;
    }
    ((func_8022A94C_S2 *)(arg0))->unk2F0 = ((func_8022A94C_S1 *)(arg0))->unk8;
    ((func_8022A94C_S2 *)(arg0))->unk354 = ((func_8022A94C_S1 *)(arg0))->unk6C;
    ((func_8022A94C_S2 *)(arg0))->unk2FC = ((func_8022A94C_S1 *)(arg0))->unk14;
    ((func_8022A94C_S2 *)(arg0))->unk344 = ((func_8022A94C_S1 *)(arg0))->unk5C;
}
