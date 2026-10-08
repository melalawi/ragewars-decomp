#include "rw_player_state_fields.h"

extern void func_8022D660_de(void *, void *);
extern void func_8022D67C_de(void *, void *);

/* Original special state23: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_23_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D660_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D67C_de - 0x80000000U),
};
