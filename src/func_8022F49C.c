#ifdef NON_MATCHING
/* Read the indexed object byte at offset 0x18. */
typedef unsigned char u8;
typedef signed int s32;

s32 func_8022F49C(u8 *base, s32 index) {
    return (base + index)[0x18];
}
#endif
