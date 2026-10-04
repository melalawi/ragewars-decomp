#include "span_1000/code_80232B44.h"
#include "types.h"
/* Advances an overlay's fade: state 1 fades the alpha at 0x551 in over the 0x54B-frame duration up to the
 * maximum at 0x54A, state 2 holds the maximum for 0x54C frames, state 3 fades out over 0x54D frames and
 * returns to state 0; each state change restarts the timer at 0x538, which then advances by the frame
 * time D_800D2988. */



extern f32 D_800CD738;

void func_80233B14_de(Overlay *overlay) {
    switch (overlay->state) {
    case 1:
        if (overlay->fadeIn <= overlay->timer) {
            overlay->state = 2;
            overlay->timer = 0.0f;
            goto hold;
        }
        overlay->alpha = (u32)(overlay->timer / (overlay->fadeIn + 1) * overlay->alphaMax);
        break;
    case 0:
        break;
    case 2:
    hold:
        if (!(overlay->hold <= overlay->timer)) {
            overlay->alpha = overlay->alphaMax;
            break;
        }
        overlay->state = 3;
        overlay->timer = 0.0f;
        /* fallthrough */
    case 3:
        if (overlay->fadeOut <= overlay->timer) {
            overlay->state = 0;
            overlay->timer = 0.0f;
            break;
        }
        overlay->alpha = (u32)(overlay->alphaMax - overlay->timer / (overlay->fadeOut + 1) * overlay->alphaMax);
        break;
    }
    overlay->timer += D_800CD738;
}
