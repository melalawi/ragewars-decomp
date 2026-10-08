#include "rw_player_state_fields.h"

extern void func_8022CE78_de(void *, void *);

/* Original special state8: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_08_us_rev1 = {
    0,
    (RwPlayerStateCallback)((char *)func_8022CE78_de - 0x80000000U),
};
