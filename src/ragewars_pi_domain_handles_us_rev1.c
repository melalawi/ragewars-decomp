#include "types.h"
#include "span_1000/code_802B8DD0.h"

/* PI DMA handlers select the current handle using domain << 2;
 * two symbolic resident cartridge/disk handle addresses initialize it.
 * ROM D8FB0..D8FB8. */
extern OSPiHandle_s_func_802B93B0_de D_801486C0;
extern OSPiHandle_s_func_802B93B0_de D_80148740;
OSPiHandle_s_func_802B93B0_de *D_800D4380[2] = {
    &D_801486C0, &D_80148740
};
