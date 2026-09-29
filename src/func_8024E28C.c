typedef struct func_8024E28C_S1 func_8024E28C_S1;
struct func_8024E28C_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return bit two of the nested state word. */
unsigned int func_8024E28C(char *object) {
    return (*(unsigned int *)(((func_8024E28C_S1 *)(object))->unk18 + 4) >> 2) & 1;
}
