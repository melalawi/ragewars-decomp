#include "rw_player_state_fields.h"

extern void func_8022C8EC_de(void *, void *);
extern void func_8022470C_de(void *, void *);

/* Original normal state3: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_03_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022C8EC_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022470C_de - 0x80000000U),
};
