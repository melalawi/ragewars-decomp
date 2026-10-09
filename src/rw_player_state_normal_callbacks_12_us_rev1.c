#include "rw_player_state_fields.h"


extern void func_80224F5C_de(void *, void *);

/* Original normal state12: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_12_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022CF38_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80224F5C_de - 0x80000000U),
};
