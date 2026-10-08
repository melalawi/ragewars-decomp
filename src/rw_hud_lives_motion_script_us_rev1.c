#include "types.h"
/* Signed word commands interpreted by func_802A7AA4_de. MOVE takes
 * target x/y and a frame divisor; WAIT takes frames. HOLD (opcode0)
 * is the native default stop state. func_8021EEFC_de installs this
 * script through func_802AA70C_de for the corresponding HUD mover. */
enum MotionCommand { MOTION_HOLD=0, MOTION_POSITION=1, MOTION_WAIT=2,
    MOTION_MOVE=3, MOTION_FALL_Y=4, MOTION_FALL_X=5, MOTION_END=6 };
s32 rw_hud_lives_motion_script_us_rev1[5] = {
    MOTION_MOVE, 16, 16, 2,
    MOTION_HOLD,
};
