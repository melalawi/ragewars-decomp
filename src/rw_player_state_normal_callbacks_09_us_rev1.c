#include "rw_player_state_fields.h"

extern void func_8022CF18_de(void *, void *);
extern void func_80224C4C_de(void *, void *);

/* Original normal state9: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_09_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022CF18_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80224C4C_de - 0x80000000U),
};
