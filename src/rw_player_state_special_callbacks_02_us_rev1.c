#include "rw_player_state_fields.h"

extern void func_8022C8A4_de(void *, void *);
extern void func_80224408_de(void *, void *);

/* Original special state2: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_02_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022C8A4_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_80224408_de - 0x80000000U),
};
