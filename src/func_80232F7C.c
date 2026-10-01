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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F70_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8130_4 = 1.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32F0_4 = 1.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3330_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3040_4 = 1.5f;
#endif
