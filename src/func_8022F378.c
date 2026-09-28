/** Advance the word at offset 0x10 by 0x500. */
void func_8022F378(void *object) {
    *(int *)((char *)object + 0x10) += 0x500;
}
