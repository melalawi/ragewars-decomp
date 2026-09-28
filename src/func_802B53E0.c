/** Copy the requested number of bytes. */
void func_802B53E0(unsigned char *source, unsigned char *destination, int count) {
    int index;
    for (index = 0; index < count; index++) {
        *destination++ = *source++;
    }
}
