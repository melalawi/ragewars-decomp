#ifndef RAGEWARS_RW_S32_QUAD_H
#define RAGEWARS_RW_S32_QUAD_H

/* Four signed words, recovered independently in 18 landed files. */
typedef struct RWS32Quad {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 z;
    /* 0x0C */ s32 w;
} RWS32Quad;

#endif
