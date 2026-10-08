#include "resident_huffman.h"

/* USrev1 ROM 0xDABA8..0xDB440, VMA 0x800D9FA8.
 * Template count and zero coefficient values are consumed by 0x802C4244
 * and 0x802C4270. The unused header/tail slots remain initialized. */
const ResidentHuffmanZeroRun huffman_five_zero_runs[5] = {
    { "(  11   0's ) ", { 0 }, { { 0, 0 } }, 11, { 0 }, -1, -1 },
    { "(  16   0's ) ", { 0 }, { { 0, 0 } }, 16, { 0 }, -1, -1 },
    { "(  23   0's ) ", { 0 }, { { 0, 0 } }, 23, { 0 }, -1, -1 },
    { "(  28   0's ) ", { 0 }, { { 0, 0 } }, 28, { 0 }, -1, -1 },
    { "(  32   0's ) ", { 0 }, { { 0, 0 } }, 32, { 0 }, -1, -1 },
};
typedef char huffman_five_zero_runs_size_check[(sizeof(huffman_five_zero_runs) == 2200) ? 1 : -1];
