#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8028567C.h"
#include "types.h"

extern s32 func_802BCF30_de(void);
extern void func_80255ED8_de(void *, s32);
extern s32 func_80255D14_de(void *, s32);
extern void func_802BCF50_de(s32 arg0);







void func_80285D30_de(s32 *arg0) {
    void *node;
    void *next;
    s32 saved;

    saved = func_802BCF30_de();
    node = ((func_80285D00_S1 *)(arg0))->unk14.v0;
    if (node != 0) {
        do {
            next = ((Field_void_4 *)(node))->value;
            func_80255ED8_de(&((func_80285D00_S1 *)(arg0))->unk14.v1, node);
            func_80255D14_de(arg0, (s32)node);
            node = next;
        } while (node != 0);
    }
    ((func_80285D00_S1 *)(arg0))->unk28 = 0;
    func_802BCF50_de(saved);
}
