#include "span_1000/code_80263754.h"
#include "types.h"

/* Updates the state of the four controller ports: a port whose device is gone clears all three flags; a port whose device responds is marked ready, turning a pending reconnection into a reconnect event; a ready port that stops responding is marked pending. */

extern s32 D_8010B310[];
extern s32 D_8010BC28[];

extern s32 func_8026475C_de(s32 port);


void func_80263C24_de(void)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        if (func_8026475C_de(i) != 0) {
            if (func_80264634_de(i) != 0) {
                D_8010B310[i] = 1;
                if (D_8010BC28[i] != 0) {
                    D_8010BBF0[i] = 1;
                    D_8010BC28[i] = 0;
                }
            } else if (D_8010B310[i] != 0) {
                D_8010BC28[i] = 1;
            }
        } else {
            D_8010BBF0[i] = 0;
            D_8010BC28[i] = 0;
            D_8010B310[i] = 0;
        }
    }
}
