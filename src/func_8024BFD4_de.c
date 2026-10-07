#include "span_1000/code_8024BA6C.h"
#include "common/types_1dc8418c21db.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "span_1000/code_80245980.h"
#include "types.h"














extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE3C_de(s32, s32, s32, s32 *);
extern void func_80253754_de(s32, void *);

extern char D_0026D814;
extern char D_800C3B28;
extern char D_800C3B3C;




void **func_8024BFD4_de(void *arg0, s32 arg1) {
    void **resource;

    if (arg1 < 0) {
        return 0;
    }
    if (arg1 != ((Access_s32_D8 *)(arg0))->field) {
        resource = func_8025193C_de(0, ((func_80264874_S1 *)(arg0))->unkCC,
                                 ((func_80264874_S1 *)(arg0))->unkCC, ((Access_s32_D4 *)(arg0))->field,
                                 0, 0, 0, &D_800C3B28, 1);
        if (resource != 0) {
            ((func_8024575C_S1 *)(arg0))->unkDC = func_8028FE3C_de((s32)*resource,
                                                ((func_80264874_S1 *)(arg0))->unkCC,
                                                arg1 % *(s32 *)*resource,
                                                &((MenuPanelRoot *)(arg0))->window);
            ((Access_s32_D8 *)(arg0))->field = arg1;
            func_80253754_de(0, resource);
        }
    }
    if (((func_8024575C_S1 *)(arg0))->unkDC != 0) {
        return func_8025193C_de(0, ((func_8024575C_S1 *)(arg0))->unkDC,
                             ((func_8024575C_S1 *)(arg0))->unkDC, ((MenuPanelRoot *)(arg0))->window,
                             0, 0, &D_0026D814, &D_800C3B3C, 0);
    }
    return 0;
}

