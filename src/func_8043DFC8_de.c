#include "span_16E000/code_8043D904.h"
#include "span_16E000/types.h"
/* Clears eight player active flags, then marks the first settings slot whose controller profile is active. */







#if defined(VERSION_US_REV1)
extern StatusStep D_80142622[];
#define PLAYER_STATUS D_80142622
#elif defined(VERSION_US)
extern StatusStep D_80142622[];
#define PLAYER_STATUS D_80142622
#elif defined(VERSION_EU)
extern StatusStep D_80142622[];
#define PLAYER_STATUS D_80142622
#elif defined(VERSION_EU_X)
extern StatusStep D_80142622[];
#define PLAYER_STATUS D_80142622
#elif defined(VERSION_DE)
extern StatusStep D_80142622[];
#define PLAYER_STATUS D_80142622
#endif
extern PlayerSettings D_801422D8[];
extern ControllerProfile D_8010B328[];
extern s32 func_8026437C_de(ControllerProfile *);

void func_8043DFC8_de(void) {
    StatusStep *status;
    PlayerSettings *settings;
    s32 i;
    s32 active;

    i = 7;
    status = PLAYER_STATUS;
    for (; i >= 0; i--) {
        ((StatusView *)status)->active = 0;
        status--;
    }
    i = 0;
    active = 1;
    settings = D_801422D8;
    for (; i < 4; i++) {
        if (func_8026437C_de(&D_8010B328[i]) != 0) {
            settings[i].active = active;
            settings[i].selected = i;
            break;
        }
    }
}
