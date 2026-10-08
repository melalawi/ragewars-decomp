#include "rw_player_state_fields.h"

extern void func_8022D820_de(void *, void *);
extern void func_8022D83C_de(void *, void *);

/* Original special state24: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_24_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D820_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D83C_de - 0x80000000U),
};
