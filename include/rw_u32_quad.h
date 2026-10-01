#ifndef RAGEWARS_RW_U32_QUAD_H
#define RAGEWARS_RW_U32_QUAD_H

/* Four unsigned words, recovered independently in 3 landed files. */
typedef struct RWU32Quad {
    /* 0x00 */ u32 x;
    /* 0x04 */ u32 y;
    /* 0x08 */ u32 z;
    /* 0x0C */ u32 w;
} RWU32Quad;

#endif
