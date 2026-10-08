#include "types.h"
#include "span_1000/code_802BA23C.h"
#include "span_1000/code_802B8DD0.h"

/* PI device manager: thread, command/event/access queues and DMA callbacks
 * are installed by 802B8DC8. 802B8DA0 returns the command queue.
 * PI initialization links cartridge and disk handles through D_800D437C.
 * ROM D8F90..D8FB0. */
OSDevMgr_func_802BA350_de D_800D4360 = {0, 0, 0, 0, 0, 0, 0};
OSPiHandle_s_func_802B93B0_de *D_800D437C = 0;
