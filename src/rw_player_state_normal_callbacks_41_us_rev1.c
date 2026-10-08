#include "rw_player_state_fields.h"

extern void func_8022D890_de(void *, void *);
extern void func_8022D8AC_de(void *, void *);

/* Original normal state41: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_41_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D890_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D8AC_de - 0x80000000U),
};
