typedef struct func_8026439C_S1 func_8026439C_S1;
struct func_8026439C_S1 {
    char pad0[0xB6];
    unsigned char unkB6;
};

/** Return the high bit of the byte at object offset 0xB6. */
unsigned int func_8026439C(void *arg0) {
    return ((func_8026439C_S1 *)(arg0))->unkB6 >> 7;
}
