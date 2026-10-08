#include "types.h"
#include "span_1000/code_802BA23C.h"

/* Two writable VI contexts cleared and selected by802BA210.
 * Existing __OSViContext type includes two12-byte scale records.
 * ROM D8FE0..D9040, VMA800D83E0,48bytes per context. */
__OSViContext_func_802BA910_de D_800D43B0[2] = {
    {0, 0, 0, 0, 0, 0, 0, {0.0f, 0, 0}, {0.0f, 0, 0}},
    {0, 0, 0, 0, 0, 0, 0, {0.0f, 0, 0}, {0.0f, 0, 0}}
};
typedef char vi_context_size[(sizeof(D_800D43B0) ==96) ?1 :-1];
