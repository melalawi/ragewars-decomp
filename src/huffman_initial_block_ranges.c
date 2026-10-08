#include "resident_huffman.h"

/* USrev1 ROM DA194..DA1E4, resident VMA 800D9594. The decoder at
 * 802C4478 selects these 20-byte ranges, reads start+count at offsets
 * 4/8, advances the bit cursor at 12, and follows the dictionary at 16.
 * Imported dictionaries reside in the preceding, separately owned extent. */
extern const ResidentHuffmanDictionary huffman_signed7_single_dictionary;
extern const ResidentHuffmanDictionary huffman_signed7_five_dictionary;
extern const ResidentHuffmanDictionary huffman_signed7_nine_dictionary;
extern const ResidentHuffmanDictionary huffman_signed6_dictionary;

ResidentHuffmanBlockRange huffman_initial_block_ranges[4] = {
    { 1,   0,  16, 0, &huffman_signed6_dictionary },
    { 0,   0,  35, 0, &huffman_signed7_single_dictionary },
    { 0,  35,  89, 0, &huffman_signed7_five_dictionary },
    { 0, 124, 132, 0, &huffman_signed7_nine_dictionary }
};
typedef char huffman_initial_block_ranges_size_check[
    (sizeof(huffman_initial_block_ranges) == 80) ? 1 : -1];
