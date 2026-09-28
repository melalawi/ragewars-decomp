/** Return the low three mode bits when the record type is one. */
int func_8024E768(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return *(unsigned int *)((char *)arg0 + 0x38) & 7;
    }
    return 0;
}
