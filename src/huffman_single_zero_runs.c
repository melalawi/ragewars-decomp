#include "resident_huffman.h"

/* USrev1 ROM 0xDA1E4..0xDA39C, VMA 0x800D95E4.
 * Template count and zero coefficient values are consumed by 0x802C4244
 * and 0x802C4270. The unused header/tail slots remain initialized. */
const ResidentHuffmanZeroRun huffman_single_zero_runs[1] = {
    { "(  11   0's ) ", { 0 }, { { 0, 0 } }, 11, { 0 }, -1, -1 },
};
typedef char huffman_single_zero_runs_size_check[(sizeof(huffman_single_zero_runs) == 440) ? 1 : -1];
