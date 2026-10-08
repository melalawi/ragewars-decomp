#include "rw_player_state_fields.h"

extern void func_8022C8F4_de(void *, void *);
extern void func_8022C8FC_de(void *, void *);

/* Original normal state4: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_04_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022C8F4_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022C8FC_de - 0x80000000U),
};
