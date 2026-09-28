#include "basetypes.h"

/* On event 3 with value 0xB, calls func_8029A73C and sets the word at offset 0x20 of the object
   D_800E44A0 points to. Returns zero. */
struct State {
    char pad[0x20];
    s32 value;
};

extern struct State *D_800E44A0;
extern void func_8029A73C();

s32 func_804223FC(void *first, void *second, u32 event, s32 value) {
    if ((event >> 16) == 3 && value == 0xB) {
        func_8029A73C();
        D_800E44A0->value = 1;
    }
    return 0;
}
