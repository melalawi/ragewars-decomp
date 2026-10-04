#include "span_1000/code_8022E120.h"
#include "types.h"

extern s32 D_80142850;

extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_80218464_de(void *arg0);
extern s32 func_80214178_de(void *arg0, void *arg1, s32 arg2);
extern void func_8021B1E4_de(void *, s32, s32, s32);
extern void func_80226708_de(void *arg0);






void func_8022EDFC_de(void *arg0) {
    s32 mode;

    ((func_8022EDEC_S2 *)(((func_8022EDEC_S1 *)(arg0))->unk5D8))->unk8F = 1;
    mode = D_80142850;
    switch (mode) {
    case 0:
        func_8025DE54_de(0x18A1,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 1:
        func_8025DE54_de(0x1969,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 2:
        func_8025DE54_de(0x1905,
                      ((func_8022EDEC_S1 *)(arg0))->unk8,
                      ((func_8022EDEC_S1 *)(arg0))->unkC,
                      ((func_8022EDEC_S1 *)(arg0))->unk10,
                      (s32)((char *)arg0 + 8), -1);
        break;
    }
    func_80218464_de((char *)arg0 + 0x938);
    ((func_8022EDEC_S1 *)(arg0))->unk11B4 = 0;
    func_80214178_de(&((func_8022EDEC_S1 *)(arg0))->unk2E8, &((func_8022EDEC_S1 *)(arg0))->unk458, 1);
    func_8021B1E4_de(arg0, ((func_8022EDEC_S1 *)(arg0))->unk5EC, 0, 1);
    func_80226708_de(arg0);
}
