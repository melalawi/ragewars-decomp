#ifndef RAGEWARS_RW_OWNER_ENTRIES_H
#define RAGEWARS_RW_OWNER_ENTRIES_H

/* Partial owner record exposing its entry-array pointer, recovered in 4 landed files. */
typedef struct RWOwnerEntries {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ u8 *entries;
} RWOwnerEntries;

#endif
