#include "rw_player_state_fields.h"

extern void func_8022CA14_de(void *, void *);
extern void func_8022CB5C_de(void *, void *);

/* Original special state5: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_05_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022CA14_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022CB5C_de - 0x80000000U),
};
