#include "basetypes.h"

extern char D_8013B364;
extern char D_800C71B8;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(s32);
extern void *func_8020C994(void *arg0, s32 arg1);
extern f32 func_8027272C(f32 *arg0, f32 *arg1);
extern void func_8020D220(void *, s32);
extern void func_8020D0CC(void *arg0, s32 arg1);
extern void func_8020D114(void *arg0, void *arg1, s32 arg2);
extern void func_80211020(void *arg0);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);
extern void func_8020FA10(void *arg0);

void func_80212A7C(void *arg0)
{
    void *state;
    void *table;
    void *entry;
    f32 threshold;
    s32 index;
    s32 value;
    u32 flags;

    state = *(void **)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x1454);
    table = &D_8013B364;
    if (*(s32 *)((char *)state + 0xC) == -1) {
        func_8020D014(table);
        func_8020D1FC((s32)table);
        threshold = *(f32 *)(&D_800C71B8 + 4);
        index = 0;
        if (*(s32 *)((char *)table + 4) > 0) {
            do {
                entry = func_8020C994(table, index);
                if (func_8027272C((f32 *)((char *)*(void **)state + 8), entry) < threshold &&
                    !(*(u32 *)((char *)entry + 0xC) & 0x04300000)) {
                    func_8020D220(table, index);
                }
                index++;
            } while (index < *(s32 *)((char *)table + 4));
        }
        func_8020D0CC(table, *(s32 *)((char *)state + 4));
        func_8020D114(table, (char *)state + 0x14, 4);
        value = *(s32 *)((char *)table + 0x18);
        *(s32 *)((char *)state + 0xC) = value;
        *(s32 *)((char *)state + 0x28) = value;
    }
    func_80211020(state);
    func_80208410(state);
    func_80208AAC(state);
    flags = (*(u32 *)((char *)*(void **)state + 0x38) & 0x3000) != 0;
    if (*(s32 *)((char *)state + 4) == *(s32 *)((char *)state + 0xC) &&
        !flags) {
        func_8020FA10(state);
    }
}
