#include "rw_player_state_fields.h"

extern void func_8022D970_de(void *, void *);
extern void func_80225D34_de(void *, void *);

/* Original normal state35: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_35_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D970_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80225D34_de - 0x80000000U),
};
