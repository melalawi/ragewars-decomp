#include "rw_player_state_fields.h"

extern void func_8022DB04_de(void *, void *);
extern void func_80226340_de(void *, void *);

/* Original normal state38: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_38_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022DB04_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80226340_de - 0x80000000U),
};
