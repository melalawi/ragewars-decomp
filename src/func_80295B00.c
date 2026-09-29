typedef struct func_80295B00_S1 func_80295B00_S1;
struct func_80295B00_S1 {
    char pad0[0x2];
    unsigned char unk2;
};

extern func_80295B00_S1 *D_8014AED0;

/** Compute a bit mask from the byte at offset 2 of the global record. */
int func_80295B00(void) {
    return 1 << D_8014AED0->unk2;
}
