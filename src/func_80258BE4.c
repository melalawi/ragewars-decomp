typedef struct func_80258BE4_S1 func_80258BE4_S1;
struct func_80258BE4_S1 {
    char pad0[0x2B70];
    char* unk2B70;
};

/** Return the indexed twelve-byte record from the table at offset 0x2B70. */
char *func_80258BE4(char *object, int index) {
    return ((func_80258BE4_S1 *)(object))->unk2B70 + index * 12;
}
