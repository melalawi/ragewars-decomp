/* Measures three text layers, positions their labels, and renders the composite text. */
typedef struct {
    int value;
    short mode, reserved;
    int flags, fieldC, field10;
    int *text;
    int field18, spacing, field20, field24;
} Text;
typedef struct { int field0, width, height, rest[7]; } Metrics;
typedef struct { char pad[0x14]; int x, right, y; } Rect;
extern void func_8043F69C(Text *, Metrics *);
extern void func_8044044C(Text *, Rect *, Rect *, int);
extern void func_8043FFAC(Text *, Rect *, Rect *, int, int, int);
void func_80440618(Text *source, Rect *position, Rect *bounds, int flags) {
    Text current;
    Metrics first, second, third;
    int center;
    Text *draw;
    center = (bounds->x + bounds->right) / 2;
    current = *source;
    current.mode = 0;
    func_8043F69C(&current, &first);
    current = *source;
    current.mode = 1;
    current.text = 0;
    func_8043F69C(&current, &second);
    current = *source;
    current.mode = 1;
    current.text = 0;
    func_8043F69C(&current, &third);
    current = *source;
    current.text = 0;
    position->y += first.height;
    if (source->flags & 1) {
        position->x = center - (second.width + third.width) / 2;
    }
    position->x += third.width / 2;
    func_8044044C(&current, position, bounds, flags);
    current = *source;
    current.text = 0;
    position->x += (source->spacing * second.width) / 256 - third.width / 2;
    position->y += second.height / 2 - third.height / 2;
    func_8044044C(&current, position, bounds, flags);
    current = *source;
    if (source->flags & 1) {
        position->x = center - first.width / 2;
    }
    draw = &current;
    func_8043FFAC(draw, position, bounds, flags, *draw->text, 0);
}
