#include "rw_player_state_fields.h"


extern void func_8022D198_de(void *, void *);

/* Original normal state16: symbolic entry and update callbacks. */
RwPlayerStateCallbacks rw_player_state_normal_callbacks_16_us_rev1 = {
    (RwPlayerStateCallback)((char *)func_8022D188_de - 0x80000000U),
    (RwPlayerStateCallback)((char *)func_8022D198_de - 0x80000000U),
};
