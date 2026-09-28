/** Return the high bit of the byte at object offset 0xB6. */
unsigned int func_8026439C(void *arg0) {
    return *(unsigned char *)((char *)arg0 + 0xB6) >> 7;
}
