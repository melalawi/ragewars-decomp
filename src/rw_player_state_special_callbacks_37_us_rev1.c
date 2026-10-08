#include "rw_player_state_fields.h"

extern void func_8022DA84_de(void *, void *);
extern void func_8022DAB0_de(void *, void *);

/* Original special state37: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_37_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022DA84_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022DAB0_de - 0x80000000U),
};
