typedef struct func_8028D620_S1 func_8028D620_S1;
struct func_8028D620_S1 {
    char pad0[0x10BC];
    int unk10BC;
};

/** Clear the object field at offset 0x10BC. */
void func_8028D620(void *object) {
    ((func_8028D620_S1 *)(object))->unk10BC = 0;
}
