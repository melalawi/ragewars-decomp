/** Return the upper two bits of the halfword at object offset 6. */
unsigned int func_8025E568(void *arg0) {
    return *(unsigned short *)((char *)arg0 + 6) >> 14;
}
