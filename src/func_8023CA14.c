#include "basetypes.h"

extern void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
extern void func_802C0390(s32, s32, s32);
extern void func_8025631C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_802C2060(s32 arg0, s32 arg1);
extern void func_802C2100(u32, u32);
extern void func_802C0510(void *arg0, void *arg1, s32 arg2);

extern char D_80103D08;
extern s32 D_801051B8;
extern char D_80156000;

void func_8023CA14(void) {
    char sp10[0x18];
    s32 sp28;
    void *sp2C;
    s32 invalid;
    s32 mask;
    char *queue;
    s32 base;
    s32 one;
    void *entry;

    func_802BFD50(sp10, (s32)&sp28, 1);
    queue = &D_80103D08;
    invalid = 0xFF;
    mask = -2;
    base = (s32)&D_80156000;
loop:
    func_802C0390(queue, &sp2C, 1);
    if (**(u8 **)((char *)sp2C + 0x18) == invalid) {
        func_8025631C(&D_801051B8,
                      *(s32 *)((char *)sp2C + 4),
                      (*(s32 *)((char *)sp2C + 8) + 1) & mask,
                      ((*(u8 *)(*(char **)((char *)sp2C + 0x10) + 0xA)) << 12) +
                      base);
        func_802C2060(((s32)(*(u8 *)(*(char **)((char *)sp2C + 0x10) + 0xA)) << 12) +
                          base,
                      0x1000);
        func_802C2100(((s32)(*(u8 *)(*(char **)((char *)sp2C + 0x10) + 0xA)) << 12) +
                          base,
                      0x1000);
    }
    one = 1;
    entry = sp2C;
    *(s16 *)entry = one;
    func_802C0510(queue - 0xAB4, entry, one);
    goto loop;
}
