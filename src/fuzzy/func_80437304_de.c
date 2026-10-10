/* Allocates the widget-manager record and registers this object's two callbacks in it. */
#include "types.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Widget;

extern Widget *D_800E5780;
extern char D_80102B7E[];

extern s32 func_8025305C_de(s32);
extern s32 func_8041A280_de(s32, s32);
extern s32 func_80265650_de(char *, s32);
extern void *func_8040EC30_de(void *, s32);
extern void func_8040E950_de(void *, s32);
extern s32 func_80419E54_de(s32, s32);

typedef struct func_804374F0_S1 func_804374F0_S1;
struct func_804374F0_S1 {
    char pad0[0x10];
    u8 unk10;
};

s32 func_80437304_de(void *arg0) {
    void *obj;

    D_800E5780 = (Widget *)func_8025305C_de(0x18);
    D_800E5780->unk0 = func_8041A280_de(0x136, 0x137);
    D_800E5780->unk14 = 0;

    if (func_80265650_de(D_80102B7E, 0) == 0) {
        func_8040E950_de(func_8040EC30_de(arg0, 0x13A), 1);
    }

    D_800E5780->unk4 = func_80419E54_de(0x139, 0x6E);

    obj = func_8040EC30_de(arg0, 0x138);
    D_800E5780->unk8 = obj;
    ((func_804374F0_S1 *)(obj))->unk10 = 0xF;

    D_800E5780->unkC = 3;
    D_800E5780->unk10 = -1;
    return 0;
}
