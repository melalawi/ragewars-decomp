#include "types.h"
#include "span_1000/code_802BA23C.h"

/* Writable VI device-manager startup state, filled by802BA350 before
 * starting its thread: active flag, thread, three queues, two DMA callbacks.
 * ROM D9050..D906C, VMA800D8450. No anonymous reserved-word blob. */
OSDevMgr_func_802BA350_de D_800D4420 = {0, 0, 0, 0, 0, 0, 0};
typedef char vi_manager_size[(sizeof(D_800D4420) == 28) ? 1 : -1];
