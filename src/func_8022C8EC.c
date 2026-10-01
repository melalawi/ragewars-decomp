/* Runs a player's grounded movement state: updates it through func_80224028, eases the value at
   0x72C to zero by a quarter, applies the movement tables D_800CE7FC and D_800CE7C0, then leaves for
   state 2 when not on the ground (animation 0x5E24 for the D_800CED30 state table, otherwise 1), or
   picks the animation from the stick at 0x6C0 and 0x6C4: 0xA64 at rest, 0xA67 or 0xA66 when the
   second axis dominates and 0xA65 or 0xA68 otherwise, by the sign of the dominant axis. */
#include "basetypes.h"

extern void func_80224028(void *, void *);
extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(void *, void *, void *);
extern void func_802233CC(void *, void *, void *);
extern s32 func_802227D0(void *, void *, s32);
extern char D_800CE7FC;
extern char D_800CE7C0;
extern s32 D_800CED30;

typedef struct func_8022C8EC_S1 func_8022C8EC_S1;
struct func_8022C8EC_S1 {
    char pad0[0x6AC];
    s32 unk6AC;
    char pad6AC[0x6C0 - 0x6AC - sizeof(s32)];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
    char pad6C4[0x72C - 0x6C4 - sizeof(f32)];
    f32 unk72C;
    char pad72C[0x86C - 0x72C - sizeof(f32)];
    s32 unk86C;
    char pad86C[0x13B4 - 0x86C - sizeof(s32)];
    s32* unk13B4;
};

void func_8022C8EC(void *arg0, void *arg1) {
    f32 x;
    f32 y;
    f32 zero;

    func_80224028(arg0, arg1);
    zero = 0.0f;
    func_802748E0(&((func_8022C8EC_S1 *)(arg0))->unk72C, zero, 0.25f);
    func_802231B0(arg0, arg1, &D_800CE7FC);
    func_802233CC(arg0, arg1, &D_800CE7C0);
    if (!(((func_8022C8EC_S1 *)(arg0))->unk6AC & 0x10)) {
        func_802227D0(arg0, arg1, 2);
        if (((func_8022C8EC_S1 *)(arg0))->unk13B4 == &D_800CED30) {
            ((func_8022C8EC_S1 *)(arg0))->unk86C = 0x5E24;
        } else {
            ((func_8022C8EC_S1 *)(arg0))->unk86C = 1;
        }
    } else {
        x = ((func_8022C8EC_S1 *)(arg0))->unk6C0;
        if (x != zero || ((func_8022C8EC_S1 *)(arg0))->unk6C4 != zero) {
            y = ((func_8022C8EC_S1 *)(arg0))->unk6C4;
            if (x < y) {
                if (zero < y) {
                    ((func_8022C8EC_S1 *)(arg0))->unk86C = 0xA67;
                } else {
                    ((func_8022C8EC_S1 *)(arg0))->unk86C = 0xA66;
                }
            } else if (zero < x) {
                ((func_8022C8EC_S1 *)(arg0))->unk86C = 0xA65;
            } else {
                ((func_8022C8EC_S1 *)(arg0))->unk86C = 0xA68;
            }
        } else {
            ((func_8022C8EC_S1 *)(arg0))->unk86C = 0xA64;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C7990_80[] = {0x05, 0x55, 0x05, 0x56, 0x05, 0x59, 0x05, 0x5A, 0x05, 0x65, 0x05, 0x66, 0x05, 0x69, 0x05, 0x6A, 0x05, 0x95, 0x05, 0x96, 0x05, 0x99, 0x05, 0x9A, 0x05, 0xA5, 0x05, 0xA6, 0x05, 0xA9, 0x05, 0xAA, 0x06, 0x55, 0x06, 0x56, 0x06, 0x59, 0x06, 0x5A, 0x06, 0x65, 0x06, 0x66, 0x06, 0x69, 0x06, 0x6A, 0x06, 0x95, 0x06, 0x96, 0x06, 0x99, 0x06, 0x9A, 0x06, 0xA5, 0x06, 0xA6, 0x06, 0xA9, 0x06, 0xAA, 0x09, 0x55, 0x09, 0x56, 0x09, 0x59, 0x09, 0x5A, 0x09, 0x65, 0x09, 0x66, 0x09, 0x69, 0x09, 0x6A, 0x09, 0x95, 0x09, 0x96, 0x09, 0x99, 0x09, 0x9A, 0x09, 0xA5, 0x09, 0xA6, 0x09, 0xA9, 0x09, 0xAA, 0x0A, 0x55, 0x0A, 0x56, 0x0A, 0x59, 0x0A, 0x5A, 0x0A, 0x65, 0x0A, 0x66, 0x0A, 0x69, 0x0A, 0x6A, 0x0A, 0x95, 0x0A, 0x96, 0x0A, 0x99, 0x0A, 0x9A, 0x0A, 0xA5, 0x0A, 0xA6, 0x0A, 0xA9, 0x0A, 0xAA};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCAF0_4 = 0.0174532924f;
const float unbake_rodata_800CCAF4_4 = 0.5f;
const float unbake_rodata_800CCAF8_4 = (-1.0f);
const float unbake_rodata_800CCAFC_4 = 2.0f;
const float unbake_rodata_800CCB00_4 = 131072.0f;
const float unbake_rodata_800CCB04_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C64E0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C64A0_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7798_20[] = {0x002B5BE0U, 0x002B5C04U, 0x002B5C44U, 0x002B5C28U, 0x002B5C60U, 0x002B5C7CU, 0x002B5CC4U, 0x002B5D28U};
const float unbake_rodata_800C77B8_4 = 0.00100000005f;
#endif
