extern void *D_8014AED0;

/** Compute a bit mask from the byte at offset 2 of the global record. */
int func_80295B00(void) {
    return 1 << *((unsigned char *)D_8014AED0 + 2);
}
