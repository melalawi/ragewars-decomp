#include "span_16E000/code_8044D024.h"
#include "types.h"

/* Resets a match: calls func_80264854_de with zero, func_80285D30_de on D_8010EC90 and func_8022A880_de on
   D_80145040, clears five state words of D_801468A0, and sets the byte at offset 0x26DC1 of the
   match block to 2 and its word at 0x26DBC to one. */


extern struct State_func_8044DD50_de D_801427E0;
extern char D_8010AC90[];
extern char D_80140F80[];
extern void func_80264854_de(s32);
extern void func_80285D30_de(void *);
extern void func_8022A880_de(void *);




void func_8044DD50_de(char *match) {
    struct State_func_8044DD50_de *state;

    func_80264854_de(0);
    func_80285D30_de(D_8010AC90);
    func_8022A880_de(D_80140F80);
    state = &D_801427E0;
    state->a = 0;
    state->b = 0;
    state->c = 0;
    state->d = 0;
    state->e = 0;
    ((func_8044E9A0_S1 *)(match))->unk26DC1 = 2;
    ((func_8044E9A0_S1 *)(match))->unk26DBC = 1;
}
