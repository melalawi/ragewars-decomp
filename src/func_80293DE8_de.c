#include "span_1000/code_80293A04.h"
#include "common/types_8a8189af7b05.h"
#include "types.h"

/** Perform no work for callers at VRAM 0x80293DDC. */
void func_80293DE8_de(void) {
}

extern s32 D_800DE878;
extern s32 D_80142CB0;


extern s32 D_80142CA0_de;

extern s32 D_80146CD4_de;

extern void func_8040C428_de(s32 arg0);
extern void func_80298368_de(s32 arg0);




void func_80293DF0_de(void *arg0) {
    D_800DE878 = -1;
    D_80142CB0 = 0;
    func_8040C428_de(0);
    D_800CD774 = 1;
    D_80142CA0_de = 1;
    D_800DE87C_de = 1;
    D_80146CD4_de = 0;
    ((func_80293378_S1 *)(arg0))->unk26DC4 = D_800C54C0_de;
    func_80298368_de(0x1D);
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802647C4_de();
extern s32 D_80146CE0;
void func_80293E6C_de(void *arg0) {
    if (D_80146CE0 != 0) {
        func_80293824_de(arg0, 1);
        func_802647C4_de();
    }
}

/** Thin wrapper around func_80293CE4_de. */
void func_80293E9C_de(void) {
    func_80293CE4_de();
}

extern void func_8025E2D4_de(s32 a);
extern void func_80293334_de(void *arg0, void *arg1, void *arg2);
extern void func_80286AA8_de(void *arg0, void *arg1, void *arg2);
extern void func_8044A370_de(void *arg0, s32 arg1);
extern void func_80296004_de(unsigned int value);
extern u8 D_801427E0;
extern s32 D_8011BDC8;




void func_80293EB8_de(void *arg0) {
    s8 *p1;
    s8 *p2;
    int new_var;

    func_8025E2D4_de(0);
    new_var = 0x5D8;
    p1 = ((s8 *)(&D_801427E0)) - new_var;
    ((struct IntegerStateB0 *) ((char *) (&D_801427E0)))->unk_AC = 0;
    ((struct IntegerStateB0 *) ((char *) (&D_801427E0)))->unk_88 = 0;
    p1[0xB2] = 1;
    p1[0x1D] = 0;
    p1[0x1E] = 1;
    func_80293334_de(arg0, 0, 0);
    func_80286AA8_de(&D_8011BDC8, 0, 0);
    p2 = ((s8 *)(&D_801427E0)) - 0x1818;
    func_8044A370_de(p2, 1);
    ((IntegerState164 *)(p2))->unk_160 = 0;
    func_80296004_de(0);
}
