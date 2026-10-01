#ifndef RAGEWARS_ROMTYPES_H
#define RAGEWARS_ROMTYPES_H

/* Shared game records decoded from the ROM's compiler type table.  Only field
 * names whose offsets are independently exercised by landed, byte-exact C are
 * exposed here; the remaining bytes stay opaque until another landed function
 * corroborates them.
 */

typedef struct CInstanceHdr_t {
    /* 0x00 */ u8 unk_0x00;
    /* 0x01 */ u8 m_Type;
    /* 0x02 */ u8 m_nModel;
    /* 0x03 */ u8 unk_0x03[0x19];
} CInstanceHdr_t;

typedef struct CAnimInstanceHdr_t {
    /* 0x00 */ u8 unk_0x00[0x3C];
    /* 0x3C */ u32 m_CollFlags;
    /* 0x40 */ u8 unk_0x40[0x10];
} CAnimInstanceHdr_t;

#endif
