#ifndef RAGEWARS_RW_DECODE_RANGE_H
#define RAGEWARS_RW_DECODE_RANGE_H

/* Width plus floating base and scale, recovered in 3 landed files. */
typedef struct RWDecodeRange {
    /* 0x00 */ u32 width;
    /* 0x04 */ f32 base;
    /* 0x08 */ f32 scale;
} RWDecodeRange;

#endif
