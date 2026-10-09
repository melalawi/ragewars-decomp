#include "resident_pickup_descriptors.h"

extern s32 func_802ACD28_de(void *, void *);

/* 2 descriptors traversed by 802AB400/802AB6EC at stride 20.
 * Callbacks retain the cartridge encoding with the KSEG0 bias removed.
 * ROM D3F68..D3F90. */
ResidentLifeDescriptor D_800D3368[2] = {
    {{0, 1705, 1, 0, 0}, 1, 0, (ResidentPickupHandler)((char *)func_802ACD28_de - 0x80000000U)},
    {{0, 1706, 1, 0, 0}, 10, 0, (ResidentPickupHandler)((char *)func_802ACD28_de - 0x80000000U)},
};
