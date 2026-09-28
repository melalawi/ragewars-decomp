#ifndef RAGEWARS_RW_PACKED_MATRIX_WORDS_H
#define RAGEWARS_RW_PACKED_MATRIX_WORDS_H

/* Split integer/fraction matrix words, recovered in 3 landed files. */
typedef struct RWPackedMatrixWords {
    /* 0x00 */ u32 upper[8];
    /* 0x20 */ u32 lower[8];
} RWPackedMatrixWords;

#endif
