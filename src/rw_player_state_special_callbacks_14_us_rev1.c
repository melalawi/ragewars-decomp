#include "rw_player_state_fields.h"

extern void func_8022D010_de(void *, void *);
extern void func_8022D040_de(void *, void *);

/* Original special state14: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_special_callbacks_14_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D010_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D040_de - 0x80000000U),
};
