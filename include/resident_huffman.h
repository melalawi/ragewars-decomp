#ifndef RESIDENT_HUFFMAN_H
#define RESIDENT_HUFFMAN_H
/* The decoder at USrev1 0x802C4074 indexes 4-byte nodes. A bit selects
 * the halfword at offset 0 or 2. A node whose first halfword is 0x0800
 * is a terminal; its second halfword is a signed literal or a control code. */
typedef struct ResidentHuffmanNode {
    unsigned short left_or_leaf;
    short right_or_symbol;
} ResidentHuffmanNode;
enum ResidentHuffmanSymbol {
    HUFFMAN_LEAF = 0x0800,
    HUFFMAN_BITS_ESCAPE = 0x0900,
    HUFFMAN_ZERO_RUN_BASE = 0x0A00,
    HUFFMAN_END_BLOCK = 0x0B00
};
#define HUFFMAN_ZERO_RUN(index) (HUFFMAN_ZERO_RUN_BASE + (index))
#endif
