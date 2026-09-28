/** Return the word stored at offset 0x10. */
unsigned int func_8022F388(void *object) {
    return *(unsigned int *)((char *)object + 0x10);
}
