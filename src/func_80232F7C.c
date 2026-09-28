/* Applies the negated, scaled speed of the event's source (float at 0x294, scaled by D_800C8130) to an
   object through func_80273A34 when the event side at 0x4 matches the mode: side 2 in mode 1, side 0
   otherwise. */
typedef struct {
    char pad[0x294];
    float speed;
} Source;

typedef struct {
    int unk0;
    int side;
    Source *source;
} Event;

extern float D_800C8130;
extern int D_801450B8;
extern void func_80273A34(void *, float);

void func_80232F7C(void *obj, Event *event) {
    float v = event->source->speed * D_800C8130;

    if (D_801450B8 == 1) {
        if (event->side == 2) {
            func_80273A34(obj, -v);
        }
    } else if (event->side == 0) {
        func_80273A34(obj, -v);
    }
}
