#include "basetypes.h"

extern f32 D_800CA498;
extern s32 D_800D15E0;
extern f32 D_800D15F0;

extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_80297B74(void *arg0, void *arg1);
extern void func_8024EB80(void *arg0);

void func_802905D4(char *arg0, char *arg1) {
    char *entry;
    f32 value;
    f32 upper;
    f32 scale;
    f32 zero;

    func_8026D980();
    entry = *(char **)(arg0 + 0x3C04);
    if (entry != 0) {
        zero = 0.0f;
        upper = D_800CA498;
        scale = *(&D_800CA498 + 1);
        do {
            if ((*(f32 *)(arg1 + 0x35C) > *(f32 *)(entry + 0x17C)) &&
                (*(f32 *)(arg1 + 0x350) < *(f32 *)(entry + 0x188)) &&
                (*(f32 *)(arg1 + 0x364) > *(f32 *)(entry + 0x184)) &&
                (*(f32 *)(arg1 + 0x358) < *(f32 *)(entry + 0x190)) &&
                (*(f32 *)(arg1 + 0x360) > *(f32 *)(entry + 0x180)) &&
                (*(f32 *)(arg1 + 0x354) < *(f32 *)(entry + 0x18C)) &&
                (func_80297B74(arg1 + 0x2F0, entry + 0x17C) != 0)) {
                value = *(f32 *)(entry + 0x1C8);
                D_800D15E0 = 0;
                if ((value > zero) && (value <= upper)) {
                    D_800D15E0 = 1;
                    D_800D15F0 = value * scale;
                }
                func_8024EB80(entry);
                D_800D15E0 = 0;
            }
            entry = *(char **)(entry + 0x1DC);
        } while (entry != 0);
    }
    func_8026D9D0();
}
