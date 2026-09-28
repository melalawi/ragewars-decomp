/** Copy a byte span and return its destination. */
void *func_802C2490(void *destination, const void *source, int count) {
    unsigned char *out = destination;
    const unsigned char *in = source;
    while (count != 0) {
        *out++ = *in++;
        --count;
    }
    return destination;
}
