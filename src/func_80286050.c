#include "basetypes.h"

typedef struct InputState80286050 {
    u32 flags;
    u32 pad04;
    u32 pad08;
    u32 pad0C;
    u32 buttons;
} InputState80286050;

typedef struct Manager80286050 {
    u8 pad[0x180C];
    s32 state;
} Manager80286050;

extern f32 D_800CA1D4;
extern s32 D_800D2640;
extern s32 D_800D2644;
extern f32 D_800D2988;
extern char D_8013BA80;
extern char D_80145040;
extern Manager80286050 D_80145088;
extern InputState80286050 D_801462C8;
extern s32 D_80146894;

extern void func_8025470C(s32);
extern void func_8028A674(void *);
extern void func_8028D628(void *);
extern void func_80279A00(void *);
extern void func_80253B5C(s32, s32);
extern void func_802A66EC(void *);
extern void func_8022A144(void *);
extern void func_80287EE8(void *);
extern void func_80288440(void *);
extern void func_8028D5F8(void *);
extern void func_802A6670(void *);
extern void func_80286254(void *);
extern void func_80290218(void *);
extern void func_8028C5E8(void *);
extern void func_80281C74(void *);
extern void func_802285C4(void *);
extern void func_80236F0C(void *, void *);
extern void func_8028D658(void *);
extern void func_8028D864(void *);
extern void func_8028D0E4(void *);

#define FIELD(t, p, o) (*(t *)((char *)(p) + (o)))

void func_80286050(void *arg0) {
    void *state;
    InputState80286050 *input;
    s32 old_flags;

    state = arg0;
    input = &D_801462C8;
    old_flags = D_800D2640;
    D_800D2640 = input->buttons;
    if (input->flags & 0x4000) {
        D_800D2640 |= 0x100;
    }
    if (input->flags & 0x8000) {
        D_800D2640 |= 0x200;
    }
    if (old_flags != D_800D2640) {
        D_800D2644 = 1;
        func_8025470C(8);
    } else {
        D_800D2644 = 0;
    }

    func_8028A674(state);
    func_8028D628(state);
    FIELD(s32, state, 0x120) = 0;
    FIELD(s32, state, 0x124) = 0;
    func_80279A00((char *)state + 0x128);
    func_80253B5C(0, FIELD(s32, state, 0xE8));
    {
        void *manager;

        manager = &D_8013BA80;
        func_802A66EC(manager);
        func_8022A144(&D_80145040);
        func_80287EE8(state);
        func_80288440(state);
        func_8028D5F8(state);

        if ((FIELD(s32, state, 0x1B414) == 0) && (D_80146894 == 0)) {
            func_802A6670(manager);
            func_80286254(state);
            func_80290218((char *)state + 0x11778);
            FIELD(f32, state, 0x1B308) += D_800D2988 * D_800CA1D4;
            func_8028C5E8(state);
        }
    }

    func_80281C74((char *)state + 0x1B08);
    if (FIELD(s32, state, 0x1B414) == 0) {
        func_802285C4(&D_80145040);
    }

    func_80236F0C(&D_80145088, state);
    if ((FIELD(s32, state, 0x1B414) == 0) && (D_80145088.state == 0)) {
        func_8028D658(state);
    }
    func_8028D864(state);
    func_8028D0E4(state);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5014_4 = 0.087266475f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA1D4_4 = 0.087266475f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5394_4 = 0.087266475f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C53D4_4 = 0.087266475f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C50E4_4 = 0.087266475f;
#endif
