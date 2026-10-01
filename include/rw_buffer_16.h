#ifndef RAGEWARS_RW_BUFFER_16_H
#define RAGEWARS_RW_BUFFER_16_H

/* Sixteen-byte mixed-width buffer header, recovered in 3 landed files. */
typedef struct RWBuffer16 {
    /* 0x00 */ s16 count;
    /* 0x02 */ s16 pad_02;
    /* 0x04 */ s32 value;
    /* 0x08 */ s32 pad_08;
    /* 0x0C */ s32 pad_0C;
} RWBuffer16;

#endif
