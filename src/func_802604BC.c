typedef struct func_802604BC_S1 func_802604BC_S1;
struct func_802604BC_S1 {
    char pad0[0x10];
    unsigned int* unk10;
};

/** Return the first word of the object referenced at offset 0x10. */
unsigned int func_802604BC(void *object) {
    return *((func_802604BC_S1 *)(object))->unk10;
}
