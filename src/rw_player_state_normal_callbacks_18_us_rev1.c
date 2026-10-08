#include "rw_player_state_fields.h"

extern void func_80225940_de(void *, void *);
extern void func_8022D20C_de(void *, void *);

/* Original normal state18: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_18_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_80225940_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D20C_de - 0x80000000U),
};
