#include "basetypes.h"

extern int func_802A33AC(void);
extern void func_802A3090(void);
extern void func_8026D8F8(void);
extern void func_80296FF8(void);
extern void func_802A94E8(void);
extern void func_802A9700(void);
extern void func_802ABB58(f32 arg0, f32 arg1);
extern void func_802ABB2C(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern void func_802AA224(s32);
extern void func_802A8650(void *arg0, int arg1);
extern f32 D_800CB380;
extern u8 D_801462DE;

typedef struct func_802AB794_S1 func_802AB794_S1;
struct func_802AB794_S1 {
    char pad0[0x40];
    int unk40;
    char pad40[0x88 - 0x40 - sizeof(int)];
    int unk88;
};

void func_802AB794(void *arg0) {
    char pad[256];
    (void)pad;

    if (func_802A33AC() == 1) {
        func_802A3090();
        func_8026D8F8();
        func_80296FF8();
    }
    func_802A94E8();
    func_802A9700();
    func_802ABB58(D_800CB380, D_800CB380);
    func_802ABB2C(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
    func_802AA224(D_801462DE);
    if (((func_802AB794_S1 *)(arg0))->unk40 != 0) {
        func_802A8650(arg0, 1);
    }
    if (((func_802AB794_S1 *)(arg0))->unk88 != 0) {
        func_802A8650(arg0, 2);
    }
}
