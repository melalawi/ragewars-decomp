/* Steps a blink-style frame animation while active (0x84 == 1): idle, it counts the delay at 0x7C down
   (kept within 0..50) and, once it runs out, starts blinking with a 2% chance per step; blinking, it
   restores the sprite's base byte, counts the current frame's timer down and on expiry advances to the
   next frame, showing its value on the sprite with sound 0xE75, or after the last frame resets through
   func_80419D04 and waits 50 steps again. */
#include "basetypes.h"

typedef struct {
    u8 pad0[0x10];
    u8 value;
} Sprite;

typedef struct {
    u8 pad0[3];
    u8 value;
} BlinkFrame;

typedef struct {
    u8 pad0[0x44];
    s32 blinking;
    s32 count;
    BlinkFrame frames[5];
    s32 timers[5];
    s32 frame;
    Sprite *sprite;
    s32 delay;
    u8 pad80[3];
    u8 base;
    s32 active;
} Blinker;

extern s32 func_80274544(void);
extern void func_80419D04(Blinker *obj, s32 arg1);
extern void func_8025DF54(s32 sound);

s32 func_80419B90(Blinker *obj)
{
    Blinker *self = obj; /* FAKEMATCH: copy-only local holds the object in a second saved register */
    s32 delay;
    s32 t;

    if (obj->active == 1) {
        if (obj->blinking == 0) {
            t = obj->delay - 1;
            self->delay = delay = (t < 0) ? 0 : (t > 50) ? 50 : t;
            if (delay <= 0 && func_80274544() % 100 < 2) {
                self->blinking = 1;
                self->sprite->value = self->frames[self->frame].value;
                func_8025DF54(0xE75);
            }
        } else {
            obj->sprite->value = obj->base;
            obj->timers[obj->frame]--;
            if (obj->timers[obj->frame] <= 0 || obj->frame + 1 >= obj->count) {
                obj->frame++;
                if (obj->frame >= obj->count) {
                    func_80419D04(obj, -1);
                    obj->sprite->value = obj->base;
                    obj->delay = 50;
                } else {
                    self->sprite->value = self->frames[obj->frame].value;
                    func_8025DF54(0xE75);
                }
            }
        }
    }
    return 0;
}
