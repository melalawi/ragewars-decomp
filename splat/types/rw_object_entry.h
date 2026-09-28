#ifndef RAGEWARS_RW_OBJECT_ENTRY_H
#define RAGEWARS_RW_OBJECT_ENTRY_H

/* Object pointer plus six signed words, recovered in 3 landed files. */
typedef struct RWObjectEntry {
    /* 0x00 */ void *object;
    /* 0x04 */ s32 field_04;
    /* 0x08 */ s32 field_08;
    /* 0x0C */ s32 field_0C;
    /* 0x10 */ s32 field_10;
    /* 0x14 */ s32 field_14;
    /* 0x18 */ s32 field_18;
} RWObjectEntry;

#endif
