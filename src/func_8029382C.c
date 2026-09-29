#include "basetypes.h"
typedef void (*Handler8029382C)(void *);

extern void func_80264CD8(void);
extern void func_80292910(void *arg0);
extern s32 D_800D2974;
extern s32 D_800D2984;
extern char D_800D29DC[];
extern s32 D_80146D68;

typedef struct func_8029382C_S1 func_8029382C_S1;
struct func_8029382C_S1 {
    char pad0[0x26DB8];
    s32 unk26DB8;
};

void func_8029382C(void *arg0) {
    s32 field;
    Handler8029382C fn;

    if (D_800D2974 != 0) {
        D_800D2974 = 0;
    }
    func_80264CD8();
    field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    fn = *(Handler8029382C *)(D_800D29DC + field * 0xC);
    if (fn != 0) {
        fn(arg0);
        field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    }
    if (field != 0x14 && D_80146D68 != 0) {
        D_80146D68 -= 1;
        func_80292910(arg0);
    }
    D_800D2984 += 1;
}
