/* Refreshes each of the four ports through func_80404E28 and sets field 0x1C of D_800E3518 as soon as one reports status 0, -1, -3 or -4 through func_80404F04, clearing it otherwise. */
#include "basetypes.h"

typedef struct {
    char pad0[0x1C];
    s32 flag;
} State;

extern State *D_800E3518;
extern void func_80404E28(s32 port);
extern s32 func_80404F04(s32 port);

void func_8041C21C(void) {
    s32 port;

    D_800E3518->flag = 0;
    for (port = 0; port < 4; port++) {
        func_80404E28(port);
        switch (func_80404F04(port)) {
        case 0:
            D_800E3518->flag = 1;
            return;
        case -1:
        case -3:
        case -4:
            D_800E3518->flag = 1;
            return;
        }
    }
}
