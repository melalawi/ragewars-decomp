/* Picks the pak menu prompt text: in pak mode, when a prompt is due, the text for the channel (D_800E28C8 when D_8015375C is set, else the widget's channel) from four channel texts; otherwise one of two texts in the other mode, or a third text when D_8015375C alone is set, and 0 when none applies. */
#include "basetypes.h"

typedef struct {
    char pad0[0x4];
    s8 channel;
} Widget;

typedef struct {
    char pad0[0x20];
    Widget *widget;
} Menu;

extern char D_44F148[];
extern char D_45077C[];
extern char D_450BD0[];
extern char D_451820[];
extern char D_451844[];
extern char D_451868[];
extern char D_45188C[];
extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_800E28C8;

char *func_8040A0C8(Menu *menu) {
    s32 channel[2]; /* FAKEMATCH: unused second slot keeps channel in the frame */
    char *text;
    char *prompt; /* FAKEMATCH: copy-only local routes the switch result through its own register before text */

    text = 0;
    if (D_80153750 != 0) {
        if (D_8015377C == 0) {
            return text;
        }
        if (D_8015375C != 0) {
            channel[0] = D_800E28C8;
        } else {
            channel[0] = menu->widget->channel;
        }
        switch (channel[0]) {
        case 0:
        default:
            prompt = D_451820;
            break;
        case 1:
            prompt = D_451844;
            break;
        case 2:
            prompt = D_451868;
            break;
        case 3:
            prompt = D_45188C;
            break;
        }
        text = prompt;
    } else if (D_80153760 != 0) {
        text = D_450BD0;
        if (D_8015377C != 0) {
            text = D_45077C;
        }
    } else if (D_8015375C != 0) {
        text = D_44F148;
    }
    return text;
}
