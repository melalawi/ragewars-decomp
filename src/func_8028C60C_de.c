#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
#include "types.h"

extern f32 D_800CD738;
extern void func_80278C10_de(void *);
extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);









void func_8028C60C_de(void *arg0) {
    void *node;
    void *next;
    void *object;
    s32 remove;
    s32 expired;
    f32 zero;
    f32 value;

    node = ((func_8028C5E8_S1 *)(arg0))->unk11D8.v0;
    remove = 0;
    if (node != 0) {
        zero = 0.0f;
        do {
            object = ((func_8028C5E8_S2 *)(node))->unk8;
            next = ((func_8028C5E8_S2 *)(node))->unk4;
            expired = remove;
            if (((ModelDef *)(object))->colour & 2) {
                value = ((func_8028C5E8_S2 *)(node))->unkC - D_800CD738;
                ((func_8028C5E8_S2 *)(node))->unkC = value;
                if (value <= zero) {
                    expired = 1;
                    remove = 1;
                }
            }
            if (expired != 0) {
                func_80278C10_de(object);
            }
            if (remove != 0) {
                func_80255ED8_de(&((func_8028C5E8_S1 *)(arg0))->unk11D8.v1, (s32)node);
                func_80255CB8_de(&((func_8028C5E8_S1 *)(arg0))->unk11EC, (s32)node);
            }
            node = next;
            remove = 0;
        } while (node != 0);
    }
}
