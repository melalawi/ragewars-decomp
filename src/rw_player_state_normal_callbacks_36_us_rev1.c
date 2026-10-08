#include "rw_player_state_fields.h"

extern void func_8022DA04_de(void *, void *);
extern void func_8022DA30_de(void *, void *);

/* Original normal state36: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_36_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022DA04_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022DA30_de - 0x80000000U),
};
