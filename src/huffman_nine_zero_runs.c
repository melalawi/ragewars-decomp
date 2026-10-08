#include "resident_huffman.h"

/* USrev1 ROM 0xDBC6C..0xDCBE4, VMA 0x800DB06C.
 * Template count and zero coefficient values are consumed by 0x802C4244
 * and 0x802C4270. The unused header/tail slots remain initialized. */
const ResidentHuffmanZeroRun huffman_nine_zero_runs[9] = {
    { "(   8   0's ) ", { 0 }, { { 0, 0 } }, 8, { 0 }, -1, -1 },
    { "(  14   0's ) ", { 0 }, { { 0, 0 } }, 14, { 0 }, -1, -1 },
    { "(  18   0's ) ", { 0 }, { { 0, 0 } }, 18, { 0 }, -1, -1 },
    { "(  22   0's ) ", { 0 }, { { 0, 0 } }, 22, { 0 }, -1, -1 },
    { "(  24   0's ) ", { 0 }, { { 0, 0 } }, 24, { 0 }, -1, -1 },
    { "(  26   0's ) ", { 0 }, { { 0, 0 } }, 26, { 0 }, -1, -1 },
    { "(  28   0's ) ", { 0 }, { { 0, 0 } }, 28, { 0 }, -1, -1 },
    { "(  30   0's ) ", { 0 }, { { 0, 0 } }, 30, { 0 }, -1, -1 },
    { "(  32   0's ) ", { 0 }, { { 0, 0 } }, 32, { 0 }, -1, -1 },
};
typedef char huffman_nine_zero_runs_size_check[(sizeof(huffman_nine_zero_runs) == 3960) ? 1 : -1];
