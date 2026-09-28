/* Draws a widget's variant image: when func_8040E154 accepts the widget at the position, picks the
   pressed (flag 0x100), highlighted (flag 0x40) or normal image of the widget, and when present
   moves the position back by the image's offset scaled by the style's scale factors and draws it
   through func_8040DB84 with the same flags and style. */
#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 flags;
} Placement;

typedef struct {
    f32 scaleX;
    f32 scaleY;
    s32 v[5];
} Style;

typedef struct {
    char pad0[0x14];
    s16 offsetX;
    s16 offsetY;
} Image;

typedef struct {
    char pad0[0x2C];
    Image *normal;
    Image *highlighted;
    Image *pressed;
} Widget;

typedef struct {
    s32 v[4];
} Box;

extern s32 func_8040E154(Box *a, Box *b, Widget *widget, Placement *at);
extern void func_8040DB84(Image *image, Placement at, Style style);

void func_8040F2B0(Widget *widget, Placement at, Style style) {
    Box box0;
    Box box1;
    Image *image;

    if (func_8040E154(&box0, &box1, widget, &at) != 0) {
        if (at.flags & 0x100) {
            image = widget->pressed;
        } else if (at.flags & 0x40) {
            image = widget->highlighted;
        } else {
            image = widget->normal;
        }
        if (image != 0) {
            at.x -= (s32)(image->offsetX * style.scaleX);
            at.y -= (s32)(image->offsetY * style.scaleY);
            func_8040DB84(image, at, style);
        }
    }
}
