#include "span_16E000/code_804196C0.h"
#include "span_16E000/code_8040C780.h"
#include "types.h"

/* Handles the frame playback tick (event 0xE08) through the existing five-argument
   Handler802A2B50 contract. The third argument is elapsed time; the event and
   remaining arguments do not affect playback. */

extern void func_804199DC_de(struct FrameSequence_func_804199DC_de *, s32);
extern void func_80419A18_de(struct FrameSequence_func_804199DC_de *, s32);
extern void func_80419A28_de(struct FrameSequence_func_804199DC_de *, s32);
extern s32 func_80419A3C_de(struct FrameSequence_func_804199DC_de *, s32);
s32 func_804196D8_de(void *object, s32 unused, s32 elapsed, s32 unused3, s32 unused4) {
    struct FrameSequence_func_804199DC_de *sequence = object;
    Widget_func_8040CD50_de *target;
    if (func_80419A3C_de(sequence, 4) == 0) {
        sequence->elapsed += elapsed;
        target = sequence->target;
        target->image = sequence->frames[sequence->frame];
        if (sequence->elapsed > sequence->duration) {
            sequence->elapsed = 0;
            if (func_80419A3C_de(sequence, 1)) {
                if (sequence->frame < sequence->count - 1) {
                    sequence->frame++;
                } else if (func_80419A3C_de(sequence, 0x10)) {
                    func_80419A28_de(sequence, 1);
                    func_80419A18_de(sequence, 2);
                    func_804199DC_de(sequence, sequence->count - 2);
                } else if (func_80419A3C_de(sequence, 0x20)) {
                    if (sequence->loops > 0) {
                        sequence->loops--;
                        func_804199DC_de(sequence, 0);
                    }
                } else if (func_80419A3C_de(sequence, 8)) {
                    func_804199DC_de(sequence, 0);
                }
            } else {
                if (sequence->frame > 0) {
                    sequence->frame--;
                } else if (func_80419A3C_de(sequence, 0x10)) {
                    func_80419A28_de(sequence, 2);
                    func_80419A18_de(sequence, 1);
                    func_804199DC_de(sequence, 1);
                } else if (func_80419A3C_de(sequence, 0x20)) {
                    if (sequence->loops > 0) {
                        sequence->loops--;
                        func_804199DC_de(sequence, sequence->count - 1);
                    }
                } else if (func_80419A3C_de(sequence, 8)) {
                    func_804199DC_de(sequence, sequence->count - 1);
                }
            }
        }
    }
    return 0;
}
