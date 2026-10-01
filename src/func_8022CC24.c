#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(s32, s32, void *);
extern void func_802233CC(s32 arg0, s32 arg1, void *arg2);
extern s32 func_8024E61C(void *arg0);
extern void func_802227D0(void *, void *, s32);
extern f32 func_8024E668(void *arg0, s32 arg1);
extern char D_800CE7E4;
extern char D_800CE730;
extern s32 D_800CED30;
extern f32 D_800C7E68[2];

typedef struct func_8022CC24_S1 func_8022CC24_S1;
typedef struct func_8022CC24_S2 func_8022CC24_S2;
struct func_8022CC24_S1 {
    char pad0[0x660];
    s32 unk660;
    char pad660[0x86C - 0x660 - sizeof(s32)];
    s32 unk86C;
    char pad86C[0x13B4 - 0x86C - sizeof(s32)];
    void* unk13B4;
};
struct func_8022CC24_S2 {
    char pad0[0x20];
    f32 unk20;
};

void func_8022CC24(void *arg0, void *arg1) {
    s32 value;

    func_802748E0((s32)arg0 + 0x72C, 0.0f, 0.25f);
    func_802231B0((s32)arg0, (s32)arg1, &D_800CE7E4);
    if (!(((func_8022CC24_S1 *)(arg0))->unk660 & 0x8000)) {
        func_802233CC((s32)arg0, (s32)arg1, &D_800CE730);
    }
    if (((func_8022CC24_S2 *)(arg1))->unk20 <= 0.0f) {
        if (func_8024E61C(arg1) != 0) {
            func_802227D0(arg0, arg1, 2);
        }
    }
    if (((func_8022CC24_S2 *)(arg1))->unk20 <= 0.0f) {
        if (func_8024E668(arg1, 0) < 0.0f) {
            if (-func_8024E668(arg1, 0) < D_800C7E68[0]) {
                goto set_value;
            }
        } else if (func_8024E668(arg1, 0) < D_800C7E68[1]) {
set_value:
            if (((func_8022CC24_S1 *)(arg0))->unk13B4 == &D_800CED30) {
                ((func_8022CC24_S1 *)(arg0))->unk86C = 0x5E2E;
            } else {
                ((func_8022CC24_S1 *)(arg0))->unk86C = 0x7F8;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CA8_4 = 61.4399986f;
const float unbake_rodata_800C2CAC_4 = 61.4399986f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E68_4 = 61.4399986f;
const float unbake_rodata_800C7E6C_4 = 61.4399986f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C301C_4 = 61.4399986f;
const float unbake_rodata_800C3020_4 = 61.4399986f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C305C_4 = 61.4399986f;
const float unbake_rodata_800C3060_4 = 61.4399986f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D78_4 = 61.4399986f;
const float unbake_rodata_800C2D7C_4 = 61.4399986f;
#endif
