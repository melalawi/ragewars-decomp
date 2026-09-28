/** Consume and return one byte from the stream pointer at offset 8. */
int func_802B7480(void *stream) {
    unsigned char *cursor = *(unsigned char **)((char *)stream + 8);
    int value = *cursor;
    *(unsigned char **)((char *)stream + 8) = cursor + 1;
    return value;
}
