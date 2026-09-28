/* Sets a player's movement speed factor at 0x784: D_800C7938[0] in states 0 and 1, otherwise the
   character's speed at 0x1C of its descriptor, which for a computer player (0x1450) is scaled twice by
   its skill byte at 0x93 (D_800C7938[1] then D_800C7940[1] for skill 0, D_800C7940[0] then D_800C7948
   for skill 1, unchanged for skill 2, other values reset to 0), then by the game option factor at 0x20
   of D_801462C8 when enabled at 0x1D, and by the ground's factor at 0x30 when state bits 3 at 0x38 are
   clear, there is ground, and func_8024E61C reports true or the ground is flagged 0x800. */
#include "basetypes.h"

extern f32 D_800C7938[];
extern f32 D_800C7940[];
extern f32 D_800C7948;
extern u8 D_801462C8[];
extern s32 func_8024E61C(void *);

void func_802228E4(void *arg0, void *arg1, void *ground) {
    u8 *options;

    if (*(u16 *) ((char *) arg0 + 0x650) < 2) {
        *(f32 *) ((char *) arg0 + 0x784) = D_800C7938[0];
        return;
    }
    *(f32 *) ((char *) arg0 + 0x784) = *(f32 *) (*(char **) ((char *) arg1 + 0x18) + 0x1C);
    if (*(s32 *) ((char *) arg0 + 0x1450) != 0) {
        switch (*(u8 *) (*(char **) ((char *) arg0 + 0x5D8) + 0x93)) {
        default:
            *(u8 *) (*(char **) ((char *) arg0 + 0x5D8) + 0x93) = 0;
        case 0:
            *(f32 *) ((char *) arg0 + 0x784) *= D_800C7938[1];
            break;
        case 1:
            *(f32 *) ((char *) arg0 + 0x784) *= D_800C7940[0];
            break;
        case 2:
            break;
        }
        if (*(s32 *) ((char *) arg0 + 0x1450) != 0) {
            switch (*(u8 *) (*(char **) ((char *) arg0 + 0x5D8) + 0x93)) {
            default:
                *(u8 *) (*(char **) ((char *) arg0 + 0x5D8) + 0x93) = 0;
            case 0:
                *(f32 *) ((char *) arg0 + 0x784) *= D_800C7940[1];
                break;
            case 1:
                *(f32 *) ((char *) arg0 + 0x784) *= D_800C7948;
                break;
            case 2:
                break;
            }
        }
    }
    options = D_801462C8;
    if (options[0x1D] != 0) {
        *(f32 *) ((char *) arg0 + 0x784) *= *(f32 *) (options + 0x20);
    }
    if (!(*(s32 *) ((char *) arg1 + 0x38) & 3) && ground != 0
        && (func_8024E61C(arg1) != 0 || (*(u16 *) ((char *) ground + 0x52) & 0x800))) {
        *(f32 *) ((char *) arg0 + 0x784) *= *(f32 *) ((char *) ground + 0x30);
    }
}
