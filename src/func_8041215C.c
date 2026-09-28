/* Loads or unloads the images of a widget subtree: visits the later siblings when asked and the
   children, then for an image widget (type 3) loads its image through func_804106F4 or unloads it
   through func_80411B70, and for a button (type 8) visits its normal, pressed and highlighted
   variants without their siblings; type 4 widgets and other types have nothing to do. */
#include "basetypes.h"

typedef struct Widget {
    char pad0[4];
    struct Widget *next;
    struct Widget *child;
    char padC[2];
    u16 type;
    char pad10[0x1C];
    struct Widget *normal;
    struct Widget *highlighted;
    struct Widget *pressed;
} Widget;

extern void func_804106F4(Widget *image, s32 mode);
extern void func_80411B70(Widget *image);

void func_8041215C(Widget *widget, s32 load, s32 siblings) {
    if (widget == 0) {
        return;
    }
    if (widget->next != 0 && siblings != 0) {
        func_8041215C(widget->next, load, siblings);
    }
    if (widget->child != 0) {
        func_8041215C(widget->child, load, siblings);
    }
    switch (widget->type) {
        case 4:
            break;
        case 3:
            if (load != 0) {
                func_804106F4(widget->normal, 3);
            } else {
                func_80411B70(widget->normal);
            }
            break;
        case 8:
            if (widget->normal != 0) {
                func_8041215C(widget->normal, load, 0);
            }
            if (widget->pressed != 0) {
                func_8041215C(widget->pressed, load, 0);
            }
            if (widget->highlighted != 0) {
                func_8041215C(widget->highlighted, load, 0);
            }
            break;
    }
}
