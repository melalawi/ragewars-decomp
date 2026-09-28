/* Lays out a slider from its value: scales value - min over max - min onto the track span, then
   for a vertical slider (flag 1) sets the fill's y and height and centres the thumb vertically on
   that edge, and for a horizontal slider sets the fill's width and moves the thumb from the fill's
   x by that edge less half its width. */
#include "basetypes.h"

typedef struct {
    char pad0[0x14];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
} Widget;

typedef struct {
    char pad0[0x44];
    s32 min;
    s32 max;
    char pad4C[4];
    s32 value;
    s32 left;
    s32 top;
    s32 right;
    s32 bottom;
    Widget *thumb;
    Widget *fill;
    s32 flags;
} Slider;

void func_8040C9D0(Slider *slider) {
    s32 pos;

    if (slider->flags & 1) {
        pos = (slider->bottom - slider->top) * (slider->value - slider->min) / (slider->max - slider->min);
        slider->fill->y = pos;
        slider->fill->height = slider->bottom - pos;
        if (slider->thumb != 0) {
            slider->thumb->y = pos - slider->thumb->height / 2;
        }
    } else {
        pos = (slider->right - slider->left) * (slider->value - slider->min) / (slider->max - slider->min);
        slider->fill->width = pos;
        if (slider->thumb != 0) {
            slider->thumb->x = slider->fill->x - (pos - slider->thumb->width / 2);
        }
    }
}
