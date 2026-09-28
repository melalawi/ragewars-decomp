#ifndef RAGEWARS_RW_INSTANCE_SNAPSHOT_H
#define RAGEWARS_RW_INSTANCE_SNAPSHOT_H

/* Opaque 0x50-byte instance record, recovered in 7 landed functions. */
typedef struct RWInstanceSnapshot {
    /* 0x00 */ s32 words[20];
} RWInstanceSnapshot;

#endif
