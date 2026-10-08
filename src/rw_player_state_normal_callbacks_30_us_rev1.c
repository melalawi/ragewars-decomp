#include "rw_player_state_fields.h"

extern void func_8022D778_de(void *, void *);
extern void func_8022D794_de(void *, void *);

/* Original normal state30: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_30_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D778_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D794_de - 0x80000000U),
};
