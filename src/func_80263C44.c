#include "basetypes.h"

/* Updates the state of the four controller ports: a port whose device is gone clears all three flags; a port whose device responds is marked ready, turning a pending reconnection into a reconnect event; a ready port that stops responding is marked pending. */

extern s32 D_8010F310[];
extern s32 D_8010FC28[];
extern s32 D_8010FBF0[];
extern s32 func_8026477C(s32 port);
extern s32 func_80264654(s32 port);

void func_80263C44(void)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        if (func_8026477C(i) != 0) {
            if (func_80264654(i) != 0) {
                D_8010F310[i] = 1;
                if (D_8010FC28[i] != 0) {
                    D_8010FBF0[i] = 1;
                    D_8010FC28[i] = 0;
                }
            } else if (D_8010F310[i] != 0) {
                D_8010FC28[i] = 1;
            }
        } else {
            D_8010FBF0[i] = 0;
            D_8010FC28[i] = 0;
            D_8010F310[i] = 0;
        }
    }
}
