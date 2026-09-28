/* Draws a widget's image as a solid textured quad: when func_8040E154 places the widget it narrows
   the scissor to the widget's box if its flags ask for clipping (0x200, skipping the draw when
   nothing is left), flushes the queued text sprites through func_8040CB30 if any queued batch
   overlaps the widget's area, loads the image through func_804106F4, selects render mode 0x53333
   if needed and draws the area with the draw arguments' alpha through func_80418E20, restoring the
   scissor afterwards. Adapted from func_8040E6FC with the batch overlap test as an inline helper. */
#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 flags;
    f32 scaleX;
    f32 scaleY;
    u8 alpha;
    u8 pad15[3];
    s32 v[4];
} DrawArgs;

typedef struct {
    s32 left;
    s32 top;
    s32 right;
    s32 bottom;
} Rect;

typedef struct {
    s32 x0;
    s32 x1;
    s32 y0;
    s32 y1;
} Area;

typedef struct {
    Area area;
    void *cursor;
    s32 count;
} Batch;

typedef struct {
    char pad0[0x12];
    u16 flags;
    char pad14[0x18];
    s32 image;
} Widget;

extern s32 D_80153800;
extern Batch D_80153820[];
extern s32 D_800E2AB8;
extern s32 D_800E2ABC;

extern s32 func_8040E154(Area *area, Rect *box, Widget *widget, DrawArgs *args);
extern void func_802A2898(s32 *left, s32 *right, s32 *top, s32 *bottom);
extern s32 func_8040F508(Rect *clip, Rect *box);
extern void func_802A2870(s32 left, s32 right, s32 top, s32 bottom);
extern void func_8040CB30(void);
extern s32 func_804106F4(s32 image, s32 mode);
extern void func_804171B8(s32 mode);
extern void func_80417574(s32 texture);
extern void func_80418E20(f32 x, f32 y, f32 z, f32 width, f32 height, s32 color);

static inline s32 func_8040CDD0_overlaps(Area *area) {
    Batch *batch;
    s32 i;

    for (i = 0; i < D_80153800; i++) {
        batch = &D_80153820[i];
        if (area->x1 < batch->area.x0 || batch->area.x1 < area->x0 || area->y1 < batch->area.y0 ||
            batch->area.y1 < area->y0) {
            continue;
        }
        return 1;
    }
    return 0;
}

void func_8040CDD0(Widget *widget, DrawArgs args) {
    Rect box;
    Area area;
    Rect saved;
    Rect clip;
    s32 clipped;
    s32 texture;
    s32 color;

    clipped = 0;
    if (func_8040E154(&area, &box, widget, &args) == 0) {
        return;
    }
    if (widget->flags & 0x200) {
        func_802A2898(&saved.left, &saved.right, &saved.top, &saved.bottom);
        clip = saved;
        if (func_8040F508(&clip, &box) == 0) {
            return;
        }
        clipped = 1;
        func_802A2870(clip.left, clip.right, clip.top, clip.bottom);
    }
    if (func_8040CDD0_overlaps(&area)) {
        func_8040CB30();
    }
    texture = func_804106F4(widget->image, 1);
    color = (args.alpha << 24) | 0xFFFFFF;
    if (D_800E2ABC != 0x53333 || D_800E2AB8 == 0) {
        D_800E2ABC = 0x53333;
        func_804171B8(0x53333);
        D_800E2AB8 = 1;
    }
    func_80417574(texture);
    func_80418E20(area.x0, area.y0, 0.0f, area.x1 - area.x0 + 1, area.y1 - area.y0 + 1, color);
    if (clipped) {
        func_802A2870(saved.left, saved.right, saved.top, saved.bottom);
    }
}
