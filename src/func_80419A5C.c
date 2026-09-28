#include "basetypes.h"

/* func_80419760 advances a frame sequence: it adds elapsed time into offset 0x54 and, once that
   exceeds the duration at 0x58, moves the frame index at 0x4C through the -1 terminated array at
   0x48. func_8041994C resets the index through here after counting the frames. */
struct FrameSequence {
    char pad0[0x44];
    void *target;  /* 0x44: its word at 0x2C receives the current frame value */
    s32 *frames;   /* 0x48: terminated by -1 */
    s32 frame;     /* 0x4C: index of the current frame */
    s32 count;     /* 0x50: frames before the terminator */
    s32 elapsed;   /* 0x54: time accumulated on the current frame */
    s32 duration;  /* 0x58: time each frame is shown */
    s32 unk5C;
    s32 loops;     /* 0x60: repetitions left when looping is counted */
};

void func_80419A5C(struct FrameSequence *sequence, s32 frame) {
    sequence->frame = frame;
}
