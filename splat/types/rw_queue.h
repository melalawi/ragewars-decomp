#ifndef RAGEWARS_RW_QUEUE_H
#define RAGEWARS_RW_QUEUE_H

/* Recovered independently in 15 landed functions. */
typedef struct RWQueue {
    /* 0x00 */ void **head;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 count;
    /* 0x0C */ s32 index;
    /* 0x10 */ s32 capacity;
    /* 0x14 */ void **entries;
} RWQueue;

#endif
