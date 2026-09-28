/** Find a byte in a zero-terminated string. */
unsigned char *func_802C24B8(unsigned char *string, unsigned char value) {
    while (*string != value) {
        if (*string == 0) {
            return 0;
        }
        ++string;
    }
    return string;
}
