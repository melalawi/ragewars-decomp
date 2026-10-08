#include "rw_player_state_fields.h"

extern void func_8022D698_de(void *, void *);
extern void func_8022D6B4_de(void *, void *);

/* Original special state27: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_27_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D698_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D6B4_de - 0x80000000U),
};
