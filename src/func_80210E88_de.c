#include "span_1000/code_8020F2A8.h"
/* Advances an animation player one frame: returns 1 when there is no player or clip, or after wrapping
   past frame 7 back to 0; otherwise prepares and shows the current frame through func_802106E0_de and
   func_80210964_de, advances the frame at 0x1CC and returns 0. */


extern void func_802106E0_de(void *, int);
extern void func_80210964_de(void *, int);

int func_80210E88_de(Player_func_80210E88_de *p) {
    if (p == 0) {
        return 1;
    }
    if (p->clip == 0) {
        return 1;
    }
    if (p->frame < 8) {
        func_802106E0_de(p->clip, p->frame);
        func_80210964_de(p->clip, p->frame);
        p->frame++;
        return 0;
    }
    p->frame = 0;
    return 1;
}
