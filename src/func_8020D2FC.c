/** Set the word at byte offset 0x28 to the state value two. */
void func_8020D2FC(void *object) {
    *(int *)((char *)object + 0x28) = 2;
}
