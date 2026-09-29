#include "basetypes.h"

/* Resets a match: calls func_80264874 with zero, func_80285D00 on D_8010EC90 and func_8022A870 on
   D_80145040, clears five state words of D_801468A0, and sets the byte at offset 0x26DC1 of the
   match block to 2 and its word at 0x26DBC to one. */
struct State {
    char pad0[0x24];
    s32 a;
    char pad28[0x54 - 0x28];
    s32 b;
    char pad58[0x78 - 0x58];
    s32 c;
    char pad7C[0x88 - 0x7C];
    s32 d;
    char pad8C[0xAC - 0x8C];
    s32 e;
};

extern struct State D_801468A0;
extern char D_8010EC90[];
extern char D_80145040[];
extern void func_80264874(s32);
extern void func_80285D00(void *);
extern void func_8022A870(void *);

typedef struct func_8044E9A0_S1 func_8044E9A0_S1;
struct func_8044E9A0_S1 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    u8 unk26DC1;
};

void func_8044E9A0(char *match) {
    struct State *state;

    func_80264874(0);
    func_80285D00(D_8010EC90);
    func_8022A870(D_80145040);
    state = &D_801468A0;
    state->a = 0;
    state->b = 0;
    state->c = 0;
    state->d = 0;
    state->e = 0;
    ((func_8044E9A0_S1 *)(match))->unk26DC1 = 2;
    ((func_8044E9A0_S1 *)(match))->unk26DBC = 1;
}
