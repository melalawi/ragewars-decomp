#include "resident_huffman_dictionary.h"

/* USrev1 ROM DA100..DA190, VMA 800D9500..800D9590.
 * Four dictionaries bind the scalar parameters to their coefficient-run
 * templates and decoded Huffman nodes. Pointees are separately owned. */
extern const ResidentHuffmanZeroRun huffman_single_zero_runs[1];
extern const ResidentHuffmanZeroRun huffman_five_zero_runs[5];
extern const ResidentHuffmanZeroRun huffman_nine_zero_runs[9];
extern const ResidentHuffmanNode huffman_delta_single_zero_run_nodes[515];
extern const ResidentHuffmanNode huffman_delta_five_zero_runs_nodes[523];
extern const ResidentHuffmanNode huffman_delta_nine_zero_runs_nodes[531];
extern const ResidentHuffmanNode huffman_signed_small_nodes[257];

const struct ResidentHuffmanDictionary huffman_signed7_single_dictionary = {
    -127, 127, 255, 16, 257, 256, 1,
    huffman_single_zero_runs, huffman_delta_single_zero_run_nodes
};
const struct ResidentHuffmanDictionary huffman_signed7_five_dictionary = {
    -127, 127, 255, 16, 261, 256, 5,
    huffman_five_zero_runs, huffman_delta_five_zero_runs_nodes
};
const struct ResidentHuffmanDictionary huffman_signed7_nine_dictionary = {
    -127, 127, 255, 16, 265, 256, 9,
    huffman_nine_zero_runs, huffman_delta_nine_zero_runs_nodes
};
const struct ResidentHuffmanDictionary huffman_signed6_dictionary = {
    -64, 64, -1, 16, -1, 129, 0,
    0, huffman_signed_small_nodes
};

