/** Report whether the word at object offset 0x28 equals two. */
int func_8020D318(void *arg0) {
    return *(unsigned int *)((char *)arg0 + 0x28) == 2;
}
