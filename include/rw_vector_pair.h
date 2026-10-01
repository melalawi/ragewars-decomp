#ifndef RAGEWARS_RW_VECTOR_PAIR_H
#define RAGEWARS_RW_VECTOR_PAIR_H

/* Two vectors plus an opaque two-word tail, recovered in 3 landed files. */
typedef struct RWVectorPair {
    /* 0x00 */ Vector3f first;
    /* 0x0C */ Vector3f second;
    /* 0x18 */ u8 pad_18[0x08];
} RWVectorPair;

#endif
