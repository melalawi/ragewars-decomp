#include "rw_player_state_fields.h"

extern void func_8022CD78_de(void *, void *);
extern void func_8022CDBC_de(void *, void *);

/* Original normal state7: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_07_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022CD78_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022CDBC_de - 0x80000000U),
};
