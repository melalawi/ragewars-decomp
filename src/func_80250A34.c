typedef struct func_80250A34_S1 func_80250A34_S1;
struct func_80250A34_S1 {
    char pad0[0x18];
    void* unk18;
};

/** Read the signed byte at offset 0xE from the object's linked record. */
signed char func_80250A34(void *object) {
    void *linked = ((func_80250A34_S1 *)(object))->unk18;
    return ((signed char *)linked)[0xE];
}
