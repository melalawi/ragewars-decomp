#include "basetypes.h"

/* Returns a frame sequence's current frame index, which func_80419A5C sets. */
struct FrameSequence {
    char pad0[0x44];
    void *target;  /* 0x44: its word at 0x2C receives the current frame value */
    s32 *frames;   /* 0x48: terminated by -1 */
    s32 frame;     /* 0x4C: index of the current frame */
    s32 count;     /* 0x50: frames before the terminator */
    s32 elapsed;   /* 0x54: time accumulated on the current frame */
    s32 duration;  /* 0x58: time each frame is shown */
    s32 flags;     /* 0x5C: playback mode bits func_80419760 tests */
    s32 loops;     /* 0x60: repetitions left when looping is counted */
};

s32 func_80419A6C(struct FrameSequence *sequence) {
    return sequence->frame;
}
