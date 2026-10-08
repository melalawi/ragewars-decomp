#include "rw_player_state_fields.h"

extern void func_8022D708_de(void *, void *);
extern void func_8022D724_de(void *, void *);

/* Original special state28: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_28_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D708_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D724_de - 0x80000000U),
};
