extern void func_80209988(void *object);

/** Reset the inner record via func_80209988, then override two of its fields. */
void func_8021290C(void *arg0) {
    void *level1 = *(void **)((char *)arg0 + 0x1D8);
    void *inner = *(void **)((char *)level1 + 0x1454);
    *(int *)((char *)inner + 0x220) = 0;
    func_80209988(inner);
    *(int *)((char *)inner + 0x2FC) = 0;
    *(int *)((char *)inner + 0xC) = -1;
}
