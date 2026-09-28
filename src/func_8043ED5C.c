#include "basetypes.h"

/* Sets the option bytes at 0x1D and 0x1E of D_801462C8 to 1 and 4, clears the first byte of each
   of the eight 150-byte player records at 0x148, then calls func_80442934 with the third argument,
   the second and the resource D_450AD4, and returns one. */
struct Player {
    u8 flag;
    u8 data[149];
};

struct Options {
    char pad0[0x1D];
    u8 first;
    u8 second;
    char pad1F[0x148 - 0x1F];
    struct Player players[8];
};

extern struct Options D_801462C8;
extern char D_450AD4[];
extern void func_80442934(void *, void *, void *);

s32 func_8043ED5C(void *first, void *second, void *third) {
    struct Options *options = &D_801462C8;
    s32 i;

    options->first = 1;
    options->second = 4;
    for (i = 0; i < 8; i++) {
        options->players[i].flag = 0;
    }
    func_80442934(third, second, D_450AD4);
    return 1;
}
