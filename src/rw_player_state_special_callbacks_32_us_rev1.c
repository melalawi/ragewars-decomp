#include "rw_player_state_fields.h"

extern void func_8022D7E8_de(void *, void *);
extern void func_8022D804_de(void *, void *);

/* Original special state32: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_32_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D7E8_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D804_de - 0x80000000U),
};
