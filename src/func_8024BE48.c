/** Set or clear status bit two according to the supplied boolean. */
void func_8024BE48(void *object, int enabled) {
    unsigned int *flags = (unsigned int *)((char *)object + 0x2E0);
    if (enabled) {
        *flags |= 2;
    } else {
        *flags &= ~2U;
    }
}
