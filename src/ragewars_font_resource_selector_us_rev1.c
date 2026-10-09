#include "types.h"

/* 802AAD14 loads/copies the resident font resource and installs its
 * data pointer here; 802AADBC returns that pointer. ROM D3B90..D3B94. */
void *D_800D2F90 = 0;
