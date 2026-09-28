/* Draws a visible widget (flag 8): when func_8040E154 places it, and its draw flags ask for
   clipping (0x200), it narrows the current scissor from func_802A2898 to the widget's box through
   func_8040F508 (skipping the draw when nothing is left) and applies it with func_802A2870; it then
   draws the widget through func_8040DB84 and restores the saved scissor if it was narrowed. */
#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 flags;
    f32 scaleX;
    f32 scaleY;
    s32 v[5];
} DrawArgs;

typedef struct {
    s32 left;
    s32 top;
    s32 right;
    s32 bottom;
} Rect;

typedef struct {
    char pad0[0x12];
    u16 flags;
} Widget;

extern s32 func_8040E154(Rect *a, Rect *box, Widget *widget, DrawArgs *args);
extern void func_802A2898(s32 *left, s32 *right, s32 *top, s32 *bottom);
extern s32 func_8040F508(Rect *clip, Rect *box);
extern void func_802A2870(s32 left, s32 right, s32 top, s32 bottom);
extern void func_8040DB84(Widget *widget, DrawArgs args);

void func_8040E6FC(Widget *widget, DrawArgs args) {
    Rect box;
    Rect area;
    Rect saved;
    Rect clip;
    DrawArgs local;
    s32 clipped;

    clipped = 0;
    if (widget->flags & 8) {
        local = args;
        if (func_8040E154(&area, &box, widget, &local) != 0) {
            if (local.flags & 0x200) {
                func_802A2898(&saved.left, &saved.right, &saved.top, &saved.bottom);
                clip = saved;
                if (func_8040F508(&clip, &box) == 0) {
                    return;
                }
                clipped = 1;
                func_802A2870(clip.left, clip.right, clip.top, clip.bottom);
            }
            func_8040DB84(widget, args);
            if (clipped) {
                func_802A2870(saved.left, saved.right, saved.top, saved.bottom);
            }
        }
    }
}
