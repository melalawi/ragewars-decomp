/* Steps an animation cursor one frame: looks up the clip in D_8011FE88, keeps the previous frame,
   and moves forward in states 1 and 2 or backward in states 3 and 4; at either end a looping clip
   (mode 1) wraps and a ping-pong clip (mode 0) reverses direction. */
#include "basetypes.h"

typedef struct {
    s16 mode;
    s16 frames;
} Clip;

typedef struct {
    s8 state;
    u8 clip;
    s16 frame;
    s16 previous;
} Cursor;

extern char D_8011FE88;
extern Clip *func_8028D1F4(char *, s32);

void func_802192C0(Cursor *cursor) {
    Clip *clip;
    s32 frames;
    s32 state;

    clip = func_8028D1F4(&D_8011FE88, cursor->clip);
    frames = clip->frames;
    state = cursor->state;
    cursor->previous = cursor->frame;
    switch (state) {
    case 1:
    case 2:
        {
            cursor->state = 1;
            if (++cursor->frame == frames) {
                switch (clip->mode) {
                case 1:
                    cursor->frame = 0;
                    break;
                case 0:
                    cursor->frame = frames - 2;
                    cursor->state = 3;
                    break;
                }
            }
        }
        break;
    case 3:
    case 4:
        {
            cursor->state = 3;
            if (--cursor->frame < 0) {
                switch (clip->mode) {
                case 0:
                    cursor->frame = 1;
                    cursor->state = 1;
                    break;
                case 1:
                    cursor->frame = frames - 1;
                    break;
                }
            }
        }
    }
}
