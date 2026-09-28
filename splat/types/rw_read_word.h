#ifndef RAGEWARS_RW_READ_WORD_H
#define RAGEWARS_RW_READ_WORD_H

/* Byte-at-a-time 32-bit input accumulator, recovered in 8 landed functions. */
typedef struct RWReadWord {
    /* 0x00 */ s32 word;
    /* 0x04 */ u8 byte;
} RWReadWord;

#endif
