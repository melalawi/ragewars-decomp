#include "rw_player_state_fields.h"

extern void func_8022D938_de(void *, void *);
extern void func_8022D954_de(void *, void *);

/* Original normal state44: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_44_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D938_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D954_de - 0x80000000U),
};
