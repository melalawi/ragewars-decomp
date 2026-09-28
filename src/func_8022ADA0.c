/** Report whether the signed word at byte offset 0x5E4 is below 0x6400. */
int func_8022ADA0(void *object) {
    return *(int *)((char *)object + 0x5E4) < 0x6400;
}
